#include"ListRecu.h"


void afficherR(pNoeud l)
{
    if(l==NULL)
        printf("/");
    else{
        printf("%d ",l->info);
        afficherR(l->lien);
    }
    printf("\n");
}
int longueurR(pNoeud l)
{
    if(l==NULL)
        return 0;
    else
        return 1+longueurR(l->lien);
}
int nbrOccuR(pNoeud l,int donnee)
{
    if(l==NULL)
        return 0;
    else{
        if(l->info==donnee)
            return 1+nbrOccuR(l->lien,donnee);
        else
            return nbrOccuR(l->lien,donnee);
    }
}
pNoeud ajoutfinR(pNoeud l,int donnee)
{
    if(l==NULL)
    {
        pNoeud p=malloc(sizeof(liste));
        p->info=donnee;
        p->lien=NULL;
        return p;
       
    }else{
        l->lien=ajoutfinR(l->lien,donnee);
        return l;
    }
    
}
pNoeud supprimerfinR(pNoeud l)
{
    if(l==NULL)
        printf("liste vide");
    if(l->lien==NULL){
    	free(l);
    	return NULL;
	}
	else{
		l->lien=supprimerfinR(l->lien);
	}
	return l;
}
pNoeud concatR(pNoeud l1,pNoeud l2)
{
    if(l1==NULL)
        return l2;
    else{
    	l1->lien=concatR(l1->lien,l2);
    	return l1;
	}
  
}
pNoeud inverserListeR(pNoeud l)
{
  if(l==NULL)
      return l;
  else{
  	l->lien=inverserListeR(l->lien);
  	pNoeud l2=ajoutfinR(l->lien,l->info);
  	return l2;
  }
}






