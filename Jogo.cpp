#include "Jogo.h"

Jogo::Jogo():window(sf::VideoMode({ 400, 400 }), "Joguinho de cria")
{   
    player1 = new Jogador();// aqui é melhor pJogador ou pPlayer
	player1->SetWindow(&window);
	fase1 = new Fase(player1, &window);//fase a ser declarada deve ser das classes derivadas fase_prim e fase_seg MAS ESCOLHIDA POR MENU
	LEs = fase1->getListaEntidades();//só se tem acesso a fase_prim ou fase_seg pelo classe jogo 
    pGC = new GerenciadorColisao(LEs);//NÃO SE INICIALIZA GERENCIADOR DE COLISÕES EM JOGO MAS SIM NCA CLASSE FASE
	//DECLARA MENU QUANDO PRONTO
    Executar();
}
Jogo::~Jogo(){
	std::cout << "JOGO ACABOU :(";
}	
void Jogo::Executar()
{
    while (window.isOpen())//administração da janela apenas por gerenciador gráfico
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                delete this;//DESTRUTORA DA CLASSE JOGO CHAMADA DENTRO DE EXECUTAR 
        }
        //incluir menu antes para a seleção de fases
        player1->Executar();//alterar para pPlayer ou pJogador
        pGC->executar();//deve se chamar virtual void executar da classe fase no loop
        window.clear(); 
        for (int i = 0;i < LEs->LEs.getLen();i++) {
			Entidade* temp = LEs->LEs.getItem(i);
            temp->Draw();
        }//deve se chamar virtual void executar da classe fase no loop
        window.display();//administração da janela apenas por genrenciador gráfico 
    }
}
