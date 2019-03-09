#include <stdio.h>
#include <stdlib.h>
#include "graphe_matrice.h"
#include "pg_utilitaires.h"

void menu();

int main()
{
  menu();
  int choix = 0;
  scanf("%d", &choix);

  switch(choix){
    case 1:
          mesBFS();
          break;
    case 2:
          mesDFS();
          break;
    case 3:
          monGrapheBipartiBFS();
          break;
    case 4:
          couches();
          break;
    default:
           printf("choix non valide!\n");
  }
  return 0;
}

void menu(){
  printf("**********************************\n");
  printf("**********************************\n\n");
  printf("Quelle operation aimerez vous faire?\n");
  printf("1. Parcours en largeur (BFS);\n");
  printf("2. Parcours en profondeur (DFS);\n");
  printf("3. Verifier si un graphe est biparti avec BFS;\n");
  printf("4. Construire les couches;\n");
  printf("**********************************\n");
  printf("**********************************\n");
  printf("choix : ");
}

// HASSAN ZEKKOURI
