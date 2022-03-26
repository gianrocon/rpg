#include "gerenciador.h"

Gerenciador::Gerenciador(int tamanho) {
    cenario = Cenario(tamanho);
}
Cenario& Gerenciador::getCenario() {
    return cenario;
}