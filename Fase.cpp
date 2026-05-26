#include "Fase.h"

void Fase::inicializaElementos()
{
	listaEntidades->LEs.push(j1);
	listaEntidades->LEs.push(i1);
}

Fase::Fase(Jogador* j1, sf::RenderWindow* window)
{
	this ->window = window;
	this->j1 = j1;
	listaEntidades = new ListaEntidades;
	i1 = new Inimigo();
	i1->SetWindow(window);
	inicializaElementos();

}

Fase::~Fase()
{
}
