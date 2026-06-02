#include "Fase.h"
#include "GerenciadorGrafico.h"

void Fase::inicializaElementos()
{
	listaEntidades->LEs.push(j1);
	if (i1 != nullptr)
	{
		listaEntidades->LEs.push(i1);
	}
}

Fase::Fase(Jogador* j1, GerenciadorGrafico* gg)
{
	this->pGG=gg; 
	this->j1 = j1;
	this->i1 = nullptr;
	listaEntidades = new ListaEntidades;
	inicializaElementos();
}

void Fase::adicionarInimigo(Inimigo* inimigo)
{
	if (inimigo) {
		this->i1 = inimigo;
		inimigo->setGerenciadorGrafico(pGG);  // Configurar o GerenciadorGrafico
		listaEntidades->LEs.push(i1);
	}
}	
Fase::~Fase()
{
	delete listaEntidades;
}