#include <Game.h>
#include <SFML/Graphics.hpp>

using namespace sf;

sf::RenderWindow* window = new RenderWindow(sf::VideoMode(800, 600), "Launching...");;

Game::Game(){}

void Game::initialize()
{
	player = new Player();
	npc = new NPC();

	window->setSize(sf::Vector2u(640, 480));
	window->setTitle("Game");
}

void Game::run()
{
	initialize();

	while (window->isOpen())
	{
		update();
		draw();
	}
}

void Game::update()
{
	sf::Event event;
	while (window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window->close();

		player->update();
		npc->update();
		collision();
		
	}

}

void Game::draw()
{
	window->clear();
	npc->draw(window);
	player->draw(window);
	window->display();
}

void Game::collision()
{
	if (player->m_sprite.getGlobalBounds().intersects(npc->m_sprite.getGlobalBounds()))
	{
		cout << "NPC - Player Collision" << endl;
		player->reset();
		npc->reset();
	}
}

