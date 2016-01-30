#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
In computing, a segmentation fault (often shortened to segfault)
or access violation is a fault raised by hardware with memory
protection, notifying an operating system (OS) about a memory
access violation; on x86 computers this is a form of general
protection fault.*/

//These are many Examples. :]


//int main(){
    //int i;
    //printf("%10x",1); // Works
    //printf("%2$x",1,2,3); // Works
    //printf("%p%p%p%p"); // Works 
    //printf("%d%d%1$d%1$d\n", 5, 9); // Works
    //printf("%08x %08x %08x %08x %08x\n"); //Works
    //printf("\x10\x01\x48\x08 %x %x %x %x %s"); //Works 
    /*int i = 0;
    printf("%d%s", i, "\n");
    printf("12345%n%s", &i,"\n"); //Works
    printf("%d", i);*/
    
    
//}
    //User input :)
int main(){ 
    char user_input[100];
    scanf(" %[^\n]", user_input);
    printf("%s",user_input);
    return 0;
}