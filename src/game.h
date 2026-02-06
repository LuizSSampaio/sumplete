#pragma once

#include "board.h"

typedef enum { Easy = 3, Medium = 5, Hard = 7 } Difficult;

typedef struct {
  Board board;
  Difficult dificult;

  char player[27];
  int startTime;
} Game;

Game newGame(Difficult dificult, const char *player);

void destroyGame(Game *self);

void generateBoard(Game *self);

void saveGame(Game *self, const char name[21]);

Game loadGame(const char name[21]);

int checkVictory(Game *self);
