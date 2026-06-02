#pragma once
#include<SFML/Graphics.hpp>

class GerenciadorGrafico
{
private:
	sf::RenderWindow window;

public:
	GerenciadorGrafico();
	~GerenciadorGrafico();
	sf::RenderWindow* getWindow();
	void clear();
	void display();
	void desenhar(sf::RectangleShape& body);
	bool isOpen();

};

