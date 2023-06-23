#include<stdlib.h>
#include<iostream>
#include<verilated.h>
#include<verilated_vcd_c.h>
#include<Vtry_misalign.h>
#define MAX_SIM_TIME 200


vluint64_t sim_time =0;
vluint64_t posedge_cnt=0;

void dut_reset (Vtry_misalign *dut , vluint64_t &sim_time);

int main (int argc, char** argv , char** env) {
	Verilated::commandArgs(argc,argv);
	Vtry_misalign *dut = new Vtry_misalign;

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
			dut->inst_in= 0x006fc104 ;
			dut->pc_in = 0;

		}

		if ((posedge_cnt >=4 ) && (posedge_cnt <=5 )&& (dut->stall_pc == 1)){
				dut->pc_in=2;

		}

		if ((posedge_cnt >= 5)&& (posedge_cnt <=6 )&& (dut->pc_4_next == 1)&& (dut->stall_pc == 0)){
			dut->inst_in = 0x41040040;

		}

		if (posedge_cnt >7){
			dut->pc_in=6; 
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

void dut_reset (Vtry_misalign *dut, vluint64_t &sim_time){
    dut->reset = 0;
    if((sim_time >=0) && (sim_time <=4)){
        dut->reset = 1;
        dut->pc_in =0;
		dut->inst_in=0;
		dut->sel_for_branch=0;
    }
}


