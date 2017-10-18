//
// BaseSpeakerJazz.cpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/src
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 02:11:05 2017 Vianney
// Last update Sun Jan 22 02:41:40 2017 Vianney
//

#include "JazzSpeaker.hpp"

JazzSpeaker::JazzSpeaker(std::vector<sf::Sprite> & sprite_sheet,
			 std::vector<unsigned int> const &framesPerSprite) : BaseSpeaker(sprite_sheet, framesPerSprite)
{
}

JazzSpeaker::~JazzSpeaker()
{
}
