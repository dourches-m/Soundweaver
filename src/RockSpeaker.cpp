//
// BaseSpeakerRock.cpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/src
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 02:02:59 2017 Vianney
// Last update Sun Jan 22 02:41:35 2017 Vianney
//

#include "RockSpeaker.hpp"

RockSpeaker::RockSpeaker(std::vector<sf::Sprite> & sprite_sheet,
			 std::vector<unsigned int> const &framesPerSprite) : BaseSpeaker(sprite_sheet, framesPerSprite)
{
}

RockSpeaker::~RockSpeaker()
{
}
