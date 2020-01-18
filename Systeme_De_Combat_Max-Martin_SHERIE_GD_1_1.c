#include <stdio.h>
#include <stdlib.h>


//Declaration des points de vies
int PDVJoueur=100;
int PDVMonstre=200;
int PMJoueur=5;
int PMMonstre=3;
int empoisonementJoueur=0;
int empoisonementMonstre=0;
int defense=0;
int numAttaque;

//Fonction d'une attaque simple
int attaqueSimple(int viesCible) {
	if(defense==1){
		viesCible=viesCible-5;
	}else{
		viesCible=viesCible-20;
	}
	
	return viesCible;
}

//Fonction d'une instance d'un empoisonnement
int empoisonement(int viesCible) {
	
	viesCible=viesCible-5;
	return viesCible;
}

int main(){
	printf("\n Vous rencontrez un ennemis!\n Il est vert, hideux, et ressemble a Valentin\n Le combat commence!\n\n");
	
	while ((PDVJoueur>1) && (PDVMonstre>1)){
		printf("c'est a vous de jouer\n");
		printf("Vous avez %d PM\n",PMJoueur);
		printf("(1)attaque (2)se defense (3)poison\n");
		
		scanf("%d", &numAttaque);
		
		while(numAttaque != 1 && numAttaque != 2 && (numAttaque==3 && PMJoueur<5)){
			if(PMJoueur<5 && numAttaque==3){
				printf("vous n'avez pas assez de PM pour lancer ce sort");
			}else{
				printf("Il n'y a pas d'attaque numero %d ! \n",numAttaque);
			}
			scanf("%d", &numAttaque);
		}
		if(numAttaque==1){
			PDVMonstre=attaqueSimple(PDVMonstre);
			printf("Vous frappez l'ennemi d'un glorieux coup de sabre !\n");
			defense=0;
		}else if(numAttaque==2){
			printf("Vous vous retraitez derriere votre bouclier en mythril!\n");
			defense=1;
		}else if(numAttaque==3){
			printf("Vous jetez un sort de poisson pourris sur l'ennemi!\n");
			PMJoueur=PMJoueur-5;
			empoisonementMonstre=3;
			defense=0;
		}
		if(empoisonementMonstre>0){
			empoisonementMonstre--;
			printf("Le monstre empoissone perd 5 points de vie\n");
			PDVMonstre=empoisonement(PDVMonstre);
		}
		
		printf("Il reste %d points de vie au monstre\n \n",PDVMonstre);
		
		numAttaque = rand()%2;
		
		if(numAttaque==0){
		PDVJoueur=attaqueSimple(PDVJoueur);
		printf("Le Monstre attaque d'un coup de pate hideuse!\n");
		defense=0;
		}else if(numAttaque==1){
			printf("Le monstre de protege\n");
			defense=1;
		}
		
		printf("Il vous reste %d Points de vie\n \n",PDVJoueur);
	}
	if(PDVJoueur>0){
		printf("\nLe monstre est mort et vous rentrer chez vous satisfait.");
	}else{
		printf("\nLe monstre Se nourrit de votre chaire, celle-ci a ne plus jamais etre vue par votre maris ou vos enfants..");
	}
	return 0;
}