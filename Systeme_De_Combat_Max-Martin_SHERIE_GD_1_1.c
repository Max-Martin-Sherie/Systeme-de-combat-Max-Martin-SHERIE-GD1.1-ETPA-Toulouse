#include <stdio.h>

//Declaration des points de vies
int PDVJoueur=100;
int PDVMonstre=200;
int numAttaque;

//Fonction d'une attaque simple
int attaqueSimple(int viesCible) {
	viesCible=viesCible-10;
	
	return viesCible;
}

int main(){
	printf("vous rencontrex un ennemis!\n Il est vert, hideux, et ressemble a Valentin\n Le combat commence!\n\n");
	
	while ((PDVJoueur>1) && (PDVMonstre>1)){
		printf("c'est a vous de jouer\n");
		printf("(0)attaquer\n");
		
		scanf("%d", &numAttaque);
		
		while(numAttaque != 0){
			printf("Il n'ty a pas d'attaque numero %d ! \n",numAttaque);
			scanf("%d", &numAttaque);
		}
		PDVMonstre=attaqueSimple(PDVMonstre);
		printf("Vous frappez l'ennemi d'un glorieux coup de sabre !\n");
		printf("Il lui reste %d Points de vie\n",PDVMonstre);
	}
	
	printf("\nLe monstre est mort et vous rentrer chez vous satisfait.");
	return 0;
}