//seumegni_20w2176
#include <stdio.h>
#include <stdlib.h>
#include"pile.h"
#include"fonction.h"
#include <string.h>
int main()
{
   char chaine[100];
   int tmp,cont;
   do{
     printf("entrer une expression et voyer si elle est bien forme\n\n\n\n");
     /*lecture de tous le fichier*/


     fgets(chaine,sizeof(chaine),stdin);

     tmp=verif_bien_forme(chaine);//FONCTION DE VERIFICATION
    if(tmp==0)
        printf("cette expression mal formee\n");
    else
        printf("cette expression bien formee\n");
    getchar();
    }
    while(cont==1);
    return 0;
}
