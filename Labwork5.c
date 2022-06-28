//LAB WORK 5
// Question 1
/*
#include<stdio.h>
int main (void)
{
    int x,y;
    printf("Please enter two integers,x and y :");
    scanf("%d%d",&x,&y);
    printf("result of 5*x+2*y-8=%d\n",5*x+2*y-8);
    printf("result of 3*x*x-8*x+7*y=%d\n",3*x*x-8*x+7*y);
    printf("result of 3*x*y*y+6=%d\n",3*x*y*y+6);
    return 0;
}
*/

//Question 2
/*
#include<stdio.h>
int main (void)
{
    int x1,x2,x3,x4,x5;

    printf("Enter 1.integer: ");
    scanf("%d",&x1);
    printf("Enter 2.integer: ");
    scanf("%d",&x2);
    printf("Enter 3.integer: ");
    scanf("%d",&x3);
    printf("Enter 4.integer: ");
    scanf("%d",&x4);
    printf("Enter 5.integer: ");
    scanf("%d",&x5);
    printf("The integers reminder of division with 8 is: %d %d %d %d %d ",x1%8,x2%8,x3%8,x4%8,x5%8);
    return 0;
}
*/

//Question 3
/*
#include<stdio.h>
int main(void)
{
    double a,b,c;
    printf("Please enter three floating point numbers: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("The value of ((2a+3b)*4)/6+7c equals to: %lf\n",((2*a+3*b)*4)/6+7*c);
    return 0;
}
*/

//Question 4
/*
#include<stdio.h>
int main (void)
{
    double x,y;
    printf("Please enter a temperature in degrees Celsius: ");
    scanf("%lf", &x);
    printf("%lf Celsius are %lf in Fahrenheit\n",x,y=(9/5)*x+32);
    return 0;
}
*/

//Question 5
/*
#include<stdio.h>
int main (void)
{
    int t,x,y,z;
    printf("Please enter amount of money in TL: ");
    scanf("%d",&t);
    printf("%d TL is equal to %d 10 TL, %d 5 TL, %d 1 TL",t, x=t/"10, y=(t%10)/5, z=t%5);
    return 0;
}
*/

//EXTRA Question
/*
#include<stdio.h>
int main(void)
{
    int x,x1,x2,x3,x4;
    printf(" Please enter a 4 digit integer : ");
    scanf("%d",&x);
    printf(" Your 1. digit is: %d \n Your 2. digit is: %d \n Your 3. digit is: %d \n Your 4. digit is: %d \n",x1=x/1000, x2=(x/100)%10, x3=(x/10)%10, x4=x%10);
    return 0;
}
*/