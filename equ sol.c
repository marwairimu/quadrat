/*\
       PROJECT:QUADRATIC EQUATION SOLUTION
       AUTHOR:mary wairimu
       DATE:26/10/2021
       COMPILER:GCC
       LANGUAGE:C99
       LICENSE:MIT

       input-a,b,c
       output-x1,x2
   */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //variable declaration
    int a,b,c;
    float x1,x2;
   //capture the input
    printf("\tquadratic equation solver!\n");
    printf("enter the values a,b and c: ");
    scanf("%d%d%d",&a,&b,&c);

    //processing
    if((b*b-4*a*c) ==0) {
        x1=x2=(-b +sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c) ==0) {
        x1=(-b +sqrt(b*b-4*a*c))/(2*a);
        x2=(-b -sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)< 0) {
        printf("the equation has no roots\n");
        exit(1);
    }

    //output
    printf("the values of x are %f and %f\n",x1,x2);
    return 0;
}
