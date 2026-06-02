#pragma once
#include "Entidade.h"
#include<SFML/Graphics.hpp>

class Jogador :public Entidade
{
private:
	sf::Vector2f posicaoAnterior;
public:
    Jogador();
    ~Jogador();

    void Executar();

    void colidir(Entidade* e) override;



};

