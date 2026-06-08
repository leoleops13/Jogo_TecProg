#pragma once
#include "Entidade.h"
class Personagem: public Entidade
{
protected:
	sf::Vector2f velocidade;
	bool noChao;
	int vida;

public:
	Personagem();
	virtual ~Personagem();
	
	void aplicarGravidade();
	void setNoChao(bool estado);
	bool getNoChao();
	int getVida();
	void setVida(int v);
	void setVelocidade(sf::Vector2f vel);
	void setVelocidadeY(float velY);
	float getVelocidadeY();
};

