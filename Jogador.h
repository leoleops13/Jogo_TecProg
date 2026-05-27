#pragma once
#include "Personagem.h"
#include<SFML/Graphics.hpp>

class Jogador :public Personagem
{
private:
	sf::Vector2f posicaoAnterior;
public:
    Jogador();
    ~Jogador();

    void Executar();

    void colidir(Entidade* e);
};

