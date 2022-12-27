#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int win()
{
    int AI_Score,player_Score,Remaining_Players;
    if(AI_Score<player_Score)
    {
        return 1;
    }
    else if(Remaining_Players == 0)
    {
        return 0;
    }
    else
        return -1;
}
int AI_Score_Board(int RunI,int WicketI)
{
    int Score_Run,Score_Wicket;
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd SCORE BOARD xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd");
    printf("\n");
    printf("RUN:%d\t\t",Score_Run);
    printf("WICKET:%d\t\n",Score_Wicket);
}
int Player_Score_Board(int RunP,int WicketP)
{
    int Score_Run,Score_Wicket,Remaining_Runs;
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd SCORE BOARD xcd/xcd/xcd/xcd/xcd\n");
    printf("/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd/xcd");
    printf("\n");
    printf("RUN:%d\t\t",Score_Run);
    printf("WICKET:%d\t\n",Score_Wicket);
    printf("REMAINING RUNS:%d",Remaining_Runs);
}
int run()
{
    int points;
    time_t t2;
    srand((unsigned)time(&t2));
    points = rand()%6;
    return points;
}
int Wicket()
{
    int out;
    time_t t1;
    srand((unsigned)time(&t1));
    out = rand()%4;
    return out;
}

int main()
{
    int AI_Wicket[10]={1,5,3,7,4};
    int AI_SCORE[10]={24,20,15,6,8,12,6,11,9};
    time_t t;
    int Runs[10]={0,1,2,4,6},AI_SCORE,PLAYER_SCORE;
    char out[20]={"RunOut","BOLD","Catch"};
    int RI,OI,hit;
    srand((unsigned)time(&t));
    RI = rand()%10;
    OI = rand()%6;
    Score_Board(AI_SCORE[RI],AI_Wicket[OI]);
    
    return 0;
}
