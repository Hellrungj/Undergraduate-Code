/*John Hellrung
* Acknowglements to my partens Autisn Farmer and Amber Tollson 
* CSC 335
* Making the CPU in C // ALL the FUNS LOL*/
// A map of a CPU BY John Hellrung
//                   |-----------------------|
//                   |           |  C    C   |
//               C   |           |  |    |   |
//               |   |  C    C   |-|D|--|\   |
//              |De| |  |    |          | |  |
//                |  |-|\---|A|---|\    | |--|----OutM 
//Instruction-----|----|/       | ||----| |
//     inM------------------------|/    | |--C
//                              | |     |/
//                              | C        C------WriteM
//                              ------------------AddressM
//                              |
//    Reset---------------------|---| C    
//                              |   | | 
//                              |--|PC |----------PC
#include <stdint.h>
#include <stdio.h>
#include "rom.h"
#include "vm.h"
#define ERROR 0xFFFF
#define RAM_SIZE 5
//-----------------------------------------------------------------
//Variables:
uint16_t RAM[RAM_SIZE]; //THE RAM!  
uint16_t PC = 0; //The PC counter
int reset = 0; //The reset
uint16_t ALU_output = 0; // The ALU output (USED for keeping track of the alu's output)
uint16_t aReg = 0; // The aReg  
uint16_t dReg = 0; // The dReg
int i, ignore1, ignore2, a, d1, d2, d3, jump1, jump2, jump3; //The useable bits 
uint8_t ALUinstr = 0; // The bits c1,c2,c3,c4,c5,c6 
//---------------------------------------------------------------
//Functions: 
uint16_t alu(uint16_t y, uint16_t x, uint8_t instr);
void PC_update(); //The PC
void CPU(uint16_t instr); //THE CPU YAY
void decode(uint16_t instr); // The decode code thing, lol.
void print_vm();
//------------------------------------------------------------------------------
//THE MAIN FUNCTION!!!!
int main(){
  while(1){ // We need the CPu to loop forever so we while 1.
    if(PC < ROMSIZE){ // We need to check the Number of instructions  
      CPU(ROM[PC]);}
    else{ // If we run out of instructions an we set the CPU to 0x0 
      //CPU(0x0);}
      return 0;
    }
    print_vm();}
  return 0x2A;
  //CPU(instruction);
}
void print_vm () {
  printf("\n");
  printf(  "A          %04x ", aReg);
  p(sizeof(uint16_t), &aReg);
  printf(  "D          %04x ", dReg);
  p(sizeof(uint16_t), &dReg);
  printf(  "iptr       %04x ", PC);
  p(sizeof(uint16_t), &PC);
  
  for (int ndx = 0; ndx < RAM_SIZE; ndx++) {
    printf("RAM [%04X] %04x ", ndx, RAM[ndx]);
    p(sizeof(uint16_t), &RAM[ndx]);
  }
  printf("\n%d \n",ALUinstr);
}
//The instruction decoder
void decode(uint16_t instr){
  // Shifts the bit to get the each part of the instruction
  i = (instr & 0x8000) >> 15;
  ignore1 = (instr & 0x4000) >> 14;
  ignore2 = (instr & 0x2000) >> 13;
  a = (instr & 0x1000) >> 12; 
  ALUinstr = (instr & 0xFC0) >> 6;  
  d1 = (instr & 0x20) >> 5; 
  d2 = (instr & 0x10) >> 4; 
  d3 = (instr & 0x8 >> 3); 
  jump1 = (instr & 0x4) >> 2; 
  jump2 = (instr & 0x2) >> 1; 
  jump3 = instr & 0x1;} 
