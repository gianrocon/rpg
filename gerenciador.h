#pragma once

#include "cenario.h"
#include "renderizador.h"

class Gerenciador {
    private:
        Cenario cenario;
    public:
        Renderizador render;
        Gerenciador(int);
        Cenario& getCenario();
};