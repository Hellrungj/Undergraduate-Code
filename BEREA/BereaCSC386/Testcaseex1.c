/* -----------------------------------------------------------------------------
Names: John Hellrung & Jon Jeffery 
Class: CSC 386 

----------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int weight(){
    int userweight;
    printf("%s","Please input your weight according to the imperial system. Note that you can only use 3 numbers.");
    scanf("%d",&userweight);
    if (sizeof(userweight) > 4){
        printf ("%s","Sorry, you can only have to three numbers as your input.\n");
    }
    else{
        printf("%s","Thanks, for your input.\n");
        return userweight; 
    }
}

int height(){
    int userheight;
    printf("%s","Please input your height according to the imperial system. Note that you can only use one number.\n");
    scanf("%d",&userheight);
    if (sizeof(userheight) > 1){
        printf ("%s","Sorry, you can only have one number for your input.\n");
    }
    else{
        printf("%s","Thanks, for your input.\n");
        return userheight; 
    }
}
int BMI(int weight, int height){
    if (height == 0 && weight == 0 || height == 0 || weight == 0){
        printf("%s","Try again!\n");
    }
    else{
        float part = weight; // this is the calulation to get the correct answer for BMI
        float height = height * 12;
        float BMI = (part / (height * height)) * 703;
        return BMI;
    }
}

void BMI_Categories(int BMI){
    if (BMI <= 18.5){
        printf("%s","Underweight\n");
    }
    else if (BMI > 18.5 && BMI <= 24.5){
        printf("%s","Normal Weight\n");
    }
    else if (BMI > 25 && BMI <= 29.9){
        printf("%s","Overweight\n");
    }
    else{
        printf("%s","Obesity\n");
    }
}

/*int store( int result, int past){
     Make the user login and run the program and store it to a text file 
    Will this by store there name and their weight in the file like so 
    EX: John
        120
    int answer;
    printf("%d",past,"\n");
    printf("%s","Has this result changed\n")
    scanf("d",&result);
    if(result = 1){
    past = result;
    }
    else{
        printf("%d","Thank you\n")
    }
}*/

int main(){
    int past = 0;
    BMI_Categories(BMI(weight(),height()));
    fprintf
}





