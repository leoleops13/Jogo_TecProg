#include "Jogador.h"
#include<iostream>
#include<SFML/Graphics.hpp>

using namespace std;

Jogador::Jogador():Entidade()
{
	body.setSize(sf::Vector2f(50.f, 50.f));
    body.setPosition(sf::Vector2f(300.f, 300.f));
	posicaoAnterior = body.getPosition();
}

Jogador::~Jogador()
{
}

void Jogador::Executar()
{
    posicaoAnterior = body.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {

        body.move(sf::Vector2f(0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {

        body.move(sf::Vector2f(-0.1f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {

        body.move(sf::Vector2f(0.f, -0.1f ));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {

        body.move(sf::Vector2f(0.f, 0.1f));
    }
}

void Jogador::colidir(Entidade* e)
{
    body.setPosition(posicaoAnterior);
}
