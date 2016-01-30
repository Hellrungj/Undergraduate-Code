{"filter":false,"title":"Ccode.c","tooltip":"~/BereaCSC236/Hellrungj-A14/Ccode.c","undoManager":{"mark":0,"position":0,"stack":[[{"group":"doc","deltas":[{"action":"insertText","range":{"start":{"row":0,"column":0},"end":{"row":0,"column":55}},"text":"/******************************************************"},{"action":"insertText","range":{"start":{"row":0,"column":55},"end":{"row":1,"column":0}},"text":"\n"},{"action":"insertLines","range":{"start":{"row":1,"column":0},"end":{"row":48,"column":0}},"lines":["    File: printDigit.cpp","    Purpose: This program asks the user for a number","        that is in base 10 and the new number base.","        This program uses recursion to convert the","        number, in which it keeps dividing the number","        by the base until it reaches a number between","        zero and the base, at which point it stops. It","        outputs the digits during that process.","******************************************************/","","#include <iostream> // needed for cout and cin","#include <assert.h> // needed for assert() function","","using namespace std;","","/*----------------------------------------------------","    Recursive function:","    precondition: num and base are both greater than 0.","            Function will check for base > 1.","    postcondition: the digits of num will be output to","            the screen, stopping when most significant","            digit is output.","  ----------------------------------------------------*/","void","printDigits( int num, int base ) {","","    assert( base > 1 );     // if base equals zero or one, a seg-fault or FPE will occur.","    if( num < base ) cout << num << \" \";","    else {","        printDigits( num / base, base);","        cout << num % base << \" \";","    }","}","","/*----------------------------------------------------","    driver function:","  ----------------------------------------------------*/","int","main() {","    int num=0;  // the number to convert","    int base=0; // the base to convert the number.","    cout << \"What is the number to convert: \";","    cin >> num;","    cout << \"What is the new number base for that number: \";","    cin >> base;","    printDigits(num, base);","}"]}]}]]},"ace":{"folds":[],"scrolltop":113,"scrollleft":0,"selection":{"start":{"row":14,"column":20},"end":{"row":14,"column":20},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1413933615752,"hash":"2be08917ff773002e1c35cefdc648dade239840c"}