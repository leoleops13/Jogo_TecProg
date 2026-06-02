#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>
#include<optional>

class GerenciadorGrafico;

class Fase
{
private:
	ListaEntidades* listaEntidades;
	Jogador* j1;
	Inimigo* i1;
	GerenciadorGrafico* pGG;
	void inicializaElementos();
public:
	Fase(Jogador* j1, GerenciadorGrafico* gg);
	~Fase();
	ListaEntidades* getListaEntidades() { return listaEntidades; }
	void adicionarInimigo(Inimigo* inimigo);


};

