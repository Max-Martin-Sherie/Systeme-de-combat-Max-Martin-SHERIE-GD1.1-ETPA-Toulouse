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
		printf("(1)attaquer\n");
		
		scanf("%d", &numAttaque);
		
		while(numAttaque != 1){
			printf("Il n'ty a pas d'attaque numero %d ! \n",numAttaque);
			scanf("%d", &numAttaque);
		}
		PDVMonstre=attaqueSimple(PDVMonstre);
		printf("Vous frappez l'ennemi d'un glorieux coup de sabre !\n");
		printf("Il lui reste %d Points de vie\n \n",PDVMonstre);
		
		
		PDVJoueur=attaqueSimple(PDVJoueur);
		printf("Le Monstre attaque d'un coup de pate hideuse!\n");
		printf("Il vous reste %d Points de vie\n \n",PDVJoueur);
	}
	if(PDVJoueur>0){
		printf("\nLe monstre est mort et vous rentrer chez vous satisfait.");
	}else{
		printf("\nLe monstre Se nourrit de votre chaire, celle-ci a ne plus jamais etre vue par votre maris ou vos enfants..");
	}
	return 0;
}