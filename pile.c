//seumegni_20w2176
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include"pile.h"
void initialisation(Pile*pile)
{
    pile->premier=NULL;
}
void veri_pile_vide(Pile*pile)
{

    if(pile->premier==NULL)
       printf("pile vide");
    else
        printf("pile non vide");
}
void Empiler(Pile*pile,char carac)
{
   Element*p=malloc(sizeof(*p));
    if(pile==NULL)
    {
        exit(EXIT_FAILURE);
    }
    p->tab=carac;
    p->suiv=pile->premier;
    pile->premier=p;

}
char Depiler(Pile*pile)
{
        if(pile==NULL)
    {
        exit(EXIT_FAILURE);
    }
    char carac;
    Element*depil=pile->premier;
    if(pile!=NULL&&pile->premier!=NULL)
    {
        carac=depil->tab;
        pile->premier=depil->suiv;
        free(depil);
    }
    return carac;
}
void afficher (Pile*pile)
{
    if(pile==NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element*actuel=pile->premier;
    while(actuel!=NULL)
    {
        printf("%c\n",actuel->tab);
        actuel=actuel->suiv;
    }
}
