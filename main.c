#include "raylib.h"
#include "rendering.c"
#include "game.c"
#include <stdlib.h>

int main()
{
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
        InitWindow(850, 850, "Raylib Example");

        // const char *text = "Hello World";
        // const int fontSize = 40;
        GameState game;
        InitGame(&game);

        while (!WindowShouldClose())
        {
                if (IsKeyPressed(KEY_F11))
                {
                        ToggleFullscreen();
                }

                BeginDrawing();
                ClearBackground(BLACK);
                renderBoard();
                if (IsKeyPressed(KEY_SPACE))
                {
                        game.diceValue= rand() % 6 + 1; // Generate a random number between 1 and 6
                        game.dicePosition = (game.dicePosition % 4) + 1; // Cycle through dice positions 1 to 4
                }
                DrawDiceFace(game.diceValue, game.dicePosition, 50, RED);
                DrawPieces(game.players);
                updateGame(&game);
                EndDrawing();
        }

        CloseWindow();
        return 0;
}
