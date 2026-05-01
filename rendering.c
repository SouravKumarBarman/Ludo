#include "raylib.h"
#include "rendering.h"
#include "game.c"

void renderSquare()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float halfScreenHeight = screenHeight / 2;
    float cellHeight = screenHeight / 15;

    DrawRectangle(halfScreenWidth - halfScreenHeight, 0, cellHeight * 6, cellHeight * 6, GREEN);
    DrawRectangle(halfScreenWidth - 6.5 * cellHeight, cellHeight, 4 * cellHeight, 4 * cellHeight, WHITE);
    Rectangle rec1 = {halfScreenWidth - 6.5 * cellHeight, cellHeight, 4 * cellHeight, 4 * cellHeight};
    DrawRectangleLinesEx(rec1, 2, BLACK);

    DrawRectangle(halfScreenWidth + 1.5 * cellHeight, 0, cellHeight * 6, cellHeight * 6, YELLOW);
    DrawRectangle(halfScreenWidth + 1.5 * cellHeight + cellHeight, 0 + cellHeight, cellHeight * 4, cellHeight * 4, WHITE);
    Rectangle rec2 = {halfScreenWidth + 1.5 * cellHeight + cellHeight, 0 + cellHeight, cellHeight * 4, cellHeight * 4};
    DrawRectangleLinesEx(rec2, 2, BLACK);

    DrawRectangle(halfScreenWidth + 1.5 * cellHeight, 9 * cellHeight, cellHeight * 6, cellHeight * 6, BLUE);
    DrawRectangle(halfScreenWidth + 1.5 * cellHeight + cellHeight, 9 * cellHeight + cellHeight, cellHeight * 4, cellHeight * 4, WHITE);
    Rectangle rec3 = {halfScreenWidth + 1.5 * cellHeight + cellHeight, 9 * cellHeight + cellHeight, cellHeight * 4, cellHeight * 4};
    DrawRectangleLinesEx(rec3, 2, BLACK);

    DrawRectangle(halfScreenWidth - halfScreenHeight, 9 * cellHeight, cellHeight * 6, cellHeight * 6, RED);
    DrawRectangle(halfScreenWidth - halfScreenHeight + cellHeight, 9 * cellHeight + cellHeight, cellHeight * 4, cellHeight * 4, WHITE);
    Rectangle rec4 = {halfScreenWidth - halfScreenHeight + cellHeight, 9 * cellHeight + cellHeight, cellHeight * 4, cellHeight * 4};
    DrawRectangleLinesEx(rec4, 2, BLACK);
}

