#pragma once
#include<SFML/Graphics.hpp>

class GerenciadorGrafico
{
private:
	sf::RenderWindow window;
	sf::Texture texturaFundo;
	sf::Sprite spriteFundo;


public:
	GerenciadorGrafico();
	~GerenciadorGrafico();
	sf::RenderWindow* getWindow();
	void clear();
	void display();
	void desenhar(sf::RectangleShape& body);
	bool isOpen();
	void carregarFundo(const std::string& caminho);
	void desenharFundo();
		
};

