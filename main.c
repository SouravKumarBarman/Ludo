#include "raylib.h"
#include "rendering.c"


int main()
{
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
        InitWindow(850, 850, "Raylib Example");

        // const char *text = "Hello World";
        // const int fontSize = 40;

        while (!WindowShouldClose())
        {
                if (IsKeyPressed(KEY_F11))
                {
                        ToggleFullscreen();
                }

                BeginDrawing();
                ClearBackground(BLACK);
                renderBoard();
                EndDrawing();
        }

        CloseWindow();
        return 0;
}
