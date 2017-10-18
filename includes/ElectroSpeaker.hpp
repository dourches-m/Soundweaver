//
// BaseSpeakerElectro.hpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/includes
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 02:07:18 2017 Vianney
// Last update Sun Jan 22 02:35:43 2017 Vianney
//

#ifndef         ELECTROSPEAKER_HPP_
# define        ELECTROSPEAKER_HPP_

# include       <vector>
# include       "BaseSpeaker.hpp"

class ElectroSpeaker : public BaseSpeaker
{
public:

  ElectroSpeaker(std::vector<sf::Sprite>  & sprite_sheet,
		  std::vector<unsigned int> const &framesPerSprite);
  ~ElectroSpeaker();
};

#endif          /* !ELCTROSPEAK_HPP_ */
