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
