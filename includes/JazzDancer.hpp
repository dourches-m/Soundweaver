//
// JazzDancer.hpp for Jazz in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 02:05:42 2017 dourches
// Last update Sun Jan 22 02:05:57 2017 dourches
//

#ifndef		JAZZDANCER_HPP_
# define	JAZZDANCER_HPP_

# include	"BaseDancer.hpp"

class		Jazzdancer : public BaseDancer
{
  Jazzdancer(std::vector<sf::Sprite>  &sprite_sheet,
	     std::vector<unsigned int> const &framesPerSprite);
  ~Jazzdancer();
};

#endif		/* !JAZZDANCER_HPP_ */
