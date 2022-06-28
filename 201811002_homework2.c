//HOMEWORK 2 CENG 111
//ZEHRA ECE AKDEMÝR
//201811002

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
//INITIALIZATION OF VARIABLES
    char x;
    int n=3,i,f,e,c,d,p1sum=0,p2sum=0,scorep1=0,scorep2=0,totalthrow=0;
//INITIATLIZATION FOR SRAND FUNCTION,SETTING THE SEED OF THE RANDOM FUNCTION
    time_t t;
    srand((unsigned)time(&t));
//SHOWING USER POSSIBLE ACCEPTABLE INPUT CONTROLS
    printf("\n*********************\nWelcome to Dice Game\n*********************\n");
    printf("Input P to play the game, S to display the total score, Q to Quit:");
    scanf(" %c",&x);
//STARTING ENDLESS LOOP
    while(1)
    {
// CHECKING IF USER INPUTS P FOR PLAY
    if(x== 'P' || x == 'p')
    {
// f AND e ARE THE DİCES FOR PLAYER 1
        f= rand() %6+1;
        e= rand() %6+1;
        printf("The dices for Player_1:%d %d\n",f,e);
        totalthrow+=1;
// CHECKING GAME RULE IF THE TWO DICES DIFFERENCE IS 4
        if(abs(f-e)==4)
        {
// ACCORDING TO GAME RULE PROCEDE UNTIL SUM IS GRATER THAN 8
          while(p1sum<8)
          {
              f= rand() %6+1;
              e= rand() %6+1;
              p1sum=e+f;
              totalthrow+=1;
              printf("The dices for Player_1:%d %d\n",f,e);
          }
// ACCORDING TO GAME RULE ADD SCORE
          scorep1=scorep1+(e+f)/2;
        }
// IF THE DICES ARE EQUAL THROW DICES 3 TIMES ACCORDING TO GAME RULES
        else if(e==f)
        {
// ACCORDING TO GAME RULE ADD SCORE
           scorep1=scorep1+(e+f)/2;
           for(i=0;i<n;i++)
           {
              f= rand() %6+1;
              e= rand() %6+1;
              printf("The dices for Player_1:%d %d\n",f,e);
              totalthrow+=1;
              p1sum=e+f;
//ACCORDING TO GAME RULE SMAE DİCES DO NOT GET USER POINTS
              if(e==!f)
                 scorep1=scorep1+(e+f)/2;
           }
        }
// CALCULATING THE SCORE FOR THE NORMAL CASE
        else
         {
             scorep1=scorep1+(e+f)/2;
             p1sum=e+f;
         }
// c AND d ARE THE DICES FOR PLAYER 2
        c= rand() %6+1;
        d= rand() %6+1;
        printf("The dices for Player_2:%d %d\n",c,d);
        totalthrow+=1;
// CHECKING GAME RULE IF THE TWO DICES DIFFERENCE IS 4
        if(abs(d-c)==4)
        {
// ACCORDING TO GAME RULE PROCEDE UNTIL SUM IS GRATER THAN 8
          while(p2sum<8)
          {
              c= rand() %6+1;
              d= rand() %6+1;
              p2sum=d+c;
              totalthrow+=1;
              printf("The dices for Player_2:%d %d\n",c,d);
          }
// ACCORDING TO GAME RULE ADD SCORE
          scorep2=scorep2+(d+c)/2;
        }
// IF THE DICES ARE EQUAL THROW DICES 3 TIMES ACCORDING TO GAME RULES
        else if(d==c)
        {
// ACCORDING TO GAME RULE ADD SCORE
           scorep2=scorep2+(d+c)/2;
           for(i=0;i<n;i++)
           {
              c= rand() %6+1;
              d= rand() %6+1;
              printf("The dices for Player_2:%d %d\n",c,d);
              totalthrow+=1;
              p2sum=d+c;
//ACCORDING TO GAME RULE SMAE DİCES DO NOT GET USER POINTS
              if(d==!c)
                 scorep2=scorep2+(d+c)/2;
           }
        }
// CALCULATING THE SCORE FOR THE NORMAL CASE
        else
         {
             scorep2=scorep2+(d+c)/2;
             p2sum=d+c;
         }
    }
//CONTROLLING IF USER INPUTS S FOR DISPLAYING SCORE
    else if(x=='s' || x=='S')
    {
        printf("The Total Throw is: %d\n",totalthrow);
        printf("Player 1 has %d points\n",scorep1);
        printf("Player 2 has %d points\n",scorep2);
    }
// CHECKING IF USER WANTS TO QUIT
    else if(x=='q' || x=='Q')
        {
            printf("BYE!\n");
            break;
        }
//ACCORDING TO GAME RULES PEFORM CHECK IF DICES SUM IS TWICE THE OTHER PLAYERS DICES SUM
    if((p1sum!=0)&&(p2sum!=0)&&(p1sum==p2sum*2))
    {
      printf("The Total Throw is: %d\n",totalthrow);
      printf("Player 1 has %d points\n",scorep1);
      printf("Player 2 has %d points\n",scorep2);
      printf("**The winner is PLAYER 1**\n");
// RESETING THE STARTING CONDITIONS TO START NEW GAME
      p1sum=0;p2sum=0;scorep1=0;scorep2=0;totalthrow=0;
    }
//ACCORDING TO GAME RULES PEFORM CHECK IF DICES SUM IS TWICE THE OTHER PLAYERS DICES SUM
    if((p1sum!=0)&&(p2sum!=0)&&(p2sum==p1sum*2))
    {
      printf("The Total Throw is: %d\n",totalthrow);
      printf("Player 1 has %d points\n",scorep1);
      printf("Player 2 has %d points\n",scorep2);
      printf("**The winner is PLAYER 2**\n");
// RESETING THE STARTING CONDITIONS TO START NEW GAME
      p1sum=0;p2sum=0;scorep1=0;scorep2=0;totalthrow=0;
    }
// MENU OF THE LOOP
    printf("Input P to play the game, S to display the total score, Q to Quit:");
    scanf(" %c",&x);

    }

//end here
    return 0;
}
