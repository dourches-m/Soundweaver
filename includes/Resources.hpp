/*
** resources.hpp for cpp_ggj in /home/vianney/ookk/cpp_ggj/includes
** 
** Made by Vianney
** Login   <vianney.doleans@epitech.eu>
** 
** Started on  Sat Jan 21 16:44:25 2017 Vianney
// Last update Sat Jan 21 13:22:40 2017 Hugo Willaume
*/


#ifndef		RESOURCES_HPP_
# define	RESOURCES_HPP_

#include <vector>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
#include "GraphObj.hpp"
#include "BaseDancer.hpp"
#include "Case.hpp"
#include "BaseSpeaker.hpp"


struct ResourceBaseSpeaker
{
  sf::Texture texture;
  BaseSpeaker::Music music;
  std::vector<sf::Sprite> spriteSheet;
  std::vector<unsigned int> framesPerSprite;
};

struct ResourceCase
{
  sf::Texture texture;

  bool isSelect;
  std::vector<sf::Sprite> spriteSheet;
  std::vector<unsigned int> framesPerSprite;
};

struct ResourceBaseDancer
{
  BaseDancer::Music music;
  BaseDancer::Dir dir;
  BaseDancer::Action action;
  sf::Texture texture;

  std::vector<sf::Sprite> spriteSheet;
  std::vector<unsigned int> framesPerSprite;
};


class Resources
{
public:

  Resources();
  ~Resources();

  void loadNewDancer(const std::string & file_name, sf::Vector2u spritesize,
		     std::vector<unsigned int> _framesPerSprite, BaseDancer::Music music,
		     BaseDancer::Dir dir, BaseDancer::Action action);

  void loadNewSpeaker(const std::string & file_name, sf::Vector2u spritesize,
		      std::vector<unsigned int> _framesPerSprite, BaseSpeaker::Music music);

  void loadNewCase(const std::string &  file_name, sf::Vector2u spritesize,
		   std::vector<unsigned int> _framesPerSprite, bool isSelect);

  ResourceBaseSpeaker const &getSpeaker(BaseSpeaker::Music music);
  ResourceCase const &getCase(bool isSelect);
  ResourceBaseDancer const &getDancer(BaseDancer::Music music, BaseDancer::Dir dir,
				      BaseDancer::Action action);
  

public:
  Resources(const Resources & );
  Resources& operator=(const Resources &);
  std::vector<ResourceBaseSpeaker> _speakers;
  std::vector<ResourceCase> _cases;
  std::vector<ResourceBaseDancer> _dancers;


};

#endif		/* RESOURCES_HPP */
