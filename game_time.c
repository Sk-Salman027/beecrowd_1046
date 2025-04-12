#include <stdio.h>

int main()
{
    // variable declaration
    int game_start, game_end, duration;
    // take Input
    scanf("%d %d", &game_start, &game_end);

    if (game_start < game_end)
    {
        // calculate the game duration
        duration = game_end - game_start;
    }
    else
    {
        // calculate the game duration
        duration = (24 - game_start) + game_end;
    }
    // print the duration
    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}