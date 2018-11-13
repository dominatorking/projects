//Created by: Yash mathur
//os:windows 7(ultimate 64 bit)
//language:c
//compiled on:codeblocks v16.01
//Aim:Snake And Ladders game



#include<stdio.h>
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#include<stdlib.h>
#include<time.h>
int main()
{
    int alter_of_present_curr_pos,lower=1,upper=6,dice,curr=1,present_current_position=0;
    int i,j,k;
    char ch;
    for( ; ; )
    {
    printf("do you want to roll the dice");
    scanf("%c",&ch);
     if(ch=='n'||ch=='N')
    {
        return 0;

    }
    if(ch=='y'||ch=='Y')
    {
        srand(time(0));
        dice=(rand()%(upper-lower+1))+lower;
        printf("you get %d\n",dice);
        present_current_position=present_current_position+dice;
        if(present_current_position>100)
            present_current_position=alter_of_present_curr_pos;
        else
            alter_of_present_curr_pos=present_current_position;
    signed int p=100,m=81;          //p is for printing numbers in oddrows while m is for even rows
    {                                           //ladders conditions
        if(present_current_position==4)
            present_current_position=14;
        if(present_current_position==9)
            present_current_position=31;
        if(present_current_position==20)
            present_current_position=38;
        if(present_current_position==28)
            present_current_position=84;
        if(present_current_position==71)
            present_current_position=91;
        if(present_current_position==63)
            present_current_position=81;
        if(present_current_position==40)
            present_current_position=59;
    }
    {                                           //snake conditions
        if(present_current_position==98)
            present_current_position=78;
        if(present_current_position==95)
            present_current_position=75;
        if(present_current_position==93)
            present_current_position=73;
        if(present_current_position==62)
            present_current_position=18;
        if(present_current_position==64)
            present_current_position=60;
        if(present_current_position==54)
            present_current_position=34;
        if(present_current_position==17)
            present_current_position=7;
    }
        for(i=1;i<=5;i++)                             //output start
    {
        for(k=1;i<=10;k++)                             //output start
        {
            if(p==present_current_position)
            {
                printf(ANSI_COLOR_CYAN    "|@|"    ANSI_COLOR_RESET );
              //  printf("");
                p--;
            }
            else
            {
              printf("|%d|",p);
                p--;
            }
            if(p!=100&&p%10==0)
            {
                p=p-10;
                break;
            }
            else
            {
                continue;
            }
        }
        printf("\n");
            for(k=1;i<=10;k++)                             //output start
        {
            if(m%10==0)
            {
                 if(m==present_current_position)
            {
                printf(ANSI_COLOR_CYAN    "|@|"    ANSI_COLOR_RESET );
               // printf("|@|");
                m=m-29;
                break;
            }
            else
            {
                printf("|%d|",m);
                m=m-29;
                break;
            }
            }
            else
            {      if(m==present_current_position)
            {
                printf(ANSI_COLOR_CYAN    "|@|"    ANSI_COLOR_RESET );
                //printf("| @|");
                m++;
            }
            else{
                printf("|%d|",m);
                m++;
            }
            }
        }
        printf("\n");
    }
}


if(present_current_position==100)
{
    printf("you have won");
    printf("press any button to exit");
    getch();
    return 0;
}


    }

}                                                              //output end

