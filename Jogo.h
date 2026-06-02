#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<optional>
#include"Jogador.h"
#include"Inimigo.h"
#include"ListaEntidades.h"
#include"Fase.h"
#include"GerenciadorColisao.h"
#include"GerenciadorGrafico.h"

class Jogo
{
private:
	GerenciadorGrafico* pGG;
    Jogador* player1;
    ListaEntidades* LEs;
    Fase* fase1;
    GerenciadorColisao* pGC;
	
public:
    Jogo();

    void Executar();
};

