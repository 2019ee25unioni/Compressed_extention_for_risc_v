#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vc_top.h"
//#include "Vcompress_unit___024unit.h"

#define MAX_SIM_TIME 100
vluint64_t sim_time = 0;
vluint64_t posedge_cnt = 0;

int main(int argc, char** argv, char** env) {
	Verilated::commandArgs(argc, argv);
    	Vc_top *dut = new Vc_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    while (sim_time < MAX_SIM_TIME) {
    
    	dut->clk ^= 1;
    	dut->reset_i=0;
    	dut->eval();
    	if(dut->clk == 1){
    		posedge_cnt++;        		// Increment posedge counter if clk is 1
	}
					      //0089	  -->c.addi ra,ra,2  	 		(0x00208093)
					      //0040006f  -->j	4 <gcd>				(0x0040006f)
					      //00952023  -->sw	s1,0(a0)			(0x00952023)
					      //c104	  -->c.sw	s1,0(a0)		(0x00952023)
					      //1101      -->c.addi	sp,sp,-32		(0xFE010113)

         if (posedge_cnt <= 3){		        //reset
            	dut->reset_i =1;
    		dut->pc_i=0;
    		dut->instr_i=0;
    		dut->br_taken_i=0;
        }
        if (posedge_cnt == 4){            	
    		dut->reset_i =0;
    		dut->br_taken_i=0;
           	dut->pc_i=0x0;
            	dut->instr_i=0x006f0089;        //c.add	ra,ra,2
            					//j	4 <gcd>
            	
        }              
        if ((posedge_cnt == 5) && (dut->stall_o==1)){
        	dut->br_taken_i=0;
         	dut->pc_i=2;
            	dut->instr_i=0x20230040;      //j	4 <gcd>  
    	 				     //sw	s1,0(a0)         	
    		
        }
        if (posedge_cnt == 6){            	
    		dut->reset_i =0;
    		dut->br_taken_i=0;
           	dut->pc_i=0x2;
            	dut->instr_i=0x006f0089;        //c.add	ra,ra,2
            					//j	4 <gcd>
            	
        }              
        if (posedge_cnt == 7){            	
    		dut->br_taken_i=0;
            	dut->pc_i=6;
            	dut->instr_i=0x20230040;      //j	4 <gcd>  
    	 				     //sw	s1,0(a0)  
            	
        }
        if ((posedge_cnt == 7) && (dut->stall_o==1)){
        	dut->br_taken_i=0;
         	dut->pc_i=6;
            	dut->instr_i=0xc1040095;	//sw	s1,0(a0)     
            					//c.sw	s1,0(a0         	
    		
        }
        if (posedge_cnt == 8){            	
    		dut->br_taken_i=0;
            	dut->pc_i=6;
            	dut->instr_i=0x20230040;      //j	4 <gcd>  
    	 				     //sw	s1,0(a0)  
            	
        }
        if (posedge_cnt == 9){            	
    		dut->br_taken_i=0;
            	dut->pc_i=0xa;
            	dut->instr_i=0xc1040095;	//sw	s1,0(a0)     
            					//c.sw	s1,0(a0)
            	            					
        }
   	    
   	    if (posedge_cnt == 10){            	
    		dut->br_taken_i=0;
            	dut->pc_i=0xc;
            	dut->instr_i=0x1101;             //c.addi	sp,sp,-32     
            					
        }		
   	    		
	

    	
           
        m_trace->dump(sim_time);
        sim_time++;
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}
