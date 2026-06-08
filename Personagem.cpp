#include "Personagem.h"

Personagem::Personagem():vida(3),velocidade(0.f, 0.f),noChao(false)
{
	
}

Personagem::~Personagem()
{
}

void Personagem::aplicarGravidade()
{
	if (!noChao)
	{
		velocidade.y += 0.5f; // Aceleração da gravidade
		body.move(0.f, velocidade.y); // Move o personagem para baixo
	}
}

void Personagem::setNoChao(bool estado)
{
	noChao = estado;
}

bool Personagem::getNoChao()
{
	return noChao;
}

int Personagem::getVida()
{
	return vida;
}

void Personagem::setVida(int v)
{
	vida = v;
}

void Personagem::setVelocidade(sf::Vector2f vel)
{
	velocidade = vel;
}

void Personagem::setVelocidadeY(float velY)
{
	velocidade.y = velY;
}

float Personagem::getVelocidadeY()
{
	return velocidade.y;
}
