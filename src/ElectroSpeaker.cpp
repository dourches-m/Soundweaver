//
// BaseSpeakerElectro.cpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/src
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 02:09:07 2017 Vianney
// Last update Sun Jan 22 02:41:47 2017 Vianney
//

#include "ElectroSpeaker.hpp"

ElectroSpeaker::ElectroSpeaker(std::vector<sf::Sprite> & sprite_sheet,
			       std::vector<unsigned int> const &framesPerSprite) : BaseSpeaker(sprite_sheet, framesPerSprite)
{
}

ElectroSpeaker::~ElectroSpeaker()
{
}

