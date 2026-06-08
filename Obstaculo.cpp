#include "Obstaculo.h"
#include"Jogador.h"

Obstaculo::Obstaculo():danoso(false)
{
}

Obstaculo::~Obstaculo()
{
}

void Obstaculo::colidir(Entidade* e)
{
	Jogador* pJogador = dynamic_cast<Jogador*>(e);

	if (pJogador)
	{
		obstaculizar(pJogador);
	}
}

void Obstaculo::obstaculizar(Jogador* pJogador)
{
}
