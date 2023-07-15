#include<stdlib.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include<Vc_extention_unit.h>
#define MAX_SIM_TIME 200


vluint64_t sim_time =0;
vluint64_t posedge_cnt=0;

void dut_reset (Vc_extention_unit *dut , vluint64_t &sim_time);

int main (int argc, char** argv , char** env) {
	Verilated::commandArgs(argc,argv);
	Vc_extention_unit *dut = new Vc_extention_unit;

	Verilated::traceEverOn(true);
	VerilatedVcdC *m_trace = new VerilatedVcdC;
	dut->trace(m_trace,10);
	m_trace->open("waveform.vcd");

	while (sim_time <MAX_SIM_TIME) {

		dut_reset(dut,sim_time);
		dut->clk^= 1;
		dut->eval();		
		if (dut->clk == 1) {
		if ((posedge_cnt >=3) && (posedge_cnt <=4)) {
			dut->instr_i= 0x006fc104 ;
			dut->pc_i = 0;

		}

		if ((posedge_cnt >=4 ) && (posedge_cnt <=5 )&& (dut->pc_half_o == 1)){
				dut->pc_i=2;

		}

		if ((posedge_cnt >= 4)&& (posedge_cnt <=6 )&&  (dut->i_cache_request == 1)){
			dut->instr_i = 0x41040040;
			dut->i_cache_valid	=1;

		}

		if (posedge_cnt >7){
			dut->pc_i=6; 
			dut->i_cache_valid	=0;
		}
		
		posedge_cnt++ ;
		}				
	
	m_trace-> dump(sim_time);
	sim_time++;
	}

	m_trace->close();
	delete dut;
	exit(EXIT_SUCCESS);
}

void dut_reset (Vc_extention_unit *dut, vluint64_t &sim_time){
    dut->reset = 0;
    if((sim_time >=0) && (sim_time <=4)){
        dut->reset = 1;
        dut->pc_i =0;
		dut->instr_i=0;
		dut->br_taken_i=0;
		dut->i_cache_valid=0;
    }
}


