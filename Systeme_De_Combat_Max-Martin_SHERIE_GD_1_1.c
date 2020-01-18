#include <stdio.h>

//Declaration des points de vies
int PDV=100;


//Fonction d'une attaque simple
int attaqueSimple(int viesCible) {
	viesCible=viesCible-10;
	
	return viesCible;
}

int main(){
	
	printf("vous avez %d points de vies\n", PDV);
	printf("l'ennemi utulise attaque simple\n");
	
	PDV=attaqueSimple(PDV);
	
	printf("vous avez %d points de vies\n", PDV);
	return 0;
}