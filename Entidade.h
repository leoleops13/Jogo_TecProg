#pragma once
#include<SFML/Graphics.hpp>
#include "Ente.h"
#include<optional>  

class Entidade
{
protected:
	sf::RectangleShape body;
	sf::RenderWindow* window;//usar no gerenciador grafico
public:
	Entidade();
	~Entidade();

	sf::FloatRect getBounds();
	virtual void colidir(Entidade* e);// as entidades se colidem gerenciador só verifica e usa essa função em tratar colisões
	void SetWindow(sf::RenderWindow * window) {this->window = window;}//competencia do gerenciador grafico
	void Draw() { window->draw(body); }// entidade não tem a função desenhar , sua classe base tem
};

