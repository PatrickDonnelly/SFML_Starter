#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{
public:
	Character();
	~Character();
	void initialize();
	void update();
	void draw();

	sf::Texture m_texture;
	sf::Sprite m_sprite;
	
};
#endif