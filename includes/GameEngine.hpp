//
// GameEngine.hpp for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Sat Jan 21 09:40:46 2017 Hugo Willaume
// Last update Sun Jan 22 01:27:37 2017 dourches
//

#ifndef		GAME_ENGINE_HPP_
# define	GAME_ENGINE_HPP

# include	"GameGui.hpp"
# include	"Resources.hpp"
# include	"Case.hpp"
# include	"BaseDancer.hpp"

class GameEngine{
public:
  GameEngine(GameGui &GUI, Resources &_resources);
  ~GameEngine();

  void load_resources();
  void charge_cases();
  bool game_is_on();
  void game_start();
  bool game_has_started();
  void new_dancer();
  void move_dancers();
  void kill_dancers();
  void draw_gui();
  void new_speaker(Case &chosen_case);
  bool spawned_recently(unsigned int seconds);
  void fill_joy();
  void EventManager();
  
  enum Dest
  {
    BAR,
    DANCEFLOOR,
    VIP,
    RANDOM,
    EXIT
  };

private:
  bool game_on;
  bool game_started;
  unsigned int _last_spawn;
  sf::RenderWindow _win;
  GameGui &_GUI;
  Resources &_resources;
  unsigned int _score;
  unsigned int	_money;
  std::vector<Case> _cases;
  std::vector<BaseDancer> _dancers;
};

#endif		/* GAME_ENGINE_HPP */
