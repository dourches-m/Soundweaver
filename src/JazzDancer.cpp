//
// JazzDancer.cpp for Jazz in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 02:06:22 2017 dourches
// Last update Sun Jan 22 02:06:40 2017 dourches
//

# include	"Jazzdancer.hpp"

Jazzdancer::Jazzdancer(std::vector<sf::Sprite>  &sprite_sheet, std::vector<unsigned int> const &framesPerSprite) : BaseDancer(sprite_sheet, framesPerSprite)
{
  _type = JAZZ;
}

Jazzdancer::~Jazzdancer()
{
}