void renderCells()
{
    Vector2 path[52];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    Vector2 size = (Vector2){cellHeight, cellHeight};

    path[0] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 2 * cellHeight};
    path[1] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 3 * cellHeight};
    path[3] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 5 * cellHeight};
    path[2] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 4 * cellHeight};
    path[4] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 6 * cellHeight};
    path[5] = (Vector2){halfScreenWidth - cellHeight * 2.5, screenHeight - 7 * cellHeight};
    path[6] = (Vector2){halfScreenWidth - cellHeight * 3.5, screenHeight - 7 * cellHeight};
    path[7] = (Vector2){halfScreenWidth - cellHeight * 4.5, screenHeight - 7 * cellHeight};
    path[8] = (Vector2){halfScreenWidth - cellHeight * 5.5, screenHeight - 7 * cellHeight};
    path[9] = (Vector2){halfScreenWidth - cellHeight * 6.5, screenHeight - 7 * cellHeight};

    path[10] = (Vector2){halfScreenWidth - cellHeight * 7.5, screenHeight - 7 * cellHeight};
    path[11] = (Vector2){halfScreenWidth - cellHeight * 7.5, screenHeight - 8 * cellHeight};
    path[12] = (Vector2){halfScreenWidth - cellHeight * 7.5, screenHeight - 9 * cellHeight};
    path[13] = (Vector2){halfScreenWidth - cellHeight * 6.5, screenHeight - 9 * cellHeight};
    path[14] = (Vector2){halfScreenWidth - cellHeight * 5.5, screenHeight - 9 * cellHeight};
    path[15] = (Vector2){halfScreenWidth - cellHeight * 4.5, screenHeight - 9 * cellHeight};
    path[16] = (Vector2){halfScreenWidth - cellHeight * 3.5, screenHeight - 9 * cellHeight};
    path[17] = (Vector2){halfScreenWidth - cellHeight * 2.5, screenHeight - 9 * cellHeight};

    path[18] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 10 * cellHeight};
    path[19] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 11 * cellHeight};
    path[20] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 12 * cellHeight};
    path[21] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 13 * cellHeight};
    path[22] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 14 * cellHeight};
    path[23] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 15 * cellHeight};

    path[24] = (Vector2){halfScreenWidth - cellHeight * 0.5, screenHeight - 15 * cellHeight};
    path[25] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 15 * cellHeight};
    path[26] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 14 * cellHeight};
    path[27] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 13 * cellHeight};
    path[28] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 12 * cellHeight};
    path[29] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 11 * cellHeight};
    path[30] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 10 * cellHeight};

    path[31] = (Vector2){halfScreenWidth + cellHeight * 1.5, screenHeight - 9 * cellHeight};
    path[32] = (Vector2){halfScreenWidth + cellHeight * 2.5, screenHeight - 9 * cellHeight};
    path[33] = (Vector2){halfScreenWidth + cellHeight * 3.5, screenHeight - 9 * cellHeight};
    path[34] = (Vector2){halfScreenWidth + cellHeight * 4.5, screenHeight - 9 * cellHeight};
    path[35] = (Vector2){halfScreenWidth + cellHeight * 5.5, screenHeight - 9 * cellHeight};
    path[36] = (Vector2){halfScreenWidth + cellHeight * 6.5, screenHeight - 9 * cellHeight};
    path[37] = (Vector2){halfScreenWidth + cellHeight * 6.5, screenHeight - 8 * cellHeight};
    path[38] = (Vector2){halfScreenWidth + cellHeight * 6.5, screenHeight - 7 * cellHeight};
    path[39] = (Vector2){halfScreenWidth + cellHeight * 5.5, screenHeight - 7 * cellHeight};
    path[40] = (Vector2){halfScreenWidth + cellHeight * 4.5, screenHeight - 7 * cellHeight};
    path[41] = (Vector2){halfScreenWidth + cellHeight * 3.5, screenHeight - 7 * cellHeight};
    path[42] = (Vector2){halfScreenWidth + cellHeight * 2.5, screenHeight - 7 * cellHeight};
    path[43] = (Vector2){halfScreenWidth + cellHeight * 1.5, screenHeight - 7 * cellHeight};
    path[44] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 6 * cellHeight};
    path[45] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 5 * cellHeight};
    path[46] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 4 * cellHeight};
    path[47] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 3 * cellHeight};
    path[48] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 2 * cellHeight};
    path[49] = (Vector2){halfScreenWidth + cellHeight * 0.5, screenHeight - 1 * cellHeight};
    path[50] = (Vector2){halfScreenWidth - cellHeight * 0.5, screenHeight - 1 * cellHeight};
    path[51] = (Vector2){halfScreenWidth - cellHeight * 1.5, screenHeight - 1 * cellHeight};

    for (int i = 0; i < 52; i++)
    {
        if (i == 0)
        {
            DrawRectangleV(path[i], size, RED);
        }
        else if (i == 13)
        {
            DrawRectangleV(path[i], size, GREEN);
        }
        else if (i == 26)
        {
            DrawRectangleV(path[i], size, YELLOW);
        }
        else if (i == 39)
        {
            DrawRectangleV(path[i], size, BLUE);
        }
        else
        {
            DrawRectangleV(path[i], size, WHITE);
        }

        Rectangle rec = {path[i].x, path[i].y, cellHeight, cellHeight};
        DrawRectangleLinesEx(rec, 1, BLACK);
    }
}

void renderCenter()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float halfScreenHeight = screenHeight / 2;
    float cellHeight = screenHeight / 15;

    Vector2 a = (Vector2){halfScreenWidth - 1.5 * cellHeight, 6 * cellHeight};
    Vector2 b = (Vector2){halfScreenWidth - 1.5 * cellHeight, 9 * cellHeight};
    Vector2 c = (Vector2){halfScreenWidth + 1.5 * cellHeight, 9 * cellHeight};
    Vector2 d = (Vector2){halfScreenWidth + 1.5 * cellHeight, 6 * cellHeight};
    Vector2 e = (Vector2){halfScreenWidth, halfScreenHeight};
    DrawTriangle(a, b, e, GREEN);
    DrawTriangle(e, b, c, RED);
    DrawTriangle(e, c, d, BLUE);
    DrawTriangle(a, e, d, YELLOW);
    DrawRectangleLinesEx((Rectangle){a.x, a.y, 3 * cellHeight, 3 * cellHeight}, 1, BLACK);
    DrawLineEx(a, c, 2, BLACK);
    DrawLineEx(b, d, 2, BLACK);
}

