#include "Plataforma.h"
#include"Jogador.h"
#include<iostream>

Plataforma::Plataforma()
{
	danoso = false;

	textura.loadFromFile("C:\\Users\\Public\\JOGO TECPROG\\Jogo_TecProg\\sprites\\plataforma.png");
	body.setTexture(&textura);
	body.setSize(sf::Vector2f(300.0f, 40.0f));

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

