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
     if(player_Score>AI_Score)
    {
        return 1;
    }
    else if(Remaining_Players = 5)
    {
        return 1;
    }
    else return 0;
}
int AI_Score_Board(int RunI,int WicketI)
{
    int Score_Run,Score_Wicket;
    printf("*******************************************\n");
    printf("@@@@@@@@@@@@ SCORE BOARD @@@@@@@@@@@@@@@@@@\n");
    printf("*********************************************");
    printf("\n");
    printf("RUN:%d\t\t",Score_Run);
    printf("WICKET:%d\t\n",Score_Wicket);
}
int Player_Score_Board(int RunP,int WicketP)
{
    int Score_Run,Score_Wicket,Remaining_Runs;
     int Score_Run +=Run_p,Score_Wicket=Wicket_p,Remaining_Runs;
    Remaining_Runs =PLAYER_SCORE-Remaining_Runs
    printf("********************************************\n");
    printf("********************************************\n");
    printf("**********************************************");
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
    time_t t,t3;
    int TURN=0;
    int Runs[10]={0,1,2,4,6},PLAYER_SCORE=0;
    char out[20]={"RunOut","BOLD","Catch"};
    int PR,PO,hit,Wicket;
    int RI,OI,win=-1,Remaining_Player=4;
    srand((unsigned)time(&t));
    RI = rand()%10;
    OI = rand()%6;
    AI_Score_Board(AI_SCORE[RI],AI_Wicket[OI]);
    do
    {
        srand((unsigned)time(&t3));
        hit = rand()%2;
        if (hit == 0)
        {
            PO = rand()%4;
            Wicket = out[PO];
            Remaining_Player-=1;
        }
        else
        {
            PR = rand()%6;
            int RUNS= Runs[PR];
            PLAYER_SCORE += RUNS;
        }
        TURN++;
        Player_Score_Board(PLAYER_SCORE,Wicket,Remaining_Player);
        Win_Status(AI_SCORE,PLAYER_SCORE,Remaining_Player,TURN);
    } while (win = -1);
    
    Player_Score_Board();
    
    return 0;
}
