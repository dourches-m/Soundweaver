//
// GraphObj.hpp for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Fri Jan 20 22:54:48 2017 Hugo Willaume
// Last update Sat Jan 21 12:23:11 2017 Hugo Willaume
//

#ifndef		CHARAOBJ_HPP_
# define	CHARAOBJ_HPP_

#include	<string>
#include	<vector>
#include	<SFML/System.hpp>
#include	<SFML/Graphics.hpp>


class GraphObj{
public:
  GraphObj(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite);
  GraphObj(GraphObj const &);
  GraphObj &operator=(GraphObj const &);
  ~GraphObj();

  void setSpriteSheet(std::vector<sf::Sprite> & spritesheet);
  void draw(sf::RenderWindow &win) ;

  std::vector<sf::Sprite> _sprites;
  std::vector<unsigned int> _framesPerSprite;
  unsigned int _frames;
  sf::Vector2u _spritePos;
  unsigned int _spriteIdx;

};

#endif		/* CHARAOBJ_HPP */
