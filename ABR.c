#include"ABR.h"

ABR creerNoeud(int i, ABR g, ABR d){
	ABR new=(ABR)malloc(sizeof(noeud));
	new->info=i;
	new->filsGauche=g;
	new->filsDroit=d;
	return new;
}
ABR insererABR(ABR a, int i){
	if(a==NULL)
    	a=creerNoeud(i, NULL, NULL);
	else{
		if(a->info>i)
		   a->filsGauche=insererABR(a->filsGauche,i);   //att ici
		else
		  a->filsDroit=insererABR(a->filsDroit,i);
	}
	return a;   //attt
}
void parcours(ABR a){
	parcours(a->filsGauche);
	printf("%d ",a->info);
	parcours(a->filsDroit);
}
int rechercherABR(ABR a, int n){
	if(a==NULL)
	   return 0;
	else{
		if(a->info==n)
		   return 1;
		if(a->info>n)
		   return rechercherABR( a->filsGauche, n);
		if(a->info<n)
		   return rechercherABR( a->filsDroit, n);
	}
}
int rechercherAB(ABR a,int n){
 	if(a == NULL)
 		return 0;
 	else{
 		if(a->info == n)
 			return 1;
 		else
			 return (rechercherAB(a->filsGauche,n)  || rechercherAB(a->filsDroit,n));
			 
 		}
}
ABR chercherMin(ABR a){
	if(a->filsGauche==NULL)
	   return a;
	else
	   return chercherMin(a->filsGauche);
	
}
ABR chercherMax(ABR a){
	if(a->filsDroit==NULL)
	   return a;
	else
	   return chercherMax(a->filsDroit);
}
ABR supprimerABR(ABR a, int valeur){
	ABR temp;
	if(a == NULL){
		printf("L'element introuvable \n");}
	else if(valeur < a->info){
		a->filsGauche=supprimerABR(a->filsGauche,valeur);}
	else if(valeur > a->info){
		a->filsDroit=supprimerABR(a->filsDroit,valeur);}
	else{
		if(a->filsDroit && a->filsGauche){
			temp=chercherMin(a->filsDroit);
			printf("La valeur Minimale du sous arbre droit est %d",temp->info);
			a->info=temp->info;
			a->filsDroit=supprimerABR(a->filsDroit,temp->info);}
		else{
			temp=a;
			if(a->filsGauche==NULL)  {a=a->filsDroit;}
			else if(a->filsDroit==NULL)  {a=a->filsGauche;}
			free(temp);
		}
	}
	return a;
}






