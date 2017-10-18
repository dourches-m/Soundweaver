//
// RockDancer.cpp for Dancer in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/includes
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 01:55:53 2017 dourches
// Last update Sun Jan 22 02:07:48 2017 dourches
//

#ifndef		ROCKDANCER_HPP_
# define	ROCKDANCER_HPP_

# include	"BaseDancer.hpp"

class		RockDancer : public BaseDancer
{
  RockDancer(std::vector<sf::Sprite>  &sprite_sheet,
	     std::vector<unsigned int> const &framesPerSprite);
  ~RockDancer();
};

#endif		/* !ROCKDANCER_HPP_ */
