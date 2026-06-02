#pragma once
#include "ListaEntidades.h"
#include<list>

class Entidade;
class Inimigo;
class Jogador;

class GerenciadorColisao
{
private:
	Jogador* pJogador	;
	std::list<Inimigo*>listaInimigos;
	void colisaoInimigo();

public:
	GerenciadorColisao();
	~GerenciadorColisao();

	void incluirJogador(Jogador* player);
	void incluirInimigo(Inimigo* inimigo);
	bool verificarColisao(Entidade* e1, Entidade* e2);

	void executar();
};

