//
// resources.hpp<src> for  in /home/vianney/ookk/cpp_ggj/includes
// 
// Made by Vianney
// Login   <vianney.doleans@epitech.eu>
// 
// Started on  Sat Jan 21 17:21:54 2017 Vianney
// Last update Sat Jan 21 13:22:58 2017 Hugo Willaume
//

#include <stdexcept>
#include "Resources.hpp"

Resources::Resources()
{
  _speakers = std::vector<ResourceBaseSpeaker>(0);
  _cases = std::vector<ResourceCase>(0);
  _dancers = std::vector<ResourceBaseDancer>(0);
}

Resources::~Resources()
{ }

void Resources::loadNewDancer(std::string const & file_name, sf::Vector2u spritesize,
		   std::vector<unsigned int> _framesPerSprite, BaseDancer::Music music,
		   BaseDancer::Dir dir, BaseDancer::Action action)
{
  ResourceBaseDancer new_dancer;

  new_dancer.texture.loadFromFile(file_name);
  new_dancer.spriteSheet = std::vector<sf::Sprite>();
  new_dancer.music = music;
  new_dancer.dir = dir;
  new_dancer.action = action;
  new_dancer.framesPerSprite = _framesPerSprite;
  for (unsigned int y = 0; y < new_dancer.texture.getSize().y; y+= spritesize.y)
    for (unsigned int x = 0; x < new_dancer.texture.getSize().x; x+= spritesize.x)
      new_dancer.spriteSheet.insert(new_dancer.spriteSheet.begin(),
				    sf::Sprite(new_dancer.texture, sf::IntRect(x, y, spritesize.x, spritesize.y)));
  _dancers.push_back(new_dancer);
}

void Resources::loadNewSpeaker(std::string const & file_name, sf::Vector2u spritesize,
		    std::vector<unsigned int> _framesPerSprite, BaseSpeaker::Music music)
{
  ResourceBaseSpeaker new_speaker;

  new_speaker.texture.loadFromFile(file_name);
  new_speaker.spriteSheet = std::vector<sf::Sprite>();
  new_speaker.music = music;
  new_speaker.framesPerSprite = _framesPerSprite;
  for (unsigned int y = 0; y < new_speaker.texture.getSize().y; y+= spritesize.y)
    for (unsigned int x = 0; x < new_speaker.texture.getSize().x; x+= spritesize.x)
      new_speaker.spriteSheet.insert(new_speaker.spriteSheet.begin(),
				     sf::Sprite(new_speaker.texture, sf::IntRect(x, y, spritesize.x, spritesize.y)));
  _speakers.push_back(new_speaker);
}


void Resources::loadNewCase(std::string const & file_name, sf::Vector2u spritesize,
		 std::vector<unsigned int> _framesPerSprite, bool isSelect)
{
  ResourceCase new_case;

  new_case.texture.loadFromFile(file_name);
  new_case.spriteSheet = std::vector<sf::Sprite>();
  new_case.isSelect = isSelect;
  new_case.framesPerSprite = _framesPerSprite;
  for (unsigned int y = 0; y < new_case.texture.getSize().y; y+= spritesize.y)
    for (unsigned int x = 0; x < new_case.texture.getSize().x; x+= spritesize.x)
      new_case.spriteSheet.insert(new_case.spriteSheet.begin(),
				  sf::Sprite(new_case.texture, sf::IntRect(x, y, spritesize.x, spritesize.y)));
  _cases.push_back(new_case);
}

ResourceBaseSpeaker const &Resources::getSpeaker(BaseSpeaker::Music music)
{
  for (std::vector<ResourceBaseSpeaker>::iterator it = _speakers.begin();
       it != _speakers.end(); ++it)
    if (it->music == music)
      return *it;
  throw std::runtime_error("Could not load the right spritesheet for speaker.");
}

ResourceCase const &Resources::getCase(bool isSelect)
{
  for (std::vector<ResourceCase>::iterator it = _cases.begin();
       it != _cases.end(); ++it)
    if (it->isSelect == isSelect)
      return *it;
  throw std::runtime_error("Could not load the right spritesheet for case.");
}

ResourceBaseDancer const &Resources::getDancer(BaseDancer::Music music,
					       BaseDancer::Dir dir,
					       BaseDancer::Action action)
{
  for (std::vector<ResourceBaseDancer>::iterator it = _dancers.begin();
       it != _dancers.end(); ++it)
    if (it->music == music && it->dir == dir && it->action == action)
      return *it;
  throw std::runtime_error("Could not load the right spritesheet for dancer.");
}
