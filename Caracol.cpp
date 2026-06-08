#include "Caracol.h"

Caracol::Caracol() : vida_casco(3)
{
	// Configurações Figura Caracol.png
}

Caracol::~Caracol()
{
}
Caracol::salvar()
{
	// Implementação do método salvar
}
Caracol::executar()
{
	// Implementação do mover caracol
	if (!num_vidas && vida_casco) {
		num_vidas = vida_casco;
		vida_casco = 0;
	}
	else {
		num_vidas = -1;
		// Morte caracol
	}
}
