#pragma once
#include "Obstaculo.h"

class Chao : public Obstaculo
{
private:
	float altura;
	sf::Texture textura;

public:
	Chao();

	void executar() override;
	void salvar() override;
	void obstaculizar(Jogador* pJogador) override;

};

