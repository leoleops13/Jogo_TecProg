#pragma once
#include "Inimigo.h"
class Caracol :
    public Inimigo
{
private:
	int vida_casco;
public:
	Caracol();
	~Caracol();
	void salvar() override;
	void executar() override;
	//caracol não terá função de danificar o jogador, apenas de se mover e ser destruído
};

