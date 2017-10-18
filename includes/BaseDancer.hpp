//
// BaseDancer.hpp for Base in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 09:59:54 2017 dourches
// Last update Sun Jan 22 02:09:12 2017 dourches
//

#ifndef		BASEDANCER_HPP_
# define	BASEDANCER_HPP_

# include	<vector>
# include	"AObject.hpp"

class	BaseDancer : public AObject
{
public:
  sf::Vector2u _pos;
  unsigned int _joy;
  sf::Clock _time;
  int _last_move;
  sf::Vector2u _dest;
  enum Dir
    {
      HAUT,
      BAS
    };

  enum Action
    {
      IDLE,
      JOYFUL
    };
  Dir _direction;
  BaseDancer(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite);
  virtual ~BaseDancer();

  bool can_move();
  bool can_die();
  
  sf::Vector2u & getPos();
  GraphObj& getSprite();
};

#endif		/* !BASEDANCER_HPP_ */
