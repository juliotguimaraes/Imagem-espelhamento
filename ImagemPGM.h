#ifndef IMAGEMPGM_H_INCLUDED
#define IMAGEMPGM_H_INCLUDED

typedef struct PGM{
int c;
int l;
unsigned char **dados;/*data*/
}PGM;

PGM* LePGM (char* entrada);

void SalvaPGM (PGM *Img, char* saida);


#endif // IMAGEMPGM_H_INCLUDED
