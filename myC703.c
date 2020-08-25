/*
Program :input with scaner
Authority: Mr.Narongsak Singkheaw
Date:8/25/2020
*/
#include<stdio.h>
#include<conio.h>
int main(){
    int number1;
    float number2;
    printf("Enter an Integer: ");//display monitor
    scanf("%d",&number1);//number1 : input keyboard
    printf("Enter an Float: \n");
    scanf("%f",&number2);//number2 : input keyboard
    printf("Number1 = %d\t",number1);
    printf("number2 = %f\a\a\a", number2);
    return 0;
}