#include "Jogo.h"

Jogo::Jogo():window(sf::VideoMode({ 400, 400 }), "Joguinho de cria")
{   
    player1 = new Jogador();
	player1->SetWindow(&window);
	fase1 = new Fase(player1, &window);
	LEs = fase1->getListaEntidades();
    pGC = new GerenciadorColisao(LEs);
    Executar();
}

void Jogo::Executar()
{
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        
        player1->Executar();
        pGC->executar();
        window.clear(); 
        for (int i = 0;i < LEs->LEs.getLen();i++) {
			Entidade* temp = LEs->LEs.getItem(i);
            temp->Draw();
        }
        window.display();
    }
}
