//
// Case.hpp for Case in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/Class/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 11:32:57 2017 dourches
// Last update Sat Jan 21 12:46:23 2017 Hugo Willaume
//

#ifndef		CASE_HPP_
# define	CASE_HPP_

# include	"BaseSpeaker.hpp"
# include	"AObject.hpp"

class Case :public AObject
{
public:
  sf::Vector2u _pos;
  bool _isSelect;
  BaseSpeaker *_currentSpeaker;

  Case(std::vector<sf::Sprite> & sprite_sheet,
       std::vector<unsigned int> const &framesPerSprite,
       sf::Vector2u pos);
  ~Case();
  sf::Vector2u& getPos();
  GraphObj& getSprite();
};

#endif		/* !CASE_HPP_ */
