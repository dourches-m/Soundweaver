//
// AObject.hpp for AObject in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 09:52:04 2017 dourches
// Last update Sun Jan 22 02:00:39 2017 dourches
//

#ifndef		AOBJECT_HPP_
# define	AOBJECT_HPP_

# include	"IObject.hpp"

class	AObject : public IObject
{
public:
  GraphObj _sprite;
  enum Music
    {
      ROCK,
      ELECTRO,
      JAZZ,
      UNKNOWN
    };
  Music _type;

  AObject(std::vector<sf::Sprite> & sprite_sheet,
	   std::vector<unsigned int> const &framesPerSprite);
  virtual ~AObject();
  virtual sf::Vector2u& getPos() = 0;
  virtual GraphObj& getSprite() = 0;
};

#endif		/* !OBJECT_HPP_ */
