#pragma once
#include "raylib.h"
#include "stddef.h"
#include "time.h"
#include "stdlib.h"

typedef enum {
    TOKEN_AT_HOME,
    TOKEN_ON_BOARD,
    TOKEN_IN_SAFE_ZONE,
    TOKEN_FINISHED
} TokenState;

typedef struct {
    TokenState state;
    int position; // Position on the board (0-51 for main path, 52-57 for safe zone, etc.)
    int homeSlot;
} Token;

typedef struct {
    int playerColor;
    Token tokens[4];
} Player;

typedef struct {
    int diceValue;
    float rollTimer;
    bool isRolling;
    int dicePosition;
    // You can add board state, player positions, etc. here later
    Player players[4];
} GameState;

void InitGame(GameState *game) {

    game->diceValue = 1;
    game->rollTimer = 0.0f;
    game->isRolling = false;
    game->dicePosition = 1;
    // Seed the random number generator once
    srand(time(NULL)); 
    game->players[0].playerColor = 1; // blue
    game->players[1].playerColor = 2; // redy 
    game->players[2].playerColor = 3; // green
    game->players[3].playerColor = 4; // yellow
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            game->players[i].tokens[j].state = TOKEN_AT_HOME;
            game->players[i].tokens[j].position = 0; // Initialize position
            game->players[i].tokens[j].homeSlot = j; // Initialize home slot
        }
    }
}

void updateGame(GameState *game) {
    // Placeholder for game logic updates (e.g., moving pieces, checking win conditions)
    int currentPlayerIndex = (game->dicePosition - 1) % 4; // Determine current player based on dice position
    Player *currentPlayer = &game->players[currentPlayerIndex];
    // Implement piece movement logic based on dice rolls and token states
    
}