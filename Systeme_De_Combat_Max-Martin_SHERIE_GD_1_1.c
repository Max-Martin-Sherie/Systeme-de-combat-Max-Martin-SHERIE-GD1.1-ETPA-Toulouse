#include <stdio.h>

//Declaration des points de vies
int PDVJoueur=100;
int PDVMonstre=200;
<<<<<<< Updated upstream
=======
int PMJoueur=4;
int PMMonstre=14;
int empoisonementJoueur=0;
int empoisonementMonstre=0;
int defense=0;
>>>>>>> Stashed changes
int numAttaque;

//Fonction d'une attaque simple
int attaqueSimple(int viesCible) {
	viesCible=viesCible-10;
	
	return viesCible;
}

int main(){
	printf("vous rencontrex un ennemis!\n Il est vert, hideux, et ressemble a Valentin\n Le combat commence!\n\n");
	
	while ((PDVJoueur>1) && (PDVMonstre>1)){
		PMJoueur++;
		printf("c'est a vous de jouer\n");
		printf("(1)attaquer\n");
		
		scanf("%d", &numAttaque);
		
<<<<<<< Updated upstream
		while(numAttaque != 1){
			printf("Il n'ty a pas d'attaque numero %d ! \n",numAttaque);
=======
		while(numAttaque != 1 && numAttaque != 2 && (numAttaque==3 && PMJoueur<5)){
			if(PMJoueur<5 && numAttaque==3){
				printf("vous n'avez pas assez de PM pour lancer ce sort\n");
			}else{
				printf("Il n'y a pas d'attaque numero %d ! \n",numAttaque);
			}
>>>>>>> Stashed changes
			scanf("%d", &numAttaque);
		}
		PDVMonstre=attaqueSimple(PDVMonstre);
		printf("Vous frappez l'ennemi d'un glorieux coup de sabre !\n");
		printf("Il lui reste %d Points de vie\n \n",PDVMonstre);
		
<<<<<<< Updated upstream
		
		PDVJoueur=attaqueSimple(PDVJoueur);
		printf("Le Monstre attaque d'un coup de pate hideuse!\n");
=======
		printf("Il reste %d points de vie au monstre\n \n",PDVMonstre);
		PMMonstre++;
		if(PMMonstre>15){
			numAttaque = rand()%3;
		}else{
			numAttaque = rand()%2;
		}
		
		if(numAttaque==0){
		PDVJoueur=attaqueSimple(PDVJoueur);
		printf("Le Monstre attaque d'un coup de pate hideuse!\n");
		defense=0;
		}else if(numAttaque==1){
			printf("Le monstre de protege\n");
			defense=1;
		}else if(numAttaque==2){
			printf("Le monstre vous crache dessus. Ainsi vous empoisonant!\n");
			PMJoueur=PMJoueur-15;
			empoisonementJoueur=5;
			defense=0;
		}
		
		if(empoisonementJoueur>0){
			empoisonementMonstre--;
			printf("Vous etes malades. Vous perdez 5 points de vie\n");
			PDVJoueur=empoisonement(PDVJoueur);
		}
>>>>>>> Stashed changes
		printf("Il vous reste %d Points de vie\n \n",PDVJoueur);
	}
	if(PDVJoueur>0){
		printf("\nLe monstre est mort et vous rentrer chez vous satisfait.");
	}else{
		printf("\nLe monstre Se nourrit de votre chaire, celle-ci a ne plus jamais etre vue par votre maris ou vos enfants..");
	}
	return 0;
}