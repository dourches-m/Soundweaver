//
// BaseSpeakerJazz.hpp for cpp_ggj in /home/vianney/sf/a/cpp_ggj/includes
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sun Jan 22 02:15:44 2017 Vianney
// Last update Sun Jan 22 02:33:45 2017 Vianney
//

#ifndef         JAZZSPEAKER_HPP_
# define        JAZZSPEAKER_HPP_

# include       <vector>
# include       "BaseSpeaker.hpp"

class JazzSpeaker : public BaseSpeaker
{
public:

  JazzSpeaker(std::vector<sf::Sprite>  & sprite_sheet,
		     std::vector<unsigned int> const &framesPerSprite);
  ~JazzSpeaker();
};

#endif          /* !JAZZSPEAKER_HPP_ */
