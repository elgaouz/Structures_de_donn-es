#include <stdio.h>
#include <stdlib.h>

#define MAX_PILE 6

typedef int element;
typedef struct {
    element elements[MAX_PILE];
    int iSommet;
}PILE;

PILE pile_vide();
int est_vide(PILE p);
element sommet(PILE p);
PILE empiler(PILE p, element e);
PILE depiler(PILE p);
