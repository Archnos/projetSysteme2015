// LES INCLUDES
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // fork et sleep
#include <sys/wait.h> // wait
#include <string.h> // strcpy

// LES MACROS-CONSTANTES
#define TAILLE_BD 20
#define NBR_BLOC_PAR_FIC 5

// LES STRUCTURES

struct Metadonnees
{
	char* nomFichier;
	int dateDerniereMiseAJour;
}Metadonnees;

struct Bloc
{
	int BV, BD, BRep, BI;      // type de bloc, 0=faux, autre chose = vrai. BV= bloc vide, BD= bloc données, BRep = bloc répertoire, BI= bloc inode
	int** adressesInodes;  //tableau des adresses des BD (BI ou BRep)
	Metadonnees infosFic;
	char* data;  //bloc données
	char** nomsFic; // pour les BRep
	// bloc vide: tout à null
}Bloc;

// LES PROTOTYPES
Bloc construitBloc(int TypeBLoc);
Metadonnees rempliMeta();

// LE MAIN
int main(void)
{

	return 0;
}

// LES FONCTIONS



//     FIN
