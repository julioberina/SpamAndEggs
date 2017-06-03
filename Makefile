CC=g++
LIBS= -lsfml-window -lsfml-system -lsfml-graphics
FILE=main.cpp
EXE=SpamAndEggs

default:
	$(CC) $(FILE) -o $(EXE) $(LIBS)
