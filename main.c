/*
Project:Quadratic Equation Solution
Author:Mary wairimu
Date:26/10/2021
Compiler:GCC
language:C99
license:MIT


Input-a,b,c
Output-x1,x2
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    //variable declaration
    int a,b,c;
    float x1,x2;
    //capt,ure the input
    printf("\tquadratic equation solver!\n");
    printf("Enter the values a,b and c!");
    scanf("%d%d%d,$a,$b,$c");

    //processing
    if((b*b-4*a*c) ==0) {
      x1=x2=(-b +sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c) ==0){
       x1=( b+ sqrt(b*b-4*a*c))/(2*a);
       x2=( +b+ sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)< 0){
    printf("the equation has no roots\n");
    exit(1);
    }
    //output
    print ( "the values of x1 are %f and %f\n",x1,x2);
    return 0;
}














