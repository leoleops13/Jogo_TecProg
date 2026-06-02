#pragma once
#include<iostream>
#include<SFML/Graphics.hpp>
#include<optional>
#include"Jogador.h"
#include"Inimigo.h"
#include"ListaEntidades.h"
#include"Fase.h"
#include"Personagem.h"
#include"GerenciadorColisao.h"

class Jogo
{
private:
    sf::RenderWindow window;//se não me engano window é declarada dentro de gerenciador gráfico, discutir
    Jogador* player1;//aqui deve ser pJogador1
    ListaEntidades* LEs;//classe Lista e ListaEntidades é declarada dentro da classe Fase não em Jogo
    Fase* fase1;//a classe jogo chama Fase_prim ou Fase_seg direto não a classe base Fase
    GerenciadorColisao* pGC;//na classe jogo não se declara Gerenciador de colisões apenas na classe fase
	
public:
    Jogo();
	virtual ~Jogo();
    void Executar();
};

