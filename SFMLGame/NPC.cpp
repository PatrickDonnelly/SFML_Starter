#include <NPC.h>

NPC::NPC() { initialize();  };
NPC::~NPC(){};


void NPC::initialize()
{
	cout << "NPC initialize" << endl;

	if (!m_texture.loadFromFile("idle_000.png"))
	{
		//error
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(200,200);
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* t_window)
{
	cout << "NPC drawing" << endl;
	t_window->draw(m_sprite);
}
void NPC::reset()
{
	cout << "NPC Position Reset" << endl;
	m_sprite.setPosition(300, 300);
}