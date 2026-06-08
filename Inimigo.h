#pragma once
#include "Entidade.h"
#include "Personagem.h"

class Inimigo : public Personagem
{
private:
public:
	Inimigo();
	~Inimigo();
	void executar() override;

	void salvar() override;

	void colidir(Entidade* e) override;
};

