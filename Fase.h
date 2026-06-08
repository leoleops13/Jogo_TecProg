#pragma once
#include "Jogador.h"
#include "Inimigo.h"
#include "ListaEntidades.h"
#include <SFML/Graphics.hpp>
#include "GerenciadorColisao.h"
#include "GerenciadorGrafico.h"

class Fase
{
protected:
	ListaEntidades* listaEntidades;//não é ponteiro para lista entidades
	Jogador* j1;
	Inimigo* i1;//acesso jogador e inimigo pela lista de entidades
	GerenciadorColisao GC;
	GerenciadorGrafico* pGG;
	sf::RenderWindow* window;
	void inicializaElementos();
	void criarCenario();
public:
	Fase(Jogador* j1,GerenciadorGrafico* gg);
	~Fase();
	ListaEntidades* getListaEntidades() { return listaEntidades; }
	virtual void executar();
	void adicionarInimigo(Inimigo* inimigo);
	void adicionarEntidade(Entidade* entidade);
};