void renderGreenHomePath()
{
    Vector2 homePath[5];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    Vector2 size = (Vector2){cellHeight, cellHeight};

    homePath[0] = (Vector2){halfScreenWidth - 6.5 * cellHeight, 7 * cellHeight};
    homePath[1] = (Vector2){halfScreenWidth - 5.5 * cellHeight, 7 * cellHeight};
    homePath[2] = (Vector2){halfScreenWidth - 4.5 * cellHeight, 7 * cellHeight};
    homePath[3] = (Vector2){halfScreenWidth - 3.5 * cellHeight, 7 * cellHeight};
    homePath[4] = (Vector2){halfScreenWidth - 2.5 * cellHeight, 7 * cellHeight};

    for (int i = 0; i < 5; i++)
    {
        DrawRectangleV(homePath[i], size, GREEN);
        Rectangle rec = {homePath[i].x, homePath[i].y, cellHeight, cellHeight};
        DrawRectangleLinesEx(rec, 1, BLACK);
    }
}

void renderYellowHomePath()
{
    Vector2 homePath[5];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    Vector2 size = (Vector2){cellHeight, cellHeight};

    homePath[0] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 1 * cellHeight};
    homePath[1] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 2 * cellHeight};
    homePath[2] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 3 * cellHeight};
    homePath[3] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 4 * cellHeight};
    homePath[4] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 5 * cellHeight};

    for (int i = 0; i < 5; i++)
    {
        DrawRectangleV(homePath[i], size, YELLOW);
        Rectangle rec = {homePath[i].x, homePath[i].y, cellHeight, cellHeight};
        DrawRectangleLinesEx(rec, 1, BLACK);
    }
}

void renderBlueHomePath()
{
    Vector2 homePath[5];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    Vector2 size = (Vector2){cellHeight, cellHeight};

    homePath[0] = (Vector2){halfScreenWidth + 5.5 * cellHeight, 7 * cellHeight};
    homePath[1] = (Vector2){halfScreenWidth + 4.5 * cellHeight, 7 * cellHeight};
    homePath[2] = (Vector2){halfScreenWidth + 3.5 * cellHeight, 7 * cellHeight};
    homePath[3] = (Vector2){halfScreenWidth + 2.5 * cellHeight, 7 * cellHeight};
    homePath[4] = (Vector2){halfScreenWidth + 1.5 * cellHeight, 7 * cellHeight};

    for (int i = 0; i < 5; i++)
    {
        DrawRectangleV(homePath[i], size, BLUE);
        Rectangle rec = {homePath[i].x, homePath[i].y, cellHeight, cellHeight};
        DrawRectangleLinesEx(rec, 1, BLACK);
    }
}

void renderRedHomePath()
{
    Vector2 homePath[5];
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    Vector2 size = (Vector2){cellHeight, cellHeight};

    homePath[0] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 9 * cellHeight};
    homePath[1] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 10 * cellHeight};
    homePath[2] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 11 * cellHeight};
    homePath[3] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 12 * cellHeight};
    homePath[4] = (Vector2){halfScreenWidth - 0.5 * cellHeight, 13 * cellHeight};

    for (int i = 0; i < 5; i++)
    {
        DrawRectangleV(homePath[i], size, RED);
        Rectangle rec = {homePath[i].x, homePath[i].y, cellHeight, cellHeight};
        DrawRectangleLinesEx(rec, 1, BLACK);
    }
}

void renderHomeFieldRed()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    float x = halfScreenWidth - 6.5 * cellHeight;
    float y = 9 * cellHeight + cellHeight;

    DrawCircle(x + cellHeight, y + cellHeight, cellHeight / 2, RED);
    DrawCircleLines(x + cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, RED);
    DrawCircleLines(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, RED);
    DrawCircleLines(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, RED);
    DrawCircleLines(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);
}

