/*
    * This is how multiple line commenting is done in c 
    * This program will teach you how to use a basic if else statement
    * To check if 2 numbers are equal or not and prints the correct prompt
*/
#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter 2 numbers : ");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2){
        printf("The 2 numbers are equal\n");
    }
    else{
        printf("The 2 numbers are not equal\n");
    }
}