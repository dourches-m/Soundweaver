//
// Game_loop.cpp for gameloop in /home/dourches/Epitech/Seconde/Piscine/cpp_ggj/Game_loop
// 
// Made by dourches
// Login   <martin.dourches@epitech.eu>
// 
// Started on  Sat Jan 21 12:15:52 2017 dourches
// Last update Sun Jan 22 01:31:22 2017 dourches
//

# include	<cstdlib>
# include	<iostream>
# include	<SFML/Graphics.hpp>
# include	<SFML/Window.hpp>
# include	"GameEngine.hpp"
# include	"AObject.hpp"
# include	"BaseDancer.hpp"
# include	"BaseSpeaker.hpp"
# include	"Case.hpp"
# include	"IObject.hpp"


void	CheckJoy(std::vector<BaseDancer> &Dancer)
{
  for (std::vector<BaseDancer>::iterator it = Dancer.begin(); it != Dancer.end(); ++it)
    if (it->_joy < 50)
      return ; //Changer le sprite d'enjaillement
}

int main()
{
  GameGui game_gui("resources/upheavtt.ttf", 600);
  Resources resources;
  GameEngine engine(game_gui, resources);

  engine.load_resources();
  engine.charge_cases();
  while (engine.game_is_on())
    {
      
      //      checkCursor(SpeakerCase, money);
      //DancerTime(Dancer);
      if (engine.game_has_started())
	{
	  engine.new_dancer();
	  engine.move_dancers();
	  engine.fill_joy();
	  engine.kill_dancers();
	  engine.draw_gui();
	  // SpawnDancer(Dancer, Time);
	  // DancerMove(Dancer);
	  // SpeakerJoy(Dancer, SpeakerCase);
	}
    }
  return (0);
}
