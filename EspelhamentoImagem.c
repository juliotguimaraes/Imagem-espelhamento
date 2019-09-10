#include <stdlib.h>
#include <stdio.h>
#include "ImagemPGM.h"
#include "EspelhamentoImagem.h"


 void EspelhamentoHorizontal (PGM *img, PGM *saida){
     int i, j, M;
     M= img->c;
     saida->c = img->c;
     saida->l = img->l;
     saida->dados = malloc((img->l)*sizeof(unsigned*));

     for (i=0;i<img->l;i++){
      saida->dados[i]= malloc((img->c)*sizeof(unsigned char));
       for(j=0;j<M;j++){
        saida->dados[i][j] = img->dados[i][M-j-1];
       }
     }
 }
void EspelhamentoVertical (PGM *img, PGM *saida){
 int i, j, N;
     N= img->l;
     saida->c = img->c;
     saida->l = img->l;
     saida->dados = malloc((img->l)*sizeof(unsigned*));
     for (i=0;i<img->l;i++){
      saida->dados[i]= malloc((img->c)*sizeof(unsigned char));
       for(j=0;j<N;j++){
        saida->dados[i][j] = img->dados[N-i-1][j];

 }
 }
}
