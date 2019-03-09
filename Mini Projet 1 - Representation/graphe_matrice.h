#ifndef H_GRAPHEM
#define H_GRAPHEM

/**
*   fichier header contenant les declarations de toutes mes structures
*   et fonctions des graphes repr�sent� sous forme de matrice.
*   @author Hassan Zekkouri
*   le 15/11/2018
*/

#define MAX 50 // nombre max de sommets : � adapter selon le besoin

/****************************************************************/
// D�finition des structures matrices:
struct matAdj{
          int  n; // nombre de sommets
          int matrice[MAX][MAX];
};
typedef  struct matAdj MatriceDAdjacence;

struct matIncid{
          int numSommet; // nombre ligne
          int numLiaison; // nombre colonne
          int matrice[MAX][MAX];
};

typedef  struct matIncid MatriceDIncidence;

// Cette fonction saisie et initialise la matrice d'adjacence d'un graphe orient�
MatriceDAdjacence creerMatAdjGO();

// Cette fonction saisie et initialise la matrice d'adjacence d'un graphe non orient�
MatriceDAdjacence creerMatAdjGNO();

// Cette fonction affiche les arcs d'un graphe  orient�
void afficheArcs(MatriceDAdjacence m);

// Cette fonction affiche les aretes  d'un graphe non orient�
void afficheAretes(MatriceDAdjacence m);

//  Cette fonction affiche la matrice d'adjacence d'un graphe
void afficheMatriceAdjacence(MatriceDAdjacence m);

// Cette fonction saisie et initialise la matrice d'incidence d'un graphe non orient�
MatriceDIncidence creerMatIncidGNO();

// Cette fonction affiche la matrice d'adjacence d'un graphe
void afficheMatriceIncidence(MatriceDIncidence  m);

// Cette fonction affiche les aretes d'un graphe non orient�
void afficheAreteMatriceIncidence(MatriceDIncidence m);

// Cette fonction saisie et initialise la matrice d'incidence d'un graphe orient�
MatriceDIncidence creerMatIncidGO();

// Cette fonction affiche les arcs d'un graphe orient�
void afficheArcMatriceIncidence(MatriceDIncidence m);


#endif // H_GRAPHEM

