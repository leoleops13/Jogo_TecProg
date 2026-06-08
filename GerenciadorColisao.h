#pragma once
#include "ListaEntidades.h"
#include<list>

class Entidade;
class Inimigo;
class Jogador;
class Obstaculo;

class GerenciadorColisao
{
private:
	Jogador* pJogador	;
	std::list<Inimigo*>listaInimigos;
	std::list<Obstaculo*> listaObstaculos;
	void colisaoInimigo();

public:
	GerenciadorColisao();
	~GerenciadorColisao();

	void incluirJogador(Jogador* player);
	void incluirInimigo(Inimigo* inimigo);
	void incluirObstaculo(Obstaculo* obstaculo);
	bool verificarColisao(Entidade* e1, Entidade* e2);

	void executar();

		void tratarColisaoJogsObstac();

};

