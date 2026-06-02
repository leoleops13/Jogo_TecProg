#include "Jogo.h"

Jogo::Jogo()
{   
	pGG = new GerenciadorGrafico();
    
    player1 = new Jogador();
	player1->setGerenciadorGrafico(pGG);
	

	Inimigo* inimigo1 = new Inimigo();
    inimigo1->setGerenciadorGrafico(pGG);

	fase1 = new Fase(player1, pGG);
    fase1 = adicionarInimigo(inimigo1);

    LEs = fase1->getListaEntidades();
    pGC = new GerenciadorColisao();
	pGC->incluirJogador(player1);
    pGC->incluirInimigo(inimigo1);
    Executar();
}

void Jogo::Executar()
{
    while (pGG->isOpen())
    {
        while (const std::optional event = pGG->getWindow()->pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                pGG->getWindow()->close();
        }
        
        player1->Executar();
        pGC->executar();
        pGG->clear(); 
        for (int i = 0;i < LEs->LEs.getLen();i++) {
			Entidade* temp = LEs->LEs.getItem(i);
            temp->Draw();
        }
        pGG->display();
    }
}
