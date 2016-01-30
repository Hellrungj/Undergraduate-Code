#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include "vm.h"
#include "rom.h"

/* Global Variables */
uint16_t RAM[RAMSIZE];

/* initialize_vm()
 * Zeros all storage locations.
 */
int initialize_vm () {
  /* Set the program counter, A, and D registers to zero. */
  
  /* Zero out RAM. */
  for (int i = 0 ; i < RAMSIZE ; i++) {
    RAM[i] = 0;
  }
  
  /* Return non-zero in case of error. */
  return 0;
}

/* print_vm()
 * This is a handy debugging tool. It prints the A and D registers,
 * as well as the PC, and RAM. Your variable names may need to change.
 *
*/
/*
void print_vm () {
  printf("\n");
  printf(  "A          %04x ", A);
  p(sizeof(uint16_t), &A);
  printf(  "D          %04x ", D);
  p(sizeof(uint16_t), &D);
  printf(  "iptr       %04x ", pc);
  p(sizeof(uint16_t), &iptr);
  
  for (int ndx = 0; ndx < RAMSIZE; ndx++) {
    printf("RAM [%04X] %04x ", ndx, RAM[ndx]);
    p(sizeof(uint16_t), &RAM[ndx]);
  }
}
*/


int runloop () {
  /* You might keep track of what the program counter is.
   * If it is greater than the constant ROMSIZE, then you 
   * should probably stop looping.
   */
  while (1)
  {
   
   /* Pausing every instruction helps you figure
    * out what is going on. 
    */
   sleep(1);
  }
  return 0;
}

int main (int argv, char *args[]) {
  initialize_vm ();
  // print_vm ();
  
  runloop();

  return 0;
}