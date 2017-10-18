//
// AObject.cpp for Aobject in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/src
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 09:57:08 2017 dourches
// Last update Sat Jan 21 12:19:17 2017 Hugo Willaume
//

# include	"AObject.hpp"

AObject::AObject(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite) :
  _sprite(GraphObj(sprite_sheet, framesPerSprite)), _type(UNKNOWN)
{
}

AObject::~AObject()
{
}
