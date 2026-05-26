#include "Entidade.h"

Entidade::Entidade():body(sf::Vector2f(100.f, 100.f))
{
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
