#pragma once
#include "Inimigo.h"
#include "Jogador.h"
class Lesma :
    public Inimigo
{
private:
	int gosma;
public:
	Lesma();
	~Lesma();
	void danificar(Jogador* pJogador);
	void executar() override;
	void salvar() override;
};

