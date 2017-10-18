//
// BaseSpeakerRock.hpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/includes
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 01:57:40 2017 Vianney
// Last update Sun Jan 22 02:30:18 2017 Vianney
//

#ifndef         ROCKSPEAKER_HPP_
# define        ROCKSPEAKER_HPP_

# include       <vector>
# include       "BaseSpeaker.hpp"

class Case;

class RockSpeaker : public BaseSpeaker
{
public:

  RockSpeaker(std::vector<sf::Sprite>  & sprite_sheet,
	      std::vector<unsigned int> const &framesPerSprite);
  ~RockSpeaker();
};

#endif          /* !ROCKSPEAKER_HPP_ */
