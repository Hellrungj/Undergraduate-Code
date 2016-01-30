/* EALU starter file for CSC 335 Midterm Checkup.
 * CC0 2014 by Matt Jadud
 * Compile with:
 *   gcc -o ealu ealu.c
 * and execute then with
 *   ./ealu
 */
 
#include <stdint.h>
#include <stdio.h>
#define ERROR 0xFFFF
 
int alu (uint16_t x, uint16_t y, uint8_t instr) {
     switch(instr){
        case 0x2A:
            return 0;
            break;
        case 0x3F:
            return 1;
            break;
        case 0x3A:
          return -1;
          break;
        case 0x0C:
          return x;
          break;
        case 0x30:
          return y;
          break;
        case 0x0D:
          return !x;
          break;
        case 0x31:
          return !y;
          break;
        case 0x1F:
          return x + 1;
          break;
        case 0x37:
          return y + 1;
          break;
        case 0x0E:
          return x - 1;
          break;
        case 0x32:
          return y - 1;
          break;
        case 0x02:
          return x+y;
          break;
        case 0x13:
          return y-x;
          break;
        case 0x07:
          return x&y;
          break;
        case 0x15:
          return x||y;
          break;
        default:
          return ERROR;
          break;
    }
  /* Your code to implement the extended ALU goes here. */
  /* Please use a switch statement. */
  /* The default case should return the value ERROR. */
  /* literally,
   *
   * default:
   *    return ERROR;
   *    break;
   */
}
int main () {
  
  uint16_t x, y;
  uint8_t instr;
  int error = 0;
  
  /* Some simple tests. */
  printf ("Tests for the EALU\n");
  printf ("------------------\n");
  printf ("%d" ,alu(0x0001, 0x0002, 0x2A));
/*  
  if (!(alu(0x0001, 0x0002, 0x2A) == 1)) {
    printf ("The EALU should return 0 in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x3F) == 1)) {
    printf ("The EALU should return 1 in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x3A) == 1)) {
    printf ("The EALU should return 0 in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x0C) == 0x0001)) {
    printf ("The EALU should return X in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x30) == 0x0002)) {
    printf ("The EALU should return Y in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x0D) == 0x0002)) {
    printf ("The EALU should return !x in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x31) == 0x0001)) {
    printf ("The EALU should return !y in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x1F) == 0x0002)) {
    printf ("The EALU should return x+1, which is 2+1, or 3, in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001,0x0002,0x3F)==0x0003)){
    printf ("The EALU should return y+1, which is 2-1, or 1, in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x0E) == 0x0000)) {
    printf ("The EALU should return x-1 in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x32) == 0x0001)) {
    printf ("The EALU should return y-1 in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x02) == 0x0003)) {
    printf ("The EALU should return x+y in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x027) == 0x0001)) {
    printf ("The EALU should return x-y in this case.\n");
    error += 1;
  }
  if (!(alu(0x0001, 0x0002, 0x13) == 0x0000)) {
    printf ("The EALU should return y-x in this case.\n");
    error += 1;
  }
 if (!(alu(0x0001, 0x0002, 0x07) == 0x0003)) {
    printf ("The EALU should return x&y in this case.\n");
    error += 1;
  }
if (!(alu(0x0001, 0x0002, 0x15) == 0x0003)) {
    printf ("The EALU should return x|y in this case.\n");
    error += 1;
  }
   You should write additional tests.
   * Your tests should only be noisy in the case of failure.
   
  
   The following code should not need modification. It prints
   * the results of your tests. 
   
  if (error > 0) {
    printf ("The EALU failed to pass %d test", error);
    
     Proper plurality agreement is so difficult when writing code... 
     * Good Grammar Or Bust! *cough*
     
     
    if (error > 1) {
      printf ("s.\n");
    } else {
      printf (".\n");
    }
  } else {
    printf ("All tests passed!\n");
  }
  
   We can return anything here, so I choose to return the meaning of life,
   * the universe, and everything, as defined by Doubglas Adams. 
   * Zero, of course, is traditional, and suggests everything worked OK.
   */
  return 0x2A;
}