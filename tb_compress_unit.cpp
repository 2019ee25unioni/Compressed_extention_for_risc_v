#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vcompress_unit.h"
//#include "Vcompress_unit___024unit.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);
    	Vcompress_unit *dut = new Vcompress_unit;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_SIM_TIME) {
    
    	if ((dut->next_comp16 == 1) & (dut->pc==0)){
    		dut->pc =1;
    	}
    	else {dut->pc=0;}

    	if(sim_time >= 1 && sim_time <= 2){
		dut->inst = 0x0040006f;
		//dut->pc = 0;
		
    	}
    	if(sim_time >=3 && sim_time <= 4){
		dut->inst = 0x4104c104;
		//dut->pc = 1;
		
    	}
    	if(sim_time >=5 && sim_time <= 6){
		dut->inst = 0x00890009;
		//dut->pc = 0x1;
		
    	}
    	if(sim_time >=7 && sim_time <= 8){//inst4
		dut->inst = 0x40892821;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=9 && sim_time <= 10){
		dut->inst = 0x80096089;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=11 && sim_time <= 12){
		dut->inst = 0x88098409;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=13 && sim_time <=14 ){//inst7
		dut->inst = 0x8c458c05;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=15 && sim_time <= 16){
		dut->inst = 0xa0198c65;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=17 && sim_time <= 18){
		dut->inst = 0xf07dc091;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=19 && sim_time <= 20){//inst10
		dut->inst = 0x4282008a;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=21 && sim_time <= 22){
		dut->inst = 0x808a8082;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=23 && sim_time <= 24){
		dut->inst = 0x90829002;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >=25 && sim_time <= 26){//instr13
		dut->inst = 0xc016908a;
		//dut->pc =0 ;
		
    	}
    	if(sim_time >= 27 && sim_time <=28 ){//inst0
		dut->inst = 0x0;
		//dut->pc = 0;
		
    	}    	
        //dut->clk ^= 1;
        dut->eval();
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
