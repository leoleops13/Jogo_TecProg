#pragma once
#include "Entidade.h"

class Jogador;

class Obstaculo : public Entidade
{
protected:
	bool danoso;

public:
	Obstaculo();
	virtual ~Obstaculo();

	virtual void executar() = 0;
	virtual void salvar() = 0;

	virtual void colidir(Entidade* e);

	virtual void obstaculizar(Jogador* pJogador);
};