void renderHomeFieldBlue()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    float x = halfScreenWidth + 2.5 * cellHeight;
    float y = 9 * cellHeight + cellHeight;

    DrawCircle(x + cellHeight, y + cellHeight, cellHeight / 2, BLUE);
    DrawCircleLines(x + cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, BLUE);
    DrawCircleLines(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, BLUE);
    DrawCircleLines(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, BLUE);
    DrawCircleLines(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);
}

void renderHomeFieldYellow()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    float x = halfScreenWidth + 2.5 * cellHeight;
    float y = cellHeight;

    DrawCircle(x + cellHeight, y + cellHeight, cellHeight / 2, YELLOW);
    DrawCircleLines(x + cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, YELLOW);
    DrawCircleLines(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, YELLOW);
    DrawCircleLines(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, YELLOW);
    DrawCircleLines(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);
}

void renderHomeFieldGreen()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    float x = halfScreenWidth - 6.5 * cellHeight;
    float y = cellHeight;

    DrawCircle(x + cellHeight, y + cellHeight, cellHeight / 2, GREEN);
    DrawCircleLines(x + cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, GREEN);
    DrawCircleLines(x + 3 * cellHeight, y + cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, GREEN);
    DrawCircleLines(x + 3 * cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);

    DrawCircle(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, GREEN);
    DrawCircleLines(x + cellHeight, y + 3 * cellHeight, cellHeight / 2, BLACK);
}

void renderDiceBox()
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    Rectangle rec1 = {halfScreenWidth - 7 * cellHeight - 20, screenHeight - 1.5 * cellHeight - 10, cellHeight + 30, cellHeight + 30};
    DrawRectangleRounded(rec1, 0.5, 20, LIGHTGRAY);
    DrawRectangleRoundedLines(rec1, 0.5, 20, BLACK);

    Rectangle rec2 = {halfScreenWidth + 6 * cellHeight - 10, screenHeight - 1.5 * cellHeight - 10, cellHeight + 30, cellHeight + 30};
    DrawRectangleRounded(rec2, 0.5, 20, LIGHTGRAY);
    DrawRectangleRoundedLines(rec2, 0.5, 20, BLACK);

    Rectangle rec3 = {halfScreenWidth + 6 * cellHeight - 10, 10, cellHeight + 30, cellHeight + 30};
    DrawRectangleRounded(rec3, 0.5, 20, LIGHTGRAY);
    DrawRectangleRoundedLines(rec3, 0.5, 20, BLACK);

    Rectangle rec4 = {halfScreenWidth - 7 * cellHeight - 20, 10, cellHeight + 30, cellHeight + 30};
    DrawRectangleRounded(rec4, 0.5, 20, LIGHTGRAY);
    DrawRectangleRoundedLines(rec4, 0.5, 20, BLACK);
}

void DrawDiceFace(int value, int dicePosition, float size, Color color)
{
    // 1. Draw the main dice body (the square)
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;

    Vector2 pos1 = (Vector2){GetScreenWidth() / 2 + 6.15 * cellHeight, GetScreenHeight() - 1.4 * cellHeight};//blue
    Vector2 pos2 = (Vector2){GetScreenWidth() / 2 - 7 * cellHeight, GetScreenHeight() - 1.4 * cellHeight};//red
    Vector2 pos3 = (Vector2){GetScreenWidth() / 2 - 7 * cellHeight, .5 * cellHeight};//green
    Vector2 pos4 = (Vector2){GetScreenWidth() / 2 + 6.15 * cellHeight, .5 * cellHeight};//yellow
    Vector2 pos = (Vector2){GetScreenWidth() / 2 + 6 * cellHeight, GetScreenHeight() - 1.5 * cellHeight};
    if (dicePosition == 1)
    {
        pos = pos1;
    }
    else if (dicePosition == 2)
    {
        pos = pos2;
    }
    else if (dicePosition == 3)
    {
        pos = pos3;
    }
    else if (dicePosition == 4)
    {
        pos = pos4;
    }

    float roundness = 0.2f; // Slight rounding of corners
    int segments = 10;
    DrawRectangleRounded((Rectangle){pos.x, pos.y, size, size}, roundness, segments, color);
    DrawRectangleRoundedLines((Rectangle){pos.x, pos.y, size, size}, roundness, segments, BLACK);

    // 2. Calculate dot sizing
    float dotRadius = size * 0.08f;
    float margin = size * 0.25f; // Distance from edges
    float mid = size * 0.5f;     // Center point
    float far = size - margin;   // Far side point

    Color dotColor = BLACK;

    // 3. Draw dots based on value
    // We use if-statements for the dots so they share positions (standard dice layout)

    // Center Dot (for 1, 3, 5)
    if (value == 1 || value == 3 || value == 5)
    {
        DrawCircleV((Vector2){pos.x + mid, pos.y + mid}, dotRadius, dotColor);
    }

    // Top-Left and Bottom-Right (for 2, 3, 4, 5, 6)
    if (value >= 2)
    {
        DrawCircleV((Vector2){pos.x + margin, pos.y + margin}, dotRadius, dotColor);
        DrawCircleV((Vector2){pos.x + far, pos.y + far}, dotRadius, dotColor);
    }

    // Top-Right and Bottom-Left (for 4, 5, 6)
    if (value >= 4)
    {
        DrawCircleV((Vector2){pos.x + far, pos.y + margin}, dotRadius, dotColor);
        DrawCircleV((Vector2){pos.x + margin, pos.y + far}, dotRadius, dotColor);
    }

    // Middle-Left and Middle-Right (only for 6)
    if (value == 6)
    {
        DrawCircleV((Vector2){pos.x + margin, pos.y + mid}, dotRadius, dotColor);
        DrawCircleV((Vector2){pos.x + far, pos.y + mid}, dotRadius, dotColor);
    }
}

