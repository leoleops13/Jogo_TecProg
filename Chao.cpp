#include "Chao.h"
#include"Jogador.h"

Chao::Chao()
{
	danoso = false;

	textura.loadFromFile("C:\\Users\\Public\\JOGO TECPROG\\Jogo_TecProg\\sprites\\chao.png");
	body.setTexture(&textura);
	body.setSize(sf::Vector2f(800.0f, 50.0f));
	
}

void Chao::executar()
{
	Draw();
}

void Chao::salvar()
{
}

void Chao::obstaculizar(Jogador* pJogador)
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