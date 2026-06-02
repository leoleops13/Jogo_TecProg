#include "Entidade.h"

Entidade::Entidade():body(sf::Vector2f(100.f, 100.f))
{
	body.setFillColor(sf::Color::White);
}

Entidade::~Entidade()
{
}

sf::FloatRect Entidade::getBounds()
{
	return body.getGlobalBounds();
}

void Entidade::colidir(Entidade* e)
{
}
void Entidade::setGerenciadorGrafico(GerenciadorGrafico* gg)
{
	this->pGG = gg;
}

void Entidade::Draw()
{
	if (pGG != nullptr) {
		pGG->desenhar(body);
	}
}

void Entidade::setPosition(sf::Vector2f pos)
{
	body.setPosition(pos);
}

sf::Vector2f Entidade::getPosition()
{
	return body.getPosition();
}