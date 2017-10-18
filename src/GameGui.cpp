//
// GameGui.cpp for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Sat Jan 21 05:29:36 2017 Hugo Willaume
// Last update Sat Jan 21 12:56:13 2017 Hugo Willaume
//

#include "GameGui.hpp"

GameGui::GameGui(std::string const &font_file, int game_duration)
{
  font.loadFromFile(font_file);
  timer = sf::seconds(game_duration);
  clock = NULL;
  text.setFont(font);
  text.setColor(sf::Color::White);
}

GameGui::~GameGui()
{
  delete clock;
}

unsigned int GameGui::now()
{
  return static_cast<int>(clock->getElapsedTime().asSeconds());
}

bool GameGui::game_end()
{
  return clock != 0 && clock->getElapsedTime().asSeconds() > timer.asSeconds();
}

void GameGui::start_clock()
{
  clock = new sf::Clock;
}

void GameGui::print_GUI(sf::RenderWindow &win, int score, int money)
{
  int seconds;
  std::ostringstream str;

  text.setCharacterSize(50);
  text.setPosition(40,00);
  str << money << "$";
  text.setString(str.str());
  win.draw(text);
  str.str("");
  text.setPosition(680,00);
  str << "Score : " << score;
  text.setString(str.str());
  win.draw(text);
  str.str("");
  text.setPosition(400, 00);
  seconds = 600 - clock->getElapsedTime().asSeconds();
  str << std::setfill('0') << std::setw(2);
  str << seconds / 60  << " : " << std::setfill('0') << std::setw(2) << seconds % 60;
  text.setString(str.str());
  win.draw(text);
}
