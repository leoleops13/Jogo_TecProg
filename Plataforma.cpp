#include "Plataforma.h"
#include"Jogador.h"
#include<iostream>

Plataforma::Plataforma()
{
	danoso = false;

	body.setSize(sf::Vector2f(300.0f, 40.0f));
	body.setFillColor(sf::Color::Blue);
}

void Plataforma::executar()
{
	Draw();
}

void Plataforma::salvar()
{
}

void Plataforma::obstaculizar(Jogador* pJogador)
{
	if (pJogador->getVelocidadeY() >= 0.f)
	{
		sf::Vector2f pos = pJogador->getPosition();
		pos.y = getPosition().y - pJogador->getBounds().height;

		pJogador->setPosition(pos);
		pJogador->setNoChao(true);
		pJogador->setVelocidadeY(0.f);


	}
}

