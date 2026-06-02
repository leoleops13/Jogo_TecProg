#pragma once
#include "Personagem.h"
#include<SFML/Graphics.hpp>

class Jogador :public Personagem
{
private:
	sf::Vector2f posicaoAnterior;
protected:
	int pontos;
public:
    Jogador();
    ~Jogador();

    void Executar();
	void Salvar(){};
    void colidir(Entidade* e);//mudar junto com o sistema de colisões
};

