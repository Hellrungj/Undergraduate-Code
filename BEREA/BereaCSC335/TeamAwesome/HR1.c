/*  BY: John Hellrung (hellrungj) & Matthew Randle (randlem)
    Date: Oct. 18, 2014 
    Assignment: Codec Ring Assignment
    Class: CSC 335  */

/* They build a Codec Ring Code: */
/*  Moods: 0x0 Happy, 0x1 Sad, 0x5 Angry, 0x7 Elated, 0xA Confused, 0xD Groony
    Color: 0x1 Red, 0x3 Blue, 0x4 Purple, 0x6 Gold, 0x7 Orange
    Animal: 0x2 Giraffe, 0x3 Platypus, 0x6 Lion, 0x7 Chicken, 0xB Dog, 0xF Frog */

/*  Psuodu code:  
Functions: 
    -   Shift:
            - Shift the whole 16 bit by 4 bits 
            - returns number
    -   And_by_zero:
            - Takes the shifted binary number and by 0000111111111111
            - reuturns binary 
    -   Converts_to_hex:
            - Takes binary and converts the world number 
            - returns the hex number
    -   Translate:
            - run the hex thorught checks for Mood,Color, Animal.
            - return the message
    -   Main:
            _ int value for Shift named "binary" 
            - printf( Run_message_read(Converts_to_hex(runs And_by_zero(Shift(binary))))) */

/*  Psuodu code Pt2:
        - 1(0101)(010)(1010)1010 >> 4 = 00001(0101)(010)(1010)
        - 0000[1(010][1)(010)][1010] -> Hex = 10, 10, 10 = 0x0AAA 
        Or:
        *- 0000[1(010][1)(010)][1010] and it with 000000000001111 = 0x000A  -> conpairing to Moods = ?
        
        *- 0000[1(010][1)(010)][1010] >> 4 = 00000000[1(010][1)(010)]
        *- 00000000[1(010][1)(010)] and it with 000000000001111 = 0x000A -> compairing to Color = ?
        
        *- 00000000[1(010][1)(010)] >> 4 = 000000000000[1(010]
        *- 000000000000[1(010] and it with 000000000001111 = 0x000A -> compairing to Animal = Confused
        
        *- And the hex = 0x000A + 0x00A0 + 0x0A00 = 0x0AAA / N/A ,Confused, ?, ?
        - 0x0AAA -> N/A,Mood, Color, Animal = N/A ,Confused, ?, ?  */

# include <stdio.h>
# include <stdint.h>
# include <string.h>

uint16_t shift(uint16_t HexCharacters, int ShiftAmount);
int And_by_zero(uint16_t HexCharacters, uint16_t CharactersLeft);
int  Translate(int HexCharacters, int ring);

int main(){
    /* Main Function:
    Pro: Calls the functions "shift", "And_by_zero", and "Translate"
    End: Prints out the Message the was encoded. */ 
    uint16_t CodedMessage = 0x836F; //Happy blue lion
    Translate(And_by_zero(shift(CodedMessage, 11), 15), 1);
    Translate(And_by_zero(shift(CodedMessage, 8), 7), 2);
    Translate(And_by_zero(shift(CodedMessage, 4), 15), 3);
    return 0;
}
uint16_t shift(uint16_t HexCharacters, int ShiftAmount){
    /* shift:
    Pro: Takes value "HexCharacters" parmeter and "Shiftamount" parmeter and shifts the bits of HexChartacters 
    by the Shiftamount nad stores it in Shifted
    End: returns the value of "Shifted" */
    uint16_t Shifted = HexCharacters;                                           // a varable for storing the shifted bits
    Shifted = HexCharacters >> ShiftAmount;                                     // Shifts the HexCharacters by ShiftAmount and stores it into Shifted
    return Shifted;                                                             // returns Shifted 
}

 int And_by_zero(uint16_t HexCharacters, uint16_t CharactersLeft){
     /* And_by_zero
     Pro: Takes the return of "shift" function or the "HexCharacters" parmeter and
     "CharactersLeft" parmeter and ands the "Zeroedbits" and "zer0" and stores it as "Zeroedbits"
     End: Returns the value of "Zeroedbits" */
    uint16_t Zeroedbits = HexCharacters;                                        //A varable for storing the zeroed chaged bits
    Zeroedbits = Zeroedbits & CharactersLeft;
    return Zeroedbits;
 }    
int  Translate(int HexCharacters, int ring /* Rings: Moods, Colors, Animal */){
    /* Translate:
    Pro: Take the value of "And_by_zero" or "HexCharacters" compair them to HEX 
    numbers by using the "ring" to choice which key for decoding
    End: Prints the decoded value*/
    if (ring == 1){
        /*Moods: 0x0 Happy, 0x1 Sad, 0x5 Angry, 0x7 Elated, 0xA Confused, 0xD Groovy  */
        if (HexCharacters == 0x0){
            printf("%s", "Happy");
        }
        else if (HexCharacters == 0x1){
            printf("%s", "Sad");
        } 
        else if (HexCharacters == 0x5){
            printf("%s", "Angry");
        }
        else if (HexCharacters == 0x7){
            printf("%s", "Elated");
        }
        else if (HexCharacters == 0xA){
            printf("%s", "Confused");
        }
        else if (HexCharacters == 0xD){
            printf("%s", "Groovy");
        }
        else{
            printf("%s", "?");
        }
    }
    else if (ring == 2){
        /* Colors: 0x1 Red, 0x3 Blue, 0x4 Purple, 0x6 Gold, 0x7 Orange*/
        if (HexCharacters == 0x1){
            printf("%s",  "Red");
        }
        else if (HexCharacters == 0x3){
            printf("%s",  "Blue");  
        } 
        else if (HexCharacters == 0x6){
            printf("%s", "Purple");
        }
        else if (HexCharacters == 0x6){
            printf("%s", "Gold");
        }
        else if (HexCharacters == 0x7){
            printf("%s", "Orange");
        }
        else{
            printf("%s", "?");
        }
    }
    else if (ring == 3){
        /* Animals: 0x2 Giraffe, 0x3 Platypus, 0x6 Lion, 0x7 Chicken, 0xB Dog, 0xF Frog */
        if (HexCharacters == 0x2){
            printf("%s", "Giraffe"); 
        }
        else if (HexCharacters == 0x3){
            printf("%s", "Platypus");
        }
        else if (HexCharacters == 0x6){
            printf("%s", "Lion");
        }
        else if (HexCharacters == 0x7){
            printf("%s", "Chicken");
        }
        else if (HexCharacters == 0xB){
            printf("%s", "Dog");
        }
        else if (HexCharacters == 0xF){
            printf("%s", "Frog");
        }
        else{
            printf("%s", "?");
        }
    }
    else{
        printf ("%s","Error");
    }
}
