//labwork 9

//QUESTION 1
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
  double x;
  x=1;
  while(x<6)
  {
      printf("Square root of %lf is %lf\n", x, sqrt(x) );
      x=x+1;
  }
  return 0;
}
*/

//QUESTION 2
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,sum,count;
    double avg;
    printf("Enter integer please:");
    scanf("%d",&x);
    count=1;
    sum=0;
    while(count<11)
    {
        sum=sum+x;
        printf("Enter integer please:");
        scanf("%d",&x);
        count=count+1;
    }
    printf("The avrage is %lf and the sum is %d",avg=sum/count,sum);
    return 0;
}
*/

//QUESTION 3
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int a1=0,e1=0,i1=0,o1=0,u1=0,count;
    char x;
    printf("Enter character: ");
    scanf(" %c",&x);
    count=1;
    while(count<21)
    {
        switch(x)
        {
        case 'A':
            a1=a1+1;
            break;
        case 'E':
            e1=e1+1;
            break;
        case 'I':
            i1=i1+1;
            break;
        case 'O':
            o1=o1+1;
            break;
        case 'U':
            u1=u1+1;
            break;
        default:
            printf("Invalid input.");
        }
        printf("Enter character: ");
        scanf(" %c",&x);
        count=count+1;
    }
    printf(" ’A’ repeated %d time(s)\n ’E’ repeated %d time(s)\n ’I’ repeated %d time(s)\n ’O’ repeated %d time(s)\n ’U’ repeated %d time(s)",a1,e1,i1,o1,u1);
    return 0;
}
*/

//QUESTION 4
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x=12,sum=0,e=0;
    while(x<422)
    {
        if (x%2==0)
            {
                e=x;
                sum=sum+e;
                x=x+1;

            }
        else
            x=x+1;
    }
    printf("The sum of even number between 12 and 421 is %d",sum);
    return 0;
}
*/


//QUESTION 5
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int n,z=0,sum=0,y=0,x=0,a;
    char g;
    printf("Enter pozitive integer: ");
    scanf("%d",&n);
    while(x<n)
    {
        printf("Enter gender of employee(f or m):");
        scanf(" %c",&g);
        printf("Enter age of employee :");
        scanf("%d",&a);
        sum=sum+a;
        if (g=='f'&& a>30)
           z=z+1;
        if (g=='m'&& a<50)
            y=y+1;
        x=x+1;
    }

    printf("The amount of female workers older than 30 is %d\n",z);
    printf("The amount of male workers younger than 50 is %d\n",y);
    printf("The average age of female and male workers are %d\n",sum/n);

    return 0;
}
*/

//QUESTION 6
/*
#include<stdio.h>
int main(void)
{
    int x,count=1,max;
    printf("Enter integer please:");
    scanf("%d",&x);
    max=x;
    while(count<10)
    {
      printf("Enter integer please:");
      scanf("%d",&x);
      if (x>max)
        max=x;
      count=count+1;
    }
    printf("The biggest value is %d",max);
    return 0;
}
*/

//QUESTION 7
/*
#include<stdio.h>
int main(void)
{
    int x,y,d=0,sum=0;
    printf("Enter integer:");
    scanf("%d",&x);
    y=x;
     while(y>0)
    {
        d=y%10;
        sum=sum+d;
        y=y/10;
    }
    printf("The summation of %d numbers digits is %d",x,sum);
    return 0;
}

*/
//QUESTION 8
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,y,p,n,F=1;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    p=x*y;
    while(p>0)
    {
        if (p%2==0)
       {
           F=pow(3,x);
           printf("The product is even, %d is F\n",F);
       }
       else
        {
            for(n=1;n<y;n+1)

            F=F*n;

        printf("The product is odd, %d is F\n",F);
        }
        printf("Enter two integers:");
        scanf("%d%d",&x,&y);
        p=x*y;
    }
    return 0;
}
*/


//QUESTION 9
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x,y;
    printf("Enter a number:");
    scanf("%d",&x);
    while (x>0)
    {
        for(y=x;y<=x;y-1)
          printf("%d",y);
        printf("\n");
        for(y=x;y<=x-1;y-1)
          printf("%d",y);
        printf("\n");
        for(y=x;y<=x-2;y-1)
          printf("%d",y);
        printf("\n");

     x=x-1;
    printf("Enter a number:");
    scanf("%d",&x);
    }
    return 0;
}
*/

//QUESTION 10
/*
#include<stdio.h>
#include<math.h>
int main(void)
{
    int x;
    printf("Enter integer:");
    scanf("%d",&x);

    return 0;
}
*/
