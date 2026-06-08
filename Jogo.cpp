#include "Jogo.h"
#include "Plataforma.h"
#include "Chao.h"  
#include <filesystem>
#include<iostream>

Jogo::Jogo()
{   
    std::cout << std::filesystem::current_path() << std::endl;

	pGG = new GerenciadorGrafico();
    pGG->carregarFundo("C:\\Users\\Public\\JOGO TECPROG\\Jogo_TecProg\\sprites\\fundo.png");


    pJogador = new Jogador(pGG);

	Inimigo* inimigo1 = new Inimigo();
    inimigo1->setGerenciadorGrafico(pGG);

    Plataforma* plataforma1 = new Plataforma();
    plataforma1->setGerenciadorGrafico(pGG);
    plataforma1->setPosition(sf::Vector2f(300.f, 500.f));

	Chao* chao = new Chao();
	chao->setGerenciadorGrafico(pGG);
	chao->setPosition(sf::Vector2f(0.f, 550.f));



	fase1 = new Fase(pJogador, pGG);
    fase1->adicionarInimigo(inimigo1);
	fase1->adicionarEntidade(plataforma1);
	fase1->adicionarEntidade(chao);
    LEs = fase1->getListaEntidades();


    pGC = new GerenciadorColisao();
	pGC->incluirJogador(pJogador);
    pGC->incluirInimigo(inimigo1);
    pGC->incluirObstaculo(plataforma1);
	pGC->incluirObstaculo(chao);
    Executar();
}

void Jogo::Executar()
{
    while (pGG->isOpen())
    {
        sf::Event event;

        while (pGG->getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                pGG->getWindow()->close();
        }
        
        pJogador->executar();
        pGC->executar();
        pGG->clear(); 

        pGG->desenharFundo();

        for (int i = 0;i < LEs->LEs.getLen();i++) {
			Entidade* temp = LEs->LEs.getItem(i);
            temp->Draw();
        }
        pGG->display();
    }
}
