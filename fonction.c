//seumegni_20w2176
#include"pile.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int verif_bien_forme(char txt[100])
{
    int vrai=1,cmp=0; char tmp=0;
    Pile*p=malloc(sizeof(*p));
    initialisation(p);
    for(int i=0;txt[i]!='\0';i++)
    {
        if(txt[i]=='('||txt[i]=='{'||txt[i]=='[')
            {
                Empiler(p,txt[i]);cmp++;
            }
        else if(txt[i]==')')
        {
                tmp=Depiler(p);cmp--;
                if(tmp!='(')
                {
                    vrai=0;
                    break;
                }
        }
                else if(txt[i]==']')
        {
                tmp=Depiler(p);cmp--;
                if(tmp!='[')
                {
                    vrai=0;
                    break;
                }
        }
                else if(txt[i]=='}')
        {
                tmp=Depiler(p);cmp--;
                if(tmp!='{')
                {
                    vrai=0;
                    break;
                }
        }
    }
if(cmp!=0)
    vrai=0;
    return vrai;
}
