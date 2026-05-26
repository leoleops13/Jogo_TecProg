#pragma once
#include<SFML/Graphics.hpp>
#include<optional>  

class Entidade
{
protected:
	sf::RectangleShape body;
	sf::RenderWindow* window;
public:
	Entidade();
	~Entidade();

	sf::FloatRect getBounds();
	virtual void colidir(Entidade* e);
	void SetWindow(sf::RenderWindow * window) {this->window = window;}
	void Draw() { window->draw(body); }
};

