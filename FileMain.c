#include <stdio.h>
#include <stdlib.h>

#include "File.h"
#define MAX_FILE 10
//DONE
int main()
{
    File f = file_vide();
    f=enfiler(f,10);
    f=enfiler(f,20);
    f=enfiler(f,30);
    f=enfiler(f,40);
    f=enfiler(f,50);
    f=defiler(f);
    printf("La tete de la file est: %d\n",tete(f));
    printf("resultat de la file est vide:%d ",est_vide(f));
    return 0;

}
