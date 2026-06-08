#include "CaracolRambo.h"

CaracolRambo::CaracolRambo() : tamanho(sf::Vector2f(200.f, 200.f))
{
	// Configurações de Textura CaracolRambo.png
}
CaracolRambo::~CaracolRambo()
{
}
void CaracolRambo::executar()
{
	// Lógica de movimento e disparo do CaracolRambo
}
void CaracolRambo::disparar()
{
	// Lógica para disparar um projétil
}
void CaracolRambo::danificar(Jogador* pJogador)
{
	//pJogador->num_vidas -= 1; // Exemplo de dano ao jogador
	//adicionar setter e getter para num_vidas em Jogador.h para acessar num_vidas
}