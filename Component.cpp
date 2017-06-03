#include "Component.h"

Component::Component() : texture(), sprite() {}

void Component::drawTo(RenderWindow& window)
{
  window.draw(sprite);
}
