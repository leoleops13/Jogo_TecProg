#pragma once
#include "Lista.h"
#include "Entidade.h"

class ListaEntidades
{

public:
	Lista<Entidade> LEs;
	int getTam();
	Entidade* getElementos(int pos);
};