void RenderPiece(Vector2 position, Color color)
{    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    DrawCircleV(position, cellHeight / 3, color);
    DrawCircleLinesV(position, cellHeight / 3, BLACK);
}

void DrawPieces(Player players[4])
{
    float screenWidth = GetScreenWidth();
    float halfScreenWidth = screenWidth / 2;
    float screenHeight = GetScreenHeight();
    float cellHeight = screenHeight / 15;
    float x = halfScreenWidth + 3.5 * cellHeight;
    float y = screenHeight - 4 * cellHeight;
    if (players[0].tokens[0].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y}, BLUE);
    }
    if (players[0].tokens[1].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y+2*cellHeight}, BLUE);
    }
    if (players[0].tokens[2].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y+2*cellHeight}, BLUE);
    }
    if (players[0].tokens[3].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y}, BLUE);
    }

    //red
    x= halfScreenWidth - 5.5 * cellHeight;
    y = screenHeight - 4 * cellHeight;
    if(players[1].tokens[0].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y}, RED);
    }
    if(players[1].tokens[1].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y+2*cellHeight}, RED);
    }
    if(players[1].tokens[2].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y+2*cellHeight}, RED);
    }
    if(players[1].tokens[3].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y}, RED);
    }

    //green
    x= halfScreenWidth - 5.5 * cellHeight;
    y = 2*cellHeight;
    if(players[2].tokens[0].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y}, GREEN);
    }
    if(players[2].tokens[1].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y+2*cellHeight}, GREEN);
    }
    if(players[2].tokens[2].state == TOKEN_AT_HOME)
    {
       RenderPiece((Vector2){x+2*cellHeight,y+2*cellHeight}, GREEN);
    }
    if(players[2].tokens[3].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y}, GREEN);
    }

    //yellow
    x= halfScreenWidth + 3.5 * cellHeight;
    y = 2*cellHeight;
    if(players[3].tokens[0].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x,y}, YELLOW);
    }
    if(players[3].tokens[1].state == TOKEN_AT_HOME)
    {
       RenderPiece((Vector2){x,y+2*cellHeight}, YELLOW);
    }
    if(players[3].tokens[2].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y+2*cellHeight}, YELLOW);
    }
    if(players[3].tokens[3].state == TOKEN_AT_HOME)
    {
        RenderPiece((Vector2){x+2*cellHeight,y}, YELLOW);
    }

    // Placeholder function to draw game pieces on the board
    // You can implement this based on your game state and piece positions
}

void renderBoard()
{
    renderSquare();
    renderCells();
    renderCenter();
    renderGreenHomePath();
    renderYellowHomePath();
    renderBlueHomePath();
    renderRedHomePath();
    renderHomeFieldRed();
    renderHomeFieldBlue();
    renderHomeFieldYellow();
    renderHomeFieldGreen();
    renderDiceBox();
}
