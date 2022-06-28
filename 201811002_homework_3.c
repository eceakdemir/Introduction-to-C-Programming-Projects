//HOMEWORK 2 CENG 111
//ZEHRA ECE AKDEMÝR
//201811002

#include<stdio.h>
#include<stdlib.h>
//function prototypes
char f0(void);
int f1(void);
int f2 (int n);
int f3 (int x, int n);
int f4(int m);
int f5(int r);
int f6(int y);
void f7(int u);
int main(void)
{
    char ans='m';
    int x,s,b,bin,w;
    while(ans!='Q' || ans!='q')
    {
//displaying menu
        ans=f0();
        if(ans=='Q'||ans=='q')
            break;
        x=f1();
        if(ans=='S' || ans=='s')
            {
//checking for super prime number
                s=f4(x);
                if(s==1)
                printf("%d is a super prime\n",x);
                if(s==0)
                printf("%d is NOT a super prime\n",x);

            }
        if(ans=='B' || ans=='b')
            {
//checking for binary
                b=f2(x);
                bin=f3(x,b);
                printf("%d is the binary version of %d\n",bin,x);
            }
        if(ans=='W' || ans=='w')
//checking for weird prime number
            {
                f7(x);
            }
    }
    return 0;
}
char f0(void)
{
    char x;
//displaying menu
    printf("Input S for super prime check , B for binary equivalent, W for weird prime check or Q to quit:");
    scanf(" %c",&x);
    return x;
}

int f1(void)
{
    int x=1;
    while (x>0)
    {
//entering positive integer from user
        printf("Please enter a positive integer:");
        scanf("%d",&x);
        if(x>0)
        break;
    }
    return x;
}

int f2 (int n)
{
    int binaryNumber = 0,digit=0;
    int remainder, i = 1, step = 1;
//finding number of digits of its binary equivalent
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        digit+=1;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return digit;
}

int f3 (int x, int n)
{
    int binaryNumber = 0;
    int remainder, i = 1, step = 1;
// forming the binary equivalent of x
    while (x!=0)
    {
        remainder = x%2;
        x /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int f4(int m)
{
  int i, flag = 1, digit=0, sumdigit=0;
 while(sumdigit/10>0)
 {
//finding super prime numbers
    while (m>0)
    {
        digit+=m%10;
        sumdigit+=digit;
        m=m/10;
    }
    for(i = 2; i <= sumdigit/2; ++i)
    {
// condition for nonprime number
        if(sumdigit%i == 0)
        {
            flag = 0;
            break;
        }
    }
    m=sumdigit;
 }
  return flag;
}

int f5(int r)
{
    int i, flag = 0;
//finding if number is prime or not
    for(i = 2; i <= r/2; ++i)
    {
// condition for nonprime number
        if(r%i == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int f6(int y)
{
    int sumdigit, digit;
//finding sum of digits
    while (y>0)
    {
        digit+=y%10;
        sumdigit+=digit;
        y=y/10;
    }
    return sumdigit;
}

void f7(int u)
{
//contl and contr are used if the updated value is not prime
    int flag,contr,contl,o,i=1,right=0,rightnum=0,left=0,leftnum=u;
    o=u;
    flag=f5(u);
//if the inputted intger isn't prime the function ends
    if (flag == 1)
        {
            printf("The received integer is NOT a weird prime number.\n");
            return;
        }
//checking for right side values
    while(u>0)
    {
        right=u%10;
        rightnum+=right*i;
        if(f5(rightnum)==1)
        {
//if updated value is not prime the function ends
           contr=1;
           printf("The received integer is NOT a weird prime number.\n");
           break;
        }
        u=u/10;
        i=i*10;
    }
//checking for left side values
    while(o>0)
    {
      left=o%10;
      leftnum-=left;
        if(f5(leftnum)==1)
        {
//if updated value is not prime the function ends
           contl=1;
           printf("The received integer is NOT a weird prime number.\n");
           break;
        }
        o-=left;
    }
    if(contr!=1 && contl!=1)
      printf("The received integer is a weird prime number.\n");
    return 0;
}

