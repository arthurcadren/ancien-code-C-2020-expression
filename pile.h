//seumegni_20w2176
typedef struct Element Element ;
struct Element
{
    char tab;
    Element *suiv;
};
typedef struct Pile Pile;
struct Pile
{
    Element*premier;
};
void initialisation(Pile*pile);
void veri_pile_vide(Pile*pile);
void Empiler(Pile*pile,char carac);
char Depiler(Pile*pile);
void afficher (Pile*pile);
