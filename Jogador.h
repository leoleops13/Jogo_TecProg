#pragma once
#include "Entidade.h"
#include "Personagem.h"
#include<SFML/Graphics.hpp>

class Jogador :public Personagem
{
private:
	sf::Vector2f posicaoAnterior;
public:
    Jogador(GerenciadorGrafico* gg);
    ~Jogador();

    void executar()override;

    void colidir(Entidade* e) override;

    void salvar()override;

};

