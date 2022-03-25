#include <vector>
#include <utility>
#include "magia.h"
#include "habilidadeFisica.h"
#include "item.h"


class Personagem {
private:
    std::vector<Magia> magias;
    std::vector<HabilidadeFisica> habilidadesFisicas;
    int hp, maxHp, mp, maxMp, nivel, forca, inteligencia, destreza;
    bool natacao;
public:
    std::pair<int, int> SelecionaCelula();
    void atacar();
    void JogarHabilidade(HabilidadeFisica);
    void conjurarMagia(Magia);
    void mover();
    void passarVez();
    void receberDano(int);
    void jogarItemFora(Item);
};