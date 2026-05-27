#include "Inimigo.h"

Inimigo::Inimigo()
{
	int num_maldade=1;
	body.setFillColor(sf::Color::Magenta);
	body.setPosition(sf::Vector2f(200.f, 200.f));
}

Inimigo::~Inimigo()
{
}
