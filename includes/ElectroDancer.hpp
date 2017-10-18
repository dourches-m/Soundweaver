//
// ElectroDancer.hpp for ele in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 02:06:58 2017 dourches
// Last update Sun Jan 22 02:07:12 2017 dourches
//

#ifndef		ELECTRODANCER_HPP_
# define	ELECTRODANCER_HPP_

# include	"BaseDancer.hpp"

class		ElectroDancer : public BaseDancer
{
  ElectroDancer(std::vector<sf::Sprite>  &sprite_sheet,
	     std::vector<unsigned int> const &framesPerSprite);
  ~ElectroDancer();
};

#endif		/* !ELECTRODANCER_HPP_ */
