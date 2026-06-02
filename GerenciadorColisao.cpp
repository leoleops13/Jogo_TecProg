#include "GerenciadorColisao.h"
#include "Jogador.h"
#include "Inimigo.h"
#include "Entidade.h"


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

bool GerenciadorColisao::verificarColisao(Entidade* e1, Entidade* e2)
{
	return e1->getBounds().findIntersection(e2->getBounds()).has_value();
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
}