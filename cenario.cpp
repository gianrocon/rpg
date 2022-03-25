#include "cenario.h"

int Cenario::getTamanho()
{
    return tamanho;
}

Cenario::Cenario(){
}

Cenario::Cenario(int tamanho){
    this->tamanho = tamanho;
    for (int line=0;line<tamanho;++line) {
        grade[line] = new Celula[tamanho];
    }
}

