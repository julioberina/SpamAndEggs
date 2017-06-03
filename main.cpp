#include <SFML/Graphics.hpp>
using namespace sf;
#include "Egg.h"
int main()
{
  RenderWindow window(VideoMode(800, 600), "Spam and Eggs");
  Egg egg;

  while (window.isOpen())
    {
      Event event;

      while (window.pollEvent(event))
	{
	  if (event.type == Event::Closed)
	    window.close();
	}

      window.clear();
      egg.drawTo(window);
      window.display();
    }
  
  return 0;
}
