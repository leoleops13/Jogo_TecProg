#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include "GerenciadorColisao.h"
#include <SFML/Graphics.hpp>
#include<optional>

class Fase
{
protected:
	ListaEntidades* listaEntidades;
	Jogador* j1;
	Inimigo* i1;
	GerenciadorColisao GC;
	sf::RenderWindow* window;//usar gerenciador gráfico
	void inicializaElementos();
public:
	Fase(Jogador* j1, sf::RenderWindow* window);
	~Fase();
	ListaEntidades* getListaEntidades() { return listaEntidades; }
};

