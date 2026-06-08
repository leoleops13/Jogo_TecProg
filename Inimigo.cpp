#include "Inimigo.h"

Inimigo::Inimigo()
{
	body.setFillColor(sf::Color::Magenta);
	body.setSize(sf::Vector2f(50.f, 50.f));
	body.setPosition(sf::Vector2f(200.f, 200.f));
}

Inimigo::~Inimigo()
{
}

void Inimigo::executar()
{
}

void Inimigo::salvar()
{
}

void Inimigo::colidir(Entidade* e)
{
}
