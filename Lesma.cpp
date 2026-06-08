#include "Lesma.h"

Lesma::Lesma() : gosma(2)
{
	num_vidas += gosma;
	// Configurar a aparência da Lesma Lesma.png
}
Lesma::~Lesma()
{
}
Lesma::danificar(Jogador* pJogador)
{
	//pJogador->num_vidas -= gosma;
	//implementar setter e getter para num_vidas em Jogador.h para acessar num_vidas
}
Lesma::executar()
{
	// Implementar mover Lesma para tras e para frente
	// adicionar morte
}
Lesma::salvar()
{
	// Implementar salvar estado da Lesma
}