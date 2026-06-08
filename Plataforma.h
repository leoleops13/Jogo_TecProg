#pragma once
#include "Obstaculo.h"

class Plataforma : public Obstaculo
{
private:
	float altura;

public:
	Plataforma();

	void executar() override;
	void salvar() override;
	void obstaculizar(Jogador* pJogador) override;

};

