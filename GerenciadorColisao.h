#pragma once
#include "ListaEntidades.h"
class GerenciadorColisao
{
private:
	ListaEntidades* plistaEntidades;
public:
	GerenciadorColisao(ListaEntidades* lista);

	void executar();
};

