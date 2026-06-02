#include "GerenciadorGrafico.h"

GerenciadorGrafico::GerenciadorGrafico() :window(sf::VideoMode({ 400, 400 }), "Joguinho de cria")
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
