//Q4. WAP to accept two integer numbers and swap them using 4 different methods in C language.


#include <stdio.h> 
int main() 
{
int c = 10, d = 20, temp;
temp = c;
c = d;
d = temp;
printf("c = %d, d = %d\n", c, d);


int e = 10, f = 20;
e = e + f;
f = e - f;
e = e - f;
printf("\ne = %d, f = %d\n", e, f);


int g = 10, h = 20;
g = g * h;
h = g / h;
g = g / h;
printf("g = %d, h = %d\n", g, h);


int a = 10, b = 20;
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("a = %d, b = %d\n", a, b);
return 0;
}
