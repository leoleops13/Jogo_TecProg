#include "GerenciadorGrafico.h"
#include <iostream>

GerenciadorGrafico::GerenciadorGrafico() :window(sf::VideoMode({ 800, 600 }), "Joguinho de cria")
{

}

GerenciadorGrafico::~GerenciadorGrafico()
{
}
sf::RenderWindow* GerenciadorGrafico::getWindow()
{
	return &window;
}

void GerenciadorGrafico::clear()
{
	window.clear();
}

void GerenciadorGrafico::display()
{
	window.display();
}

void GerenciadorGrafico::desenhar(sf::RectangleShape& body)
{
	window.draw(body);
}

bool GerenciadorGrafico::isOpen()
{
	return window.isOpen();
}

void GerenciadorGrafico::carregarFundo(const std::string& caminho)
{
	if(!texturaFundo.loadFromFile(caminho))
	{
		std::cout << "Erro ao carregar a textura de fundo!" << std::endl;
		return;
	}
	spriteFundo.setTexture(texturaFundo);
	sf::Vector2u tamanhoJanela = window.getSize();
	sf::Vector2u tamanhoImagem = texturaFundo.getSize();

	spriteFundo.setScale(
		(float)tamanhoJanela.x / tamanhoImagem.x,
		(float)tamanhoJanela.y / tamanhoImagem.y
	);
}

void GerenciadorGrafico::desenharFundo()
{
	window.draw(spriteFundo);
}

