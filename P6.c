#include <stdio.h>
int main()
{
int c;
printf("Enter 1 to change degree to Fahrenheit and 2 to change Fahrenheit to degree 3 to change degree to kelvin\n");
scanf("%d",&c);
if(c==1)
{
float tc;
printf("\nEnter the temperature in degree\n");
scanf("%f",&tc);


float cf=(tc*((float)9/5))+32;
printf("\nTemperature in Fahrenheit:\n%.2f",cf);
}
else if(c==2)
{
float tf;
printf("\nEnter the temperature in Fahrenheit\n");
scanf("%f",&tf);

float cc=(tf-32)*((float)5/9);
printf("\nTemperature in degree:\n%.2f",cc);
}
else if(c==3)
{
float tc2;
printf("\nEnter the temperature in degree\n");
scanf("%f",&tc2);
float kt=273.5+tc2;
printf("\nTemperature in kelvin:\n%.2f",kt);
}
else
{
printf("Invalid Input!!!");
}
}




