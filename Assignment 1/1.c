//Q1. WAP to check whether a given is Armstrong or not.

#include <stdio.h>
#include <math.h>

int main() 
{
int number = 153, sum = 0, temp, digits = 0, rem;
temp = number; while (temp > 0) {
digits++;
temp /= 10; }
temp = number; while (temp > 0) {
rem = temp % 10;
sum += pow(rem, digits); temp /= 10;
}
if (sum == number) printf("Armstrong\n");
else
printf("Not Armstrong\n");
return 0; }
