//
// BaseSpeaker.cpp for Base in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 10:14:05 2017 dourches
// Last update Sat Jan 21 12:20:58 2017 Hugo Willaume
//

# include	<string>
# include	"Case.hpp"
# include	"BaseSpeaker.hpp"

BaseSpeaker::BaseSpeaker(std::vector<sf::Sprite> & sprite_sheet,
			 std::vector<unsigned int> const &framesPerSprite) :
  AObject(sprite_sheet, framesPerSprite), _price(500), _range(3), _dam(10), pos(NULL)
{
}

BaseSpeaker::~BaseSpeaker()
{
}

sf::Vector2u& BaseSpeaker::getPos()
{
  return pos->_pos;
}

GraphObj	&BaseSpeaker::getSprite()
{
  return _sprite;
}
