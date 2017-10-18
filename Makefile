##
## Makefile for  in /home/hurlu-deb/cpp_ggj
## 
## Made by Hugo Willaume
## Login   <willau_h@epitech.net>
## 
## Started on  Fri Jan 20 22:20:37 2017 Hugo Willaume
## Last update Sun Jan 22 02:01:38 2017 dourches
##

NAME = soundweaver

SRC =	src/GraphObj.cpp \
	src/GameGui.cpp \
	src/Resources.cpp \
	src/GameEngine.cpp \
	src/GameLoop.cpp \
	src/AObject.cpp \
	src/BaseDancer.cpp \
	src/BaseSpeaker.cpp \
	src/Case.cpp \
	src/RockDancer.cpp \

OBJ =	$(SRC:.cpp=.o)

CC = g++

CXXFLAGS = -W -Wall -Wextra -Werror -g -std=c++03  -Iincludes/ -IClass/header/

LIBS =	-lsfml-window -lsfml-system -lsfml-graphics \
	-lsfml-audio -lsfml-network


all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CXXFLAGS) $(OBJ) -o $(NAME) $(LIBS)

clean :
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all


