#include "Jogador.h"
#include<iostream>
#include<SFML/Graphics.hpp>

using namespace std;

Jogador::Jogador(GerenciadorGrafico* gg):Personagem()
{
    setGerenciadorGrafico(gg);
	body.setSize(sf::Vector2f(50.f, 50.f));
    body.setPosition(sf::Vector2f(100.f, 100.f));
	posicaoAnterior = body.getPosition();
}

Jogador::~Jogador()
{
}

void Jogador::executar()
{
    posicaoAnterior = body.getPosition();
	aplicarGravidade();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {

        body.move(sf::Vector2f(0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {

        body.move(sf::Vector2f(-0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)&&getNoChao()) {

        setVelocidadeY(-12.f);
        setNoChao(false);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {

        body.move(sf::Vector2f(0.f, 0.1f));
    }
   
}

void Jogador::colidir(Entidade* e)
{
    body.setPosition(posicaoAnterior);
}

void Jogador::salvar()
{
}
