#include "Jogador.h"
#include<iostream>
#include<SFML/Graphics.hpp>

using namespace std;

Jogador::Jogador()
{
}

Jogador::~Jogador()
{
}

void Jogador::Executar()
{
    posicaoAnterior = body.getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {

        body.move(sf::Vector2f(1.f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {

        body.move(sf::Vector2f(-1.f, 0.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {

        body.move(sf::Vector2f(0.f, -1.f));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {

        body.move(sf::Vector2f(0.f, 1.f));
    }
}

void Jogador::colidir(Entidade* e)
{
    body.setPosition(posicaoAnterior);
}
