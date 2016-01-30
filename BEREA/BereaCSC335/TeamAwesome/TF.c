# include <stdio.h>
# include <stdint.h>
# include <string.h>

uint16_t shift_And0(uint16_t HexCharacters, int ShiftAmount, uint16_t CharactersLeft);
int  Translate(int HexCharacters, int ring);

int main(){
    /* Main Function:
    Pro: Calls the functions "shift"_And0" and "Translate"
    End: Prints out the Message the was encoded. */ 
    uint16_t CodedMessage = 0x836F; //Happy blue lion
    Translate(shift_And0(CodedMessage, 11, 15), 1);                             // Calls the functions "shift"_And0" and "Translate for rings 1  
    Translate(shift_And0(CodedMessage, 8, 7), 2);                               // Calls the functions "shift"_And0" and "Translate for rings 2 
    Translate(shift_And0(CodedMessage, 4, 15), 3);                              // Calls the functions "shift"_And0" and "Translate for rings 3 
    return 0;                                                                   // Returns the value of Zero
}
uint16_t shift_And0(uint16_t HexCharacters, int ShiftAmount , uint16_t CharactersLeft){
    /* shift:
    Pro: Takes value "HexCharacters" parmeter and "Shiftamount" parmeter and shifts the bits of HexChartacters 
    by the Shiftamount nad stores it in Shifted
    End: returns the value of "Shifted" */
    uint16_t Shifted = HexCharacters;                                           // a varable for storing the shifted bits
    Shifted = HexCharacters >> ShiftAmount;                                     // Shifts the HexCharacters by ShiftAmount and stores it into Shifted
    uint16_t Zeroedbits = Shifted;                                              // Set the value of the Shifted to "Zeroedbits" 
    Zeroedbits = Zeroedbits & CharactersLeft;                                   // bit ands the value of "Zeroedbits" and  the value of "Charactersleft" and stores it in "Zeroedbits"
    return Zeroedbits;                                                          // returns the "Zeroedbits"
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