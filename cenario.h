#pragma once

#include <vector>
#include "jogador.h"
#include "npc.h"
#include "inimigo.h"
#include "celula.h"
#include "itemnomapa.h"
#include "personagem.h"

class Cenario {
private:
    int tamanho;
    Jogador jogador;
    std::vector<Npc> npcs;
    std::vector<Inimigo> inimigos;
    Celula** grade;
    std::vector<ItemNoMapa> itemsNoMapa;
public:
    void distribuiTurnos();
    bool estaMorto(Personagem);
    int getTamanho();
    Cenario(int);
    Cenario();
};