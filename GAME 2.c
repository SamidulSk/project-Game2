// snake water gun game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char you, char comp)
{
    // retuntn 1 if you win , -1 if you lose and 0 if draw
    if (you == comp)
    {
        return 0;
    }
    // cases:-
    //  sg
    //  gs
    //  sw
    //  ws
    //  gw
    //  wg
    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    if (you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
}
int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1; // generate a random number between 1 to 100
    if (number < 33)
    {
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter s for snake ,w for water and  g for gun\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You chose %c and computer chose %c ", you, comp);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("\nYou win!\n");
    }
    else
    {
        printf("\nYou lose!\n");
    }
    return 0;
}