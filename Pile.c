#include <stdio.h>
#include <stdlib.h>

#define MAX_PILE 6

#include "Pile.h"

PILE pile_vide(){
    PILE p;
    p.iSommet = -1;
    return p;
}

int est_vide(PILE p){
    if(p.iSommet == -1) return 1;
    else return 0;
}

element sommet(PILE p){
    if(p.iSommet == -1){
        printf("ERREUR: La pile est vide !\n");
        exit(0);
    }else
    {
        return p.elements[p.iSommet];
    }
}

PILE empiler(PILE p, element e){
    if(p.iSommet >= MAX_PILE-1){
        printf("ERREUR: La pile est pleine! \n");
    }else
    {
        p.iSommet++;
        p.elements[p.iSommet] = e;
    }
    return p;
}

PILE depiler(PILE p){
    if(est_vide(p) == 1){
        printf("ERREUR: La pile est vide");
    }else
    {
        p.iSommet--;
    }
    return p;
}
