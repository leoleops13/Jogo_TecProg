#pragma once
#include<SFML/Graphics.hpp>
#include<optional>  
#include"GerenciadorGrafico.h"

class GerenciadorGrafico;

class Entidade
{
protected:

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

