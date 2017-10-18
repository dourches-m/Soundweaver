//
// ElectroDancer.cpp for electro in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 02:07:34 2017 dourches
// Last update Sun Jan 22 02:07:45 2017 dourches
//

# include	"ElectroDancer.hpp"

ElectroDancer::ElectroDancer(std::vector<sf::Sprite>  &sprite_sheet, std::vector<unsigned int> const &framesPerSprite) : BaseDancer(sprite_sheet, framesPerSprite)
{
  _type = ELECTRO;
}

ElectroDancer::~ElectroDancer()
{
}
