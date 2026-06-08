#include "GerenciadorColisao.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Entidade.h"
#include "Obstaculo.h"


GerenciadorColisao::GerenciadorColisao()
{
	pJogador = nullptr;
}	

GerenciadorColisao::~GerenciadorColisao()
{
}

void GerenciadorColisao::incluirJogador(Jogador* player)
{
	pJogador = player;
}

void GerenciadorColisao::incluirInimigo(Inimigo* inimigo)
{
	listaInimigos.push_back(inimigo);
}

void GerenciadorColisao::incluirObstaculo(Obstaculo* obstaculo)
{
	listaObstaculos.push_back(obstaculo);
}

bool GerenciadorColisao::verificarColisao(Entidade* e1, Entidade* e2)
{
	return e1->getBounds().intersects(e2->getBounds());
}

void GerenciadorColisao::colisaoInimigo()
{
	for (Inimigo* inimigo : listaInimigos)
	{
		if (verificarColisao(pJogador, inimigo))
		{
			pJogador->colidir(inimigo);
			inimigo->colidir(pJogador);
		}
	}
}
void GerenciadorColisao::executar()
{
	colisaoInimigo();
	tratarColisaoJogsObstac();
	/*if (verificarColisao(pJogador, obstaculo))
	{
		pJogador->colidir(obstaculo);
		obstaculo->colidir(pJogador);
	}*/
}

void GerenciadorColisao::tratarColisaoJogsObstac()
{
	if (!pJogador)
		return;

	for (Obstaculo* obstaculo : listaObstaculos)
	{
		if (verificarColisao(
			static_cast<Entidade*>(pJogador),
			static_cast<Entidade*>(obstaculo)))
		{
			obstaculo->obstaculizar(pJogador);
		}
	}
}