//The CPU 
void CPU(uint16_t instr){
  // Runs the CPU and stuff. :)
  decode(instr);
  // Tests if the instr is a true instruction
  if (i == 1){
    if(a == 1){ // Meas that we're are use memory
      if(d1 == 0 && d2 == 0 && d3 == 0){//Null
        alu(RAM[aReg],dReg,ALUinstr);}
      else if(d1 == 0 && d2 == 0 && d3== 1){//M 
        RAM[aReg] = alu(RAM[aReg],dReg,ALUinstr);}
      else if(d1 == 0 && d2 == 1 && d3 == 0){//D
        dReg = alu(RAM[aReg],dReg,ALUinstr);}
      else if(d1 == 0 && d2 == 1 && d3 == 1){//MD
        RAM[aReg] = alu(RAM[aReg],dReg,ALUinstr); 
        dReg = RAM[aReg];}
      else if(d1 == 1 && d2 == 0 && d3 == 0){//A
        aReg = alu(RAM[aReg],dReg,ALUinstr);}
      else if(d1 == 1 && d2 == 0 && d3 == 1){//AM
        RAM[aReg] = alu(RAM[aReg],dReg,ALUinstr); 
        aReg = RAM[aReg];}
      else if(d1 == 1 && d2 == 1 && d3 == 0){//AD
        aReg = alu(RAM[aReg],dReg,ALUinstr);
        dReg = aReg;}
      else{//AMD
        RAM[aReg] = alu(RAM[aReg],dReg,ALUinstr);
        aReg = RAM[aReg];
        dReg = aReg;
      }
    } 
    else{
      if(d1 == 0 && d2 == 0 && d3 == 0){//Null
        alu(aReg,dReg,ALUinstr);}
      else if(d1 == 0 && d2 == 0 && d3 == 1){//M
        RAM[aReg] = alu(aReg,dReg,ALUinstr);}  
      else if(d1 == 0 && d2 == 1 && d3 == 0){//D
        dReg = alu(aReg,dReg,ALUinstr);}
      else if(d1 == 0 && d2 == 1 && d3 == 1){//MD
        RAM[aReg] = alu(aReg,dReg,ALUinstr);
        dReg = aReg;}
      else if(d1 == 1 && d2 == 0 && d3 == 0){//A
        aReg = alu(aReg,dReg,ALUinstr);}
      else if(d1 == 1 && d2 == 0 && d3 == 1){//AM
        RAM[aReg] = alu(aReg,dReg,ALUinstr);
        aReg = RAM[aReg];}
      else if(d1 == 1 && d2 == 1 && d3 == 0){//AD
        aReg = alu(aReg,dReg,ALUinstr);
        dReg = aReg;}
      else{//AMD
        RAM[aReg] = alu(aReg,dReg,ALUinstr);
        aReg = RAM[aReg];
        dReg = aReg;
      }
    }
  PC_update();} 
  else{
    aReg = instr;
    PC++;}
  // PC YAAy! It now time to update. 
} 
//This PC funtion
void PC_update(){
  // The PC updates by checking the jump bit and compairing them to the output of the ALU 
  // If the output of the ALU is the right compair operator then the PC is set the Areg
  // else the PC incmits by one
  if(jump1 == 0&jump2 == 0&jump3 == 0){//No Jump // NULL
    PC++;}
  else if(jump1 == 0&jump2 == 0&jump3 == 1){//If out > 0 Jump ? // JGT
    if(ALU_output > 0){
      PC = aReg;}
    else{
      PC++;}}
  else if(jump1 == 0&jump2 == 1&jump3 == 0){//If out = 0 Jump // JEQ
    if(ALU_output == 0){
      PC = aReg;}
    else{
      PC++;}}
  else if(jump1 == 0&jump2 == 1&jump3 == 1){//If out equal or > 0 Jump // JGE
    if(ALU_output >= 0){
      PC = aReg;}
    else{
      PC++;}}
  else if(jump1 == 1&jump2 == 0&jump3 == 0){//If out < 0 Jump // JLT
    if(ALU_output < 0){
      PC = aReg;}
    else{
      PC++;}}
  else if(jump1 == 1&jump2 == 0&jump3 == 1){//If out not equal 0 Jump // JNE
    if(ALU_output != 0){
      PC = aReg;}
    else{
      PC++;}}
  else if(jump1 == 1&jump2 == 1&jump3 == 0){//If out equal < 0 Jump // JLE
    if(ALU_output < 0){
      PC = aReg;}
    else{
      PC++;}}
  else{//Jump // JMP
    if(ALU_output == 0){
      PC = aReg;}
    else{
      PC++;}}} 
//This is the ALU
uint16_t alu(uint16_t y, uint16_t x, uint8_t instr) {
  //Function as an ALU
  //It read the instr and finds the right outcome and does the operation
     switch(instr){
        case 0x2A:
          ALU_output = 0;
          return 0;
          break;
        case 0x3F:
          ALU_output = 1;
          return 1;
          break;
        case 0x3A:
          ALU_output = -1;
          return -1;
          break;
        case 0x0C:
          ALU_output = x;
          return x;
          break;
        case 0x30:
          ALU_output = y;
          return y;
          break;
        case 0x0D:
          ALU_output = !x;
          return !x;
          break;
        case 0x31:
          ALU_output = !y;
          return !y;
          break;
        case 0x1F:
          ALU_output = x + 1;
          return x + 1;
          break;
        case 0x37:
          ALU_output = y + 1;
          return y + 1;
          break;
        case 0x0E:
          ALU_output = x - 1;
          return x - 1;
          break;
        case 0x32:
          ALU_output = y - 1;
          return y - 1;
          break;
        case 0x02:
          ALU_output = x+y;
          return x+y;
          break;
        case 0x13:
          ALU_output = y-x;
          return y-x;
          break;
        case 0x07:
          ALU_output = x&y;
          return x&y;
          break;
        case 0x15:
          ALU_output = x|y;
          return x|y;
          break;
        default:
          ALU_output = ERROR;
          return ERROR;
          break;}} 