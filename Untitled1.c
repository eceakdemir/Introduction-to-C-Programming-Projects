//QUESTION 1
/*
#include<stdio.h>
int main(void)
{
    int x,y;
    printf("Enter the coordinates of a point:");
    scanf("%d%d",&x,&y);
    if (x>0 && y==0)
        printf("The point is on the x axis.");
    else if (x==0 && y>0)
        printf("The point is on the y axis.");
    else if (x>0 && y>0)
        printf("The point is in the 1. quadrant.");
    else if (x<0 && y>0)
        printf("The point is in the 2. quadrant.");
    else if (x<0 && y<0)
        printf("The point is in the 3. quadrant.");
    else if (x>0 && y<0)
        printf("The point is in the 4. quadrant.");
    else
            printf("The point is on the origin.");
    return 0;
}
*/

//QUESTION 2
/*
#include<stdio.h>
int main(void)
{
    int x,y,z;
    char m;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    printf("Enter a mathematical operator:");
    scanf(" %c",&m);
    switch (m)
    {
    case '+':
        {
           z=x+y;
           printf("The result is %d.",z);
           break;
        }
    case'-':
         {
           z=x-y;
           printf("The result is %d.",z);
           break;
        }
    case'*':
         {
           z=x*y;
           printf("The result is %d.",z);
           break;
        }
    case'/':
         {
           z=x/y;
           printf("The result is %d.",z);
           break;
        }
    default:
        {
          printf("You entered invalid characters.");
          break;
        }
    }
    return 0;
}
*/

//QUESTION 3
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int r;
    float x,y,pi=3.14;
    char z;
    printf("Enter a radius of a circle:");
    scanf("%d",&r);
    printf("Enter letter A/a for displaying area or letter C/c for displaying circumfrence:");
    scanf(" %c",&z);
    if (z=='A' | z=='a')
    {
        x=pi*r*r;
        printf("The area is %f",x);
    }
    else if (z=='C' | z=='c')
    {
        x=2*pi*r;
        printf("The circumfrence is %f",x);
    }
    else
     printf("You entered invalid variables.");
    return 0;
}
*/

//QUESTION 4
/*
#include<stdio.h>
int main(void)
{

 int a,b,c,d,max;

 printf("Enter 4 integers:");
 scanf("%d%d%d%d",&a,&b,&c,&d);

 max = a;

 if (max < b)
    max = b;

 if (max < c)
    max = c;

 if (max < d)
    max = d;

 printf("Your maximum value is %d",max);
 return 0;
}
*/

//QUESTION 5
/*
#include<stdio.h>
int main(void)
{
    int x,counter=0;
    char a;
    printf("Enter true(t) or false(f):");
    printf("Question 1:\n Every year, 8 million people see the Mona Lisa. ");
    scanf(" %c",&a);
    if (a=='t')

        counter=counter+1;

    printf("Question 2:\n On April 15,2017, the last person known to be born in the 19th century died. ");
    scanf(" %c",&a);
    if (a=='t')

        counter=counter+1;

    printf("Question 3:\n The first website was put online by NASA in 1991. ");
    scanf(" %c",&a);
    if (a=='f')

        counter=counter+1;

    printf("Question 4:\n The first item sold on eBay was a broken laser pointer. ");
    scanf(" %c",&a);
    if (a=='t')

        counter=counter+1;

    printf("Question 5:\n The human body fully replaces all its cells every 14 years. ");
    scanf(" %c",&a);

    if (a=='f')

        counter=counter+1;

    if (counter==5)
        printf("Excellent, you got all questions right");
    else if (counter==4)
        printf("Good, you got 4 questions right");
    else if (counter==3)
        printf("Normal, you got 3 questions right");
    else if (counter==2)
        printf("So so, you got 2 questions right");
    else if (counter==1)
        printf("Bad, you got 1 question right");
    else if (counter==0)
        printf("Fail, you got all questions wronglkj");
    else
        printf("invalid inputs.");
    return 0;
}
*/
