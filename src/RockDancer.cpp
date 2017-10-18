//
// RockDancer.cpp<src> for Rock in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/includes
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sun Jan 22 01:58:10 2017 dourches
// Last update Sun Jan 22 02:07:47 2017 dourches
//

# include	"RockDancer.hpp"

RockDancer::RockDancer(std::vector<sf::Sprite>  &sprite_sheet, std::vector<unsigned int> const &framesPerSprite) : BaseDancer(sprite_sheet, framesPerSprite)
{
  _type = ROCK;
}

RockDancer::~RockDancer()
{
}
