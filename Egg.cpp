#include "Egg.h"

Egg::Egg()
{
  texture.loadFromFile("assets/images/egg.png");
  sprite.setTexture(texture);
}
