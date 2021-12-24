#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int Num1, Num2, sum, sub, mult, mod;
    float div;
    printf("\nEnter Your Two Integer Number = ");
    scanf("%d%d", &Num1, &Num2);
    sum=Num1+Num2;
    sub=Num1-Num2;
    mult=Num1*Num2;
    div=(float)Num1/Num2;
    mod=Num1%Num2;
    printf("\nSummation = %d \t",sum);
    printf("Subtraction = %d \n \n",sub);
    printf("Multiplication = %d \n \n",mult);
    printf("Division = %.3f \t",div);
    printf("Modulus = %d \n",mod);
    getch();
    return 0;
}
