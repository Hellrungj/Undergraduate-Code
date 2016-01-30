/* To Compile gcc fizzbuzz.c */
/* Includes */
#include <stdio.h>
/* main */
int main() {
    int i;
    for(i = 0;i < 1024; i++)
        if ((i % 3 == 0) && (i % 5 ==0)) {
            printf("FizzBuzz\n");
        } else if (i % 5 ==0){
            printf("Buzz\n");
        }else if (i % 3 == 0){
            printf("Fizz\n");      
        }else{
            printf("%d\n", i);
        }
    return 0;
}