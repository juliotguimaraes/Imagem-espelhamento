#include <stdlib.h>
#include <stdio.h>
#include "ImagemPGM.h"

PGM* LePGM (char* entrada){
PGM *Imagem;
FILE *in;
Imagem = (PGM*) malloc(sizeof(PGM*));

in=fopen(entrada, "r");
int col, lin, val, i, j;

char lixo;
fscanf(in, "%s\n", &lixo);
fscanf(in, "%i %i %i\n", &col, &lin, &val);
Imagem->c = col;
Imagem->l = lin;

Imagem->dados = malloc((Imagem->l)*sizeof(unsigned char*));

if( (Imagem->dados) == NULL){
    printf("\nErro de memoria\n");
}
for(i = 0; i < (Imagem->l); i++){
    Imagem->dados[i]= malloc((Imagem->c)*sizeof(unsigned char));
}

for (i=0;i<(Imagem->l);i++)
    {
        for(j=0;j<(Imagem->c);j++)
        {
            fscanf(in, "%u ", &Imagem->dados[i][j]);
            printf("\n\n\nTESTEEE\n\n\n\n");
        }
        fscanf(in, "%s", &lixo);
    }
    return Imagem;
}

void SalvaPGM (PGM *Img, char* saida){
FILE *out;
int i, j;
out=fopen (saida,"w");
fprintf(out, "P2\n");
fprintf(out, "%i %i %i\n", Img->c, Img->l, 255);
for (i=0;i<Img->l;i++){
    for(j=0;j<Img->c;j++){
        fprintf(out, "%i ", Img->dados[i][j]);
    }
    fprintf (out, "\n");
}
}
