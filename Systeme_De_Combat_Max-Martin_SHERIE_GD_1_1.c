#include <stdio.h>

//Declaration des points de vies
int PDVJoueur=100;
int PDVMonstre=200;
int defense=0;
int numAttaque;

//Fonction d'une attaque simple
int attaqueSimple(int viesCible, int protection) {
	if(protection==1){
		viesCible=viesCible-5;
	}else{
		viesCible=viesCible-20;
	}
	
	return viesCible;
}

int main(){
	printf("vous rencontrex un ennemis!\n Il est vert, hideux, et ressemble a Valentin\n Le combat commence!\n\n");
	
	while ((PDVJoueur>1) && (PDVMonstre>1)){
		printf("c'est a vous de jouer\n");
		printf("(1)attaquer (2)se defendre\n");
		
		scanf("%d", &numAttaque);
		
		while(numAttaque != 1 && numAttaque != 2){
			printf("Il n'y a pas d'attaque numero %d ! \n",numAttaque);
			scanf("%d", &numAttaque);
		}
		if(numAttaque==1){
			PDVMonstre=attaqueSimple(PDVMonstre,defense);
			printf("Vous frappez l'ennemi d'un glorieux coup de sabre !\n");
		}else if(numAttaque==2){
			printf("vous vous retraitez derriere votre bouclier en mythril!\n");
			defense=1;
		}
		printf("Il reste %d Points de vie au monstre\n \n",PDVMonstre);
		
		
		PDVJoueur=attaqueSimple(PDVJoueur,defense);
		defense=0;
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