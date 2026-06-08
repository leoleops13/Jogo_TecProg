#pragma once
#include "Inimigo.h"
#include "Jogador.h"
class CaracolRambo :
    public Inimigo
{
private:
	//atirar projetil;
	sf::Vector2f tamanho;
public:
	CaracolRambo();
	~CaracolRambo();
	void executar() override;
	void disparar();
	void danificar(Jogador* pJogador) override;
};

