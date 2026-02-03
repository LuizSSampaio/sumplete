#pragma once

#include "board.h"

enum Dificult { Easy, Medium, Hard };

typedef struct {
  Board *board;
  Dificult dificult;

  char *player;
  int turns;
} Game;

Game newGame(Dificult dificult, char *player);

void destroyGame(Game *self);

void saveGame(Game *self);

Game loadGame();
