//
// Speaker.hpp for speaker in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/header
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 10:11:57 2017 dourches
// Last update Sun Jan 22 02:00:38 2017 dourches
//

#ifndef		BASESPEAKER_HPP_
# define	BASESPEAKER_HPP_

# include	<vector>
# include	"AObject.hpp"

class Case;

class BaseSpeaker : public AObject
{
public:
  unsigned int _price;
  int _range;
  unsigned int _dam;
  Case *pos;

  BaseSpeaker(std::vector<sf::Sprite>  & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite);
  ~BaseSpeaker();
  sf::Vector2u& getPos();
  GraphObj& getSprite();
};

#endif		/* !BASESPEAKER_HPP_ */
