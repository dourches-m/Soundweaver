//
// Case.cpp for Case in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/Class/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 11:38:26 2017 dourches
// Last update Sat Jan 21 12:46:07 2017 Hugo Willaume
//

# include	<string>
# include	"Case.hpp"

Case::Case(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite,
	   sf::Vector2u pos) :
  AObject(sprite_sheet, framesPerSprite), _pos(pos), _isSelect(false), _currentSpeaker(NULL)
{
}

Case::~Case()
{
  if (_currentSpeaker != NULL)
    delete _currentSpeaker;
}

sf::Vector2u& Case::getPos()
{
  return _pos;
}

GraphObj&	Case::getSprite()
{
  return _sprite;
}
