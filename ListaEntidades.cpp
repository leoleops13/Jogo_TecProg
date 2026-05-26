#include "ListaEntidades.h"

int ListaEntidades::getTam()
{
	return LEs.getLen();
}

Entidade* ListaEntidades::getElementos(int pos)
{
	return LEs.getItem(pos);
}
