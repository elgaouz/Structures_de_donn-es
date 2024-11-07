#include <stdio.h>
#include <stdlib.h>

#define Max_file 10

typedef int element;
typedef struct{
    element tab[Max_file];
    int itete;
    int iqueue;
}File;

File file_vide();
int est_vide(File f);
element tete(File f);
File enfiler(File f,element e);
File defiler(File f);
