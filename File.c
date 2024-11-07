#include<stdio.h>
#include "file.h"
File file_vide()
{
	File f;
	f.itete=0;
	f.iqueue=0;
	return f;
}

int est_vide(File f)
{
	if(f.itete==f.iqueue)
	   return 1;
	else
	   return 0;
}

element tete(File f)
{
	if (est_vide(f)==1)
	{printf("la file est vide");
	exit(0);
	}
	else 
	   return  f.tab[(f.itete+1)%Max_file];   //attent ici
}
File enfiler(File f,element e)
{
    if((f.iqueue+1)%Max_file==f.itete)
	{
		printf("la file est pleine");
		}
	else
	  {
	    f.iqueue=(f.iqueue+1)%Max_file;	  //ici tjrs f.iqu ou f.itete
	    f.tab[f.iqueue]=e;}
	return f;
}
File defiler(File f)
{
	if(est_vide(f)==1)
	    {
	    	printf("la file est vide");
		}
	else 
	{
		f.itete=(f.itete+1)%Max_file;
	}
	return f;
}
