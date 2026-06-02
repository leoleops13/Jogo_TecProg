#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>
#include "GerenciadorColisao"
#include<optional>

class Fase
{
protected:
	ListaEntidades* listaEntidades;//não é ponteiro para lista entidades
	Jogador* j1;
	Inimigo* i1;//acesso jogador e inimigo pela lista de entidades
	GerenciadorColisao GC;
	sf::RenderWindow* window;
	void inicializaElementos();
	void criarCenario();
public:
	Fase(Jogador* j1, sf::RenderWindow* window);
	~Fase();
	ListaEntidades* getListaEntidades() { return listaEntidades; }
	virtual void executar()=0;
};

