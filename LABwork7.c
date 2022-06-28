//QUESTION 1
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    char x;
    double h,y;
    printf("Please enter the type of vehicle:");
    scanf("%c",&x);
    printf("Please enter the hours vehicle spent in parking lot:");
    scanf("%lf",&h);
    if (x=='c')
    {
      y=h*2;
      printf("%lf is the amount of money to pay.",y);
    }
    else if (x=='b')
    {
        y=h*3;
        printf("%lf is the amount of money to pay.",y);
    }
    else if (x=='t')
    {
        y=h*4;
        printf("%lf is the amount of money to pay.",y);
    }
    else
        printf("You have entered the wrong variables.");
    return 0;
}
*/

//QUESTION 2
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,b,x1,y1,x=3,y=9;
    printf("Enter the slope(a) of the line:");
    scanf("%d",&a);
    printf("Enter y intersection(b):");
    scanf("%d",&b);
    printf("Please enter the coordinates of a point;");
    scanf("%d%d",&x1,&y1);
    y=a*x+b;
    if (a*x+b==a*x1+b && y==y1)
        printf("The point is on the line.");
    else
        printf("The point is not on the line.");
    return 0;
}
*/

//QUESTION 3
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,p;
    printf("Enter the consumed kwh value:");
    scanf("%d",&x);
    if (x<=300)
    {
        p=x*9;
        printf("You have to pay %d cents.",p);
    }
    else if (300<x<=600)
    {
        p=300*9+x*8;
        printf("You have to pay %d cents.",p);
    }
    else if (600<x<=1000)
    {
         p=300*9+300*8+x*6;
         printf("You have to pay %d cents.",p);
    }
    else if (x>1000)
    {
        p=300*9+300*8+400*6+x*5;
        printf("You have to pay %d cents.",p);
    }
    else
        prinf("You entered wrong value");
    return 0;
}
*/
//QUESTION 4
/*
#include<stdio.h>
#include<math.h>
void main (void)
{
    char e;
    int x,p;
    printf("Enter the type of project(s,m,l):");
    scanf("%c",&e);
    printf("Enter the amount of projects:");
    scanf("%d",&x);
    if (x<3&& e=='s')
     {
        p=x*1500;
        printf("You have to pay %d Dollars.",p);
     }
     else if (3<=x<=5&& e=='s')
     {
         p=x*1000;
         printf("You have to pay %d Dollars.",p);
     }
     else if (x>5&& e=='s')
     {
         p=x*750;
         printf("You have to pay %d Dollars.",p);
     }

     else if (x<3&& e=='m')
     {
        p=x*2500;
        printf("You have to pay %d Dollars.",p);
     }
     else if (3<=x<=5&& e=='m')
     {
         p=x*2000;
         printf("You have to pay %d Dollars.",p);
     }
     else if (x>5&& e=='m')
     {
         p=x*1750;
         printf("You have to pay %d Dollars.",p);
     }

    else if (x<3&& e=='l')
     {
        p=x*4500;
        printf("You have to pay %d Dollars.",p);
     }
     else if (3<=x<=5&& e=='l')
     {
         p=x*4000;
         printf("You have to pay %d Dollars.",p);
     }
     else if (x>5&& e=='l')
     {
         p=x*3500;
         printf("You have to pay %d Dollars.",p);
     }
    else
        printf("You entered wrong value");

    }
   */

//QUESTION 5
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
 char a,b,c,f;
 int p,x;
 printf("Enter the type of fruit you want (apple=a,banana=b,carrots=c)");
 scanf("%c",&f);
 printf("Enter the amount of fruit you want:");
 scanf("%d",&x);
 switch(f)
 {
 case 'a':
     p=x*10;
     printf("You pay %d cents.",p);
     break;
 case 'b':
    p=x*12;
     printf("You pay %d cents.",p);
     break;
 case 'c':
    p=x*7;
     printf("You pay %d cents.",p);
     break;
 default:
     printf("Invalid character choice.");
 }
 return 0;
}
*/

//QUESTION 6
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    char x;
    double v;
    int a,r;
    printf("Enter a character (c/C or s/S)");
    scanf(" %c",&x);
    switch (x)
    {
    case 'c'|'C':
        printf("Enter the side value of a cube:");
        scanf("%d",&a);
        v=pow(a,3);
        printf("The volume of the cube is %lf .",v);
        break;
    case 's'|'S':
        printf("Enter the radius of the sphere:");
        scanf("%d",&r);
        v=pow(r,3)*3,14+4/3;
        printf("The volume of the sphere is %lf .",v);
        break;
    default:
        printf("You entered wrong values.");
    }
    return 0;
}
*/
