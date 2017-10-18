//
// GraphObj.cpp for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Fri Jan 20 23:00:41 2017 Hugo Willaume
// Last update Sat Jan 21 12:23:27 2017 Hugo Willaume
//

#include "GraphObj.hpp"

GraphObj::GraphObj(std::vector<sf::Sprite> & sprite_sheet,
		   std::vector<unsigned int> const &framesPerSprite)
{
  std::vector<sf::Sprite>::iterator it;

  _frames = 0;
  _spritePos.x = 0;
  _spritePos.y = 0;
  _framesPerSprite = framesPerSprite;
  _sprites = sprite_sheet;
}

GraphObj::GraphObj(GraphObj const& other) :   _framesPerSprite(other._framesPerSprite),
					      _frames(other._frames),
					      _spritePos(other._spritePos),
					      _spriteIdx(other._spriteIdx)
{
  _sprites = other._sprites;
}

GraphObj &GraphObj::operator=(GraphObj const& other)
{
  _frames = other._frames;
  _framesPerSprite = other._framesPerSprite;
  _spritePos = other._spritePos;
  _spriteIdx = other._spriteIdx;
  _sprites = other._sprites;
  return *this;
}

GraphObj::~GraphObj()
{

}

void GraphObj::setSpriteSheet(std::vector<sf::Sprite> & spritesheet)
{
  _sprites = spritesheet;
}

void GraphObj::draw(sf::RenderWindow &win)
{
  _sprites[_spriteIdx].setPosition(_spritePos.x, _spritePos.y);
  win.draw(_sprites[_spriteIdx]);
}
