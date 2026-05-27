#pragma once
#include "Personagem.h"

class Inimigo :public Personagem
{
protected:
	int nivel_maldade;
public:
	Inimigo();
	~Inimigo();
};

