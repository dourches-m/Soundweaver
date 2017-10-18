//
// BaseDancer.cpp for base in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 10:03:13 2017 dourches
// Last update Sun Jan 22 02:09:10 2017 dourches
//

# include	"BaseDancer.hpp"

BaseDancer::BaseDancer(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite)
  : AObject(sprite_sheet, framesPerSprite),  _pos(0, 0), _joy(0), _last_move(-1),  _dest(2, 0), _direction(HAUT)
{
}

BaseDancer::~BaseDancer()
{
}

sf::Vector2u& BaseDancer::getPos()
{
  return _pos;
}

bool BaseDancer::can_move()
{
  if (static_cast<int>(_time.getElapsedTime().asSeconds()) % 10 == 0 &&
      static_cast<int>(_time.getElapsedTime().asSeconds()) != _last_move)
    {
      _last_move = _time.getElapsedTime().asSeconds();
      return true;
    }
  return false;
}

bool BaseDancer::can_die()
{
  return static_cast<int>(_time.getElapsedTime().asSeconds()) > 90 &&
    _pos.x == 300 && _pos.y == 900;
  
}

GraphObj&	BaseDancer::getSprite()
{
  return _sprite;
}
