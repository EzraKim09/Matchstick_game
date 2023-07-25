#include <stdio.h>

void game_fixed()
{
    int no_ms = 21;
    int per, cpu;
    while(no_ms > 0)
    {
        printf("\nNumber of Matchstick left is %d", no_ms);
        printf("\nPick 1, 2, 3, or 4\nPick:");
        scanf("%d", &per);
        if(no_ms < 2)
            break;
        else if(per>4 || per<1)
            printf("INVALID\n");
        else{
            cpu = 5 - per;
            printf("CPU choose %d\n", cpu);     
            no_ms = no_ms - per - cpu;
        }
    }        
    printf("\nYou pick the last matchstick\n************YOU LOSE************");   
}



int main()
{
    char opt, noise;            
    printf("\n\nWELCOME TO THE MATCHSTICK GAME\n\n*There are 21 Matchsticks\n*Pick 1, 2, 3, or 4 Matchsticks\n*Then the computer will pick too\n*The one to pick the last Matchstick lose\n\n");
    printf("Press enter to start\n");
    scanf("%c", &opt);
    game_fixed();                    
    while(1)                   
    {
        printf("\n\nPress enter to play again(Enter Q to quit):\n");
        scanf("%c", &noise);                
        scanf("%c", &opt);
        if(opt=='q' || opt=='Q')            
            break;
        else
            game_fixed();                         
    }        
    return 0;
}
