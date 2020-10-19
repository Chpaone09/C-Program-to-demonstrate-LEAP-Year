/*
***********************************************************

Topic   : Program to demonstrate Leap Year in c.
Author  : Chpaone09®
Date    : Oct 20, 2020

************************************************************
*/

#include <stdio.h>
#include <conio.h>

void main(){
    int n=0;
    printf("\n\n\t Please enter Year >> ");
    scanf("%d",&n);

    if((n % 4) == 0){
        if((n % 100) ==0){
            if((n % 400) == 0){
            printf("\n\n\t %d is a Leap Year. ", n);
            }else{
                printf("\n\n\t %d is not a Leap Year. ", n);
            }
        }else{
            printf("\n\n\t %d is a Leap Year. ", n);
        }
    }else{
        printf("\n\n\t %d is not a Leap Year. ", n);
    }
}

