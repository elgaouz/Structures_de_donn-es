#include<stdlib.h>
#include<stdio.h>
#include"LISTESDC.h"

liste creationListeVide(){
    liste l=malloc(sizeof(liste_DC));
    l->queue=malloc(sizeof(noeud));
    l->tete=malloc(sizeof(noeud));
    l->tete->info=0;
	l->queue->info=0;
    l->tete->suivant=l->queue;
    l->queue->precedant=l->tete;
    l->queue->suivant=NULL;
    l->tete->precedant=NULL;
    l->nbr_noeud=0;
    return l;
}

Noeud creationNoeud(int data){
    Noeud nouveauNoeud;
    nouveauNoeud = (Noeud)malloc(sizeof(noeud));
    nouveauNoeud->info = data;
    nouveauNoeud->suivant = NULL;
    nouveauNoeud->precedant = NULL;
    return nouveauNoeud;
}

liste ajouterDebut(liste l, int data){
    Noeud nouvNoeud=creationNoeud(data);
    nouvNoeud->suivant=l->tete->suivant;
	nouvNoeud->precedant=l->tete;
	l->tete->suivant->precedant=nouvNoeud;
	l->tete->suivant=nouvNoeud;
	l->nbr_noeud++;
	return l ;
}

liste ajouterFin(liste l, int data){
    Noeud nouvNoeud=creationNoeud(data);
    nouvNoeud->suivant=l->queue;
	nouvNoeud->precedant=l->queue->precedant;
	l->queue->precedant->suivant=nouvNoeud;
	l->queue->precedant=nouvNoeud;
	
    l->nbr_noeud++;
    return l;
}

void afficher(liste l){
    Noeud p=l->tete->suivant;
    if(p==l->queue){
        printf("la liste est vide");
    }
    printf("\n");
    while(p!=l->queue){
        printf("%d ", p->info);
        p=p->suivant;
    }
    printf("\n");
}

void afficherinverse(liste l){
    Noeud p=l->tete->suivant;
    if(p==l->queue){
        printf("la liste est vide");
    }
    printf("\n");
    p=l->queue->precedant;
    while(p->precedant!=NULL){
		printf("%d ",p->info);
		p=p->precedant;}
    printf("\n");
}

//recherche d'une information data dans une liste
void chercherNoeud(liste l, int data){
    int trouve=0;
	int pos=1;
	if (l!=NULL){
        Noeud p =l->tete->suivant;
        while(p!=l->queue){
               if (p->info==data){
                    printf("\nl'element %d se trouve dans la liste est sa position est %d\n",data,pos);
                    trouve=1;
                     p=p->suivant;
                     pos++;
                }
                else{
                    p=p->suivant;
                    pos++;
                    }
            }
            if (trouve==0){
                printf("\nl'element %d ne se trouve pas dans la liste!!\n",data);
                }
		}
	else printf("\nLa liste est vide !\n");
}

//suppression d'un noeud contenant une information data dans une liste
liste supprimer(liste l, int data){
   /* if (l!=NULL){
		Noeud p=l->tete;
		while (p !=NULL){
			if (p->info==data){
				Noeud supp = p;
				p = p->suivant; 
				if (supp->suivant=NULL){
					l->queue=supp->precedant;
					l->queue->suivant=NULL;
				}
				else if(supp->precedant==NULL){
					l->tete=supp->suivant;
					l->tete->precedant=NULL;
				}
				else{
					supp->suivant->precedant=supp->precedant;
					supp->precedant->suivant=supp->suivant;
				}
				free(supp);
				l->nbr_noeud--;
			}
			else{
				p=p->suivant;
			}
		}*/
		//2eme mehode de cete fct think!!!
		Noeud temp1,temp2;
		int exist=0;
		temp1=l->tete->suivant;
		while(temp1 !=l->queue){
			if(temp1->info==data){
				exist=1;
				temp2=temp1;
				temp1->precedant->suivant=temp1->suivant;
				temp1->suivant->precedant=temp1->precedant;
				temp1=temp1->precedant;
				free(temp2);
				l->nbr_noeud--;
				
			}
			temp1=temp1->suivant;
		
	}
	if(exist==0)
	   printf("Aucun element n'est egal a la donnee saisie \n");
	return l;
}

