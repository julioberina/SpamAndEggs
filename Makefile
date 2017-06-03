CC=g++
SUPFILES=Component.h Component.cpp Egg.h Egg.cpp
LIBS= -lsfml-window -lsfml-system -lsfml-graphics
FILE=main.cpp
EXE=SpamAndEggs
STD=-std=c++11

default:
	$(CC) $(FILE) $(SUPFILES) -o $(EXE) $(STD) $(LIBS)
