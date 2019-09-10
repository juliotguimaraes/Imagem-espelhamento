#include <stdio.h>
#include <stdlib.h>
#include "ImagemPGM.h"
#include "EspelhamentoImagem.h"
#define MAX 100


int main(int argc, char *argv[]){
	PGM *entrada;
    PGM H;
    PGM V;

    entrada = LePGM(argv[1]);
    EspelhamentoHorizontal(entrada,&H);
    EspelhamentoVertical(entrada,&V);

    SalvaPGM(&H,argv[2]);
    SalvaPGM(&V,argv[3]);
 	return 0;
}
