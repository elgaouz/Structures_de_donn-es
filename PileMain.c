#include <stdio.h>
#include <stdlib.h>

#include "Pile.h"

int main()
{/*
    PILE p=pile_vide();
    p=empiler(p,10);
    p=empiler(p,20);
    p=empiler(p,30);
    p=empiler(p,40);

    int i=0;
    for(i=0;i<= p.iSommet;i++){
        printf("L'element d'indice %d de la pile est: %d \n",i,p.elements[i]);
    }
    printf("L'indice du sommet de le pile est: %d \n",sommet(p));
    printf("%d est au sommet apres l'empilement \n\n",sommet(p));
    p=empiler(p,50);
	p=empiler(p,60);
	p=empiler(p,70);
    printf("%d est au sommet apres l'empilement de 50, 60,et 70 \n",sommet(p));


    p=depiler(p);
    p=depiler(p);
    p=depiler(p);
    p=depiler(p);
    p=depiler(p);
    p=depiler(p);
    printf("%d est au sommet apres empilement de 10, 20, 30 et 40\n",sommet(p));
	printf("%d est l'indice du sommet apres empilement",p.iSommet);

    p=depiler(p);

    printf("%d est au sommet apres depilement \n",sommet(p));
    printf("%d est l'indice du sommet apres depilement",p.iSommet);*/
    //expression bien parenthese
    char a[100] = {'(', 'a', '+', 'b',')',')', '\0'};  //ici!!!
    PILE p = pile_vide();
    int i = 0;
    for (i = 0; i<10;i++){
        if(a[i]=='('){
            p=empiler(p,1);   //ici p=
        }
        if(a[i]==')'){
            if(est_vide(p)==0){
                    p=depiler(p);
            }else{
                printf("l'expression n'est pas bien parenthesee\n");
                exit(-1);   //here!!!
            }
        }
    }
    if(est_vide(p)==1){
        printf("l'expression est bien parenthesee\n");
    }

	return 0;
}
