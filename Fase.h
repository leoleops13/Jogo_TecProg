#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>
#include<optional>

class Fase
{
private:
	ListaEntidades* listaEntidades;
	Jogador* j1;
	Inimigo* i1;
	sf::RenderWindow* window;
	void inicializaElementos();
public:
	Fase(Jogador* j1, sf::RenderWindow* window);
	~Fase();
	ListaEntidades* getListaEntidades() { return listaEntidades; }


};

