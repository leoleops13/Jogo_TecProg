#include "GerenciadorColisao.h"
#include<SFML/Graphics.hpp>

GerenciadorColisao::GerenciadorColisao(ListaEntidades* lista)
{
	plistaEntidades = lista;
}

void GerenciadorColisao::executar()
{
	for (int i = 0;i < plistaEntidades->getTam();i++)
	{
		Entidade* e1 = plistaEntidades->getElementos(i);

		for (int j = i + 1;j < plistaEntidades->getTam();j++)
		{
			Entidade* e2 = plistaEntidades->getElementos(j);
			if (e1->getBounds().findIntersection(e2->getBounds()).has_value())
			{
				e1->colidir(e2);
				e2->colidir(e1);
			}
		}
	}
}
