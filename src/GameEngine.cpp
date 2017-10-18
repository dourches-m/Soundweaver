//
// GameEngine.cpp for  in /home/hurlu-deb/cpp_ggj
// 
// Made by Hugo Willaume
// Login   <willau_h@epitech.net>
// 
// Started on  Sat Jan 21 10:04:34 2017 Hugo Willaume
// Last update Sun Jan 22 03:07:04 2017 Gabriel Forteville
//

#include <cstdlib>
#include <ctime>
#include "GameEngine.hpp"


GameEngine::GameEngine(GameGui &GUI, Resources &resources) :
  _win(sf::VideoMode(1000, 1000), "SoundWeaver"),
  _GUI(GUI), _resources(resources),  _score(0), _money(2000)
{
  _last_spawn = 0;
}

GameEngine::~GameEngine()
{
}

void GameEngine::load_resources()
{
  std::vector<unsigned int> v(0);

  v.push_back(9999);
  _resources.loadNewCase("resources/case/case.jpg", sf::Vector2u(142, 229),
			 v, false);
  _resources.loadNewCase("resources/case/case_selected.jpg", sf::Vector2u(142, 229),
			 v, true);
  _resources.loadNewCase("resources/map final/map_final.jpg", sf::Vector2u(1080, 1080),
			 v, true);
  _resources.loadNewCase("resources/perso/DJ/DJ.jpg", sf::Vector2u(230, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/icenBerg/IcenBerg_joy.jpg", sf::Vector2u(930, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/icenBerg/IcenBerg_left.jpg", sf::Vector2u(930, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/icenBerg/IcenBerg_right.jpg", sf::Vector2u(930, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/icenBerg/IcenBerg_stand.jpg", sf::Vector2u(410, 200),
			 v, true);
  _resources.loadNewCase("resources/speaker/speaker_8bit.jpg", sf::Vector2u(142, 229),
			 v, true);
  _resources.loadNewCase("resources/perso/Girl/Girl_Joy.jpg", sf::Vector2u(930, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/Girl/Girl_left.jpg", sf::Vector2u(930, 200),
			 v, true);
    _resources.loadNewCase("resources/perso/Girl/Girl_right.jpg", sf::Vector2u(930, 200),
			 v, true);
  _resources.loadNewCase("resources/perso/Girl/Girl_stand.jpg", sf::Vector2u(410, 200),
			 v, true);
    _resources.loadNewCase("resources/dance floor/dance_floor.jpg", sf::Vector2u(330, 330),
			 v, true);
  // Handmare bruteforce filling function
}

void GameEngine::charge_cases()
{
  ResourceCase case_y = _resources.getCase(true);
  ResourceCase case_n = _resources.getCase(false);
  Case c(case_y.spriteSheet, case_y.framesPerSprite, sf::Vector2u(41, 41));

  c._isSelect = true;
  _cases.push_back(c);
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(26, 26)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(92, 92)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(86, 63)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(63, 89)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(21, 56)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(30, 89)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(3, 1)));
  _cases.push_back(Case(case_n.spriteSheet, case_n.framesPerSprite,
		   sf::Vector2u(45, 45)));
}

bool GameEngine::game_is_on()
{
  return _win.isOpen() && _GUI.game_end();
}

void GameEngine::game_start()
{
  srand(time(NULL));
  _GUI.start_clock();
}

bool GameEngine::game_has_started()
{
  return _GUI.clock != NULL;
}

bool GameEngine::spawned_recently(unsigned int seconds)
{
  if (_last_spawn + seconds < _GUI.now())
    {
      _last_spawn = _GUI.now();
      return true;
    }
  return false;
}

void GameEngine::new_dancer()
{
  ResourceBaseDancer new_dancer;

  if (!spawned_recently(5))
    {
      new_dancer = _resources.getDancer(static_cast<AObject::Music>(random() % 4),
					BaseDancer::BAS, BaseDancer::IDLE);
      _dancers.push_back(BaseDancer(new_dancer.spriteSheet, new_dancer.framesPerSprite));
    }
}

static sf::Vector2u random_dest()
{
  sf::Vector2u ret;
  GameEngine::Dest d;

  d = static_cast<GameEngine::Dest>(random() % 4);
  if (d == GameEngine::BAR)
    {
      ret.x = (random() % 30)  + 10;
      ret.y = (random() % 30)  + 10;
    }
  else if (d == GameEngine::DANCEFLOOR)
    {
      ret.x = (random() % 80)  + 40;
      ret.y = (random() % 80)  + 40;
    }
  else if (d == GameEngine::VIP)
    {
      ret.x = (random() % 100)  + 90;
      ret.y = (random() % 100)  + 90;
    }
  else if (d == GameEngine::RANDOM)
    {
      ret.x = random() % 100;
      ret.y = random() % 100;
    }
  return (ret);
}

static void	MoveUp(std::vector<BaseDancer>::iterator &it)
{
  it->_pos.x++;
}

static void	MoveDown(std::vector<BaseDancer>::iterator &it)
{
  it->_pos.x--;
}

static void	MoveLeft(std::vector<BaseDancer>::iterator &it)
{
  it->_pos.y--;
}

static void	MoveRight(std::vector<BaseDancer>::iterator &it)
{
  it->_pos.y++;
}

static void	MoveRand1(std::vector<BaseDancer>::iterator &it)
{
  if (it->_pos.x < it->_dest.x)
    MoveUp(it);
  else if (it->_pos.x > it->_dest.x)
    MoveDown(it);
  else if (it->_pos.y < it->_dest.y)
    MoveRight(it);
  else if (it->_pos.y < it->_dest.y)
    MoveLeft(it);
}

static void	MoveRand2(std::vector<BaseDancer>::iterator &it)
{
  if (it->_pos.y < it->_dest.y)
    MoveRight(it);
  else if (it->_pos.y < it->_dest.y)
    MoveLeft(it);
  else if (it->_pos.x < it->_dest.x)
    MoveUp(it);
  else if (it->_pos.x > it->_dest.x)
    MoveDown(it);
}

static void	MoveRand3(std::vector<BaseDancer>::iterator &it)
{
  if (it->_pos.y < it->_dest.y && it->_pos.x < it->_dest.x)
    {
      MoveUp(it);
      MoveRight(it);
    }
  else if (it->_pos.y > it->_dest.y && it->_pos.x < it->_dest.x)
    {
      MoveUp(it);
      MoveLeft(it);
    }
  else if (it->_pos.y < it->_dest.y && it->_pos.x > it->_dest.x)
    {
      MoveDown(it);
      MoveRight(it);
    }
  else if (it->_pos.y > it->_dest.y && it->_pos.x > it->_dest.x)
    {
      MoveDown(it);
      MoveLeft(it);
    }
}


static void	Move_random(std::vector<BaseDancer>::iterator &it)
{
  unsigned int Rand;

  Rand = random() % 3 + 1;
  if (Rand == 1)
    MoveRand1(it);
  else if (Rand == 2)
    MoveRand2(it);
  else if (Rand == 3)
    MoveRand3(it);
  return ;
}

void GameEngine::move_dancers()
{
  for (std::vector<BaseDancer>::iterator it = _dancers.begin();
       it != _dancers.end(); ++it)
    {
      if (it->can_move())
	it->_dest = random_dest();
      Move_random(it);
    }
}

void GameEngine::kill_dancers()
{
  for (std::vector<BaseDancer>::iterator it = _dancers.begin();
       it != _dancers.end(); ++it)
    if (it->can_die())
      {
	_score += it->_joy;
	it = _dancers.erase(it);
      }
}

void GameEngine::new_speaker(Case &chosen_case)
{
  ResourceBaseSpeaker new_speaker;

  if (_money < 500)
    return ;
  if (chosen_case._currentSpeaker != NULL)
    return ;
  new_speaker = _resources._speakers[0];
  chosen_case._currentSpeaker = new BaseSpeaker(new_speaker.spriteSheet, new_speaker.framesPerSprite);;
  _money -= 500;
}

void	GameEngine::draw_gui()
{
  _GUI.print_GUI(_win, _score, _money);
}

void	GameEngine::fill_joy()
{
  for (std::vector<Case>::iterator itS = _cases.begin(); itS != _cases.end(); ++itS)
    {
      for (std::vector<BaseDancer>::iterator it = _dancers.begin(); it != _dancers.end(); ++it)
     	{
     	  if (itS->_currentSpeaker != NULL)
     	    {
    	      for (int i = itS->_currentSpeaker->_range; i != - itS->_currentSpeaker->_range; --i)
     		{
		  for (int a = itS->_currentSpeaker->_range; a != -itS->_currentSpeaker->_range; --a)
		    {
		      if (it->_pos.x == (itS->_pos.x + i) && (it->_pos.y == (itS->_pos.y + a)))
			{
			  if (it->_type != AObject::UNKNOWN && it->_type == itS->_type)
			    it->_joy += (itS->_currentSpeaker->_dam * 2);
			  else if (itS->_type == AObject::UNKNOWN)
			    it->_joy += itS->_currentSpeaker->_dam;
			  else
			    it->_joy += (itS->_currentSpeaker->_dam / 2);
			}
		    }
		}
	    }
	}
    }
}

void	GameEngine::EventManager()
{
  std::vector<Case>::iterator it = _cases.begin();
  sf::Event event;
  
  if (event.type == sf::Event::KeyPressed)
    {
      while (it != _cases.end() && it->_isSelect != true)
	it++;
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
	  if (it - 1 == _cases.begin())
	    {
	      (_cases.end() - 1)->_isSelect = true;
	      it->_isSelect = false;
	      it = _cases.end() - 1;
	    }
	  else
	    {
	      (it - 1)->_isSelect = true;
	      it->_isSelect = false;
	      it--;
	    }
	}
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
	  if (it + 1 == _cases.end())
	    {
	      _cases.begin()->_isSelect = true;
	      it->_isSelect = false;
	      it = _cases.begin();
	    }
	  else
	    {
	      (it + 1)->_isSelect = true;
	      it->_isSelect = false;
	      it++;
	    }
	}
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	new_speaker(*it);
      if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
	  kill_dancers();
	  _win.close();
	}
    }
}
