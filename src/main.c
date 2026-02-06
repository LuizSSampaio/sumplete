#include <stdio.h>
#include <string.h>

#include "board.h"
#include "game.h"

void repl();
void helpCommand();

int main() {
  printf("Bem vindo ao Jogo SUMPLETE\n\n");

  helpCommand();
  repl();

  return 0;
}

void helpCommand() {
  printf("Comandos do jogo\n");
  printf("\e[1majuda:\e[m Exibe os comandos do jogo\n");
  printf("\e[1msair:\e[m Sair do Jogo\n");
  printf("\e[1mnovo:\e[m Começar um novo jogo\n");
  printf("\e[1mcarregar:\e[m Carregar um jogo salvo em arquivo\n");
  printf("\e[1mranking:\e[m Exibir o ranking\n");
  printf("\e[1msalvar:\e[m Salva o jogo atual\n");
  printf("\e[1mdica:\e[m Marca uma posição no jogo\n");
  printf("\e[1mresolver:\e[m Resolve o jogo atual\n");
  printf("\e[1madicionar <lin> <col>:\e[m marca a posição <lin> <col> para "
         "entrar na "
         "soma\n");
  printf("\e[1mremover <lin> <col>:\e[m remove a posição da soma\n");
}

void repl() {
  char command[17];
  while (1) {
    printf("> ");
    if (fgets(command, 16, stdin) == NULL || strcmp(command, "sair\n") == 0)
      break;

    if (strcmp(command, "ajuda\n") == 0) {
      helpCommand();
      continue;
    }
  }
}
