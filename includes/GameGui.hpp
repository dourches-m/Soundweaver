//
// gui.h for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Sat Jan 21 04:40:46 2017 Hugo Willaume
// Last update Sat Jan 21 12:51:49 2017 Hugo Willaume
//

#ifndef		GAMEGUI_HPP_
# define	GAMEGUI_HPP_

# include <sstream>
# include <iomanip>
# include <string>
# include <SFML/Graphics.hpp>

class GameGui{
public:
  GameGui(std::string const &font_file, int game_duration);
  ~GameGui();

  void start_clock();
  unsigned int now();
  bool game_end();
  void print_GUI(sf::RenderWindow &win, int score, int money);

  sf::Font font;
  sf::Time timer;
  sf::Clock *clock;
  sf::Text text;
};

#endif		/* GUI_HPP_ */
