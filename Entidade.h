#pragma once
#include<SFML/Graphics.hpp>
#include"GerenciadorGrafico.h"

class GerenciadorGrafico;

class Entidade
{
protected:

	int id;
	sf::RectangleShape body;
	GerenciadorGrafico* pGG;

public:

	Entidade();
	virtual ~Entidade();

	sf::FloatRect getBounds();

	virtual void colidir(Entidade* e);
	void setGerenciadorGrafico(GerenciadorGrafico* gg);
	void Draw();
	void setPosition(sf::Vector2f pos);
	sf::Vector2f getPosition();

	virtual void executar() = 0;
	virtual void salvar() = 0;
};