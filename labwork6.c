//QUESTION 1
/*
#include<stdio.h>
#include<math.h>
int main (void)
{
	float a,b,c,A,B,C,pi=3.14;

	printf("Please enter the value of the edge a:");
	scanf("%f",&a);
	printf("Please enter the angle values of A,B and C:");
	scanf("%f%f%f",&A,&B,&C);
    A=sin(A*(pi/180));
    B=sin(B*(pi/180));
    C=sin(C*(pi/180));
    b=(a*B)/A;
    c=(a*C)/A;
    printf("%f is the value of b and %f is the value of c",b,c);
    return (0);
}
*/
//QUESTION 2
/*
#include<stdio.h>
#include<math.h>
int main (void)
{
 int r,t,P0,P;
 double e;
 e=2.71828;
 t=10;
 printf("Enter the starting population and the rate of growth,");
 scanf("%d%d",&P0,&r);
 P=P0+(pow(e,r*t));
 printf("%d is the total population value",P);
 return 0;
}
*/
// QUESTION 3
/*
#include<stdio.h>
int main(void)
{
	int temp;
	printf("Enter the temperature as an integer:");
	scanf("%d",&temp);
	if (temp >= 10)
	    printf("The weather is normal");
	else
	    printf("The weather is cold");
	return (0);
}
*/
//QUESTION 4
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
int x;
printf("Please enter an integer:");
scanf("%d",&x);
if (x%2==0)
    printf("%d is an even number",x);
else
    printf("%d is an odd number",x);
return (0);
}
*/
//QUESTION 5
/*
#include<stdio.h>
int main(void)
{
    float x,t;
    int w;
    printf("Enter the distance:");
    scanf("%f",&x);
    printf("Enter the weather condition (rainy=0,sunny=1)");
    scanf("%d",&w);
    if (w==1)
    {
        t=x/90;
        printf("In a sunny day, you will go %f km in %f hours.",x,t);
    }
    else if (w==0)
    {
        t=x/70;
        printf("In a rainy day, you will go %f km in %f hours.",x,t);
    }
    else
        printf("You have entered wrong weather condition.");
    return 0;
}
*/
