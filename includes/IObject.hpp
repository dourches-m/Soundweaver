//
// IObject.hpp for IOBject in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Fri Jan 20 19:57:29 2017 dourches
// Last update Sat Jan 21 09:17:33 2017 Hugo Willaume
//

#ifndef		IOBJECT_HPP_
# define	IOBJECT_HPP_

# include	<vector>
# include	<SFML/System.hpp>
# include	"GraphObj.hpp"


class	IObject
{
public:
  virtual ~IObject() {};

  virtual sf::Vector2u& getPos() = 0;
  virtual GraphObj& getSprite() = 0;
};

#endif		/* !IOBJECT_HPP_ */
