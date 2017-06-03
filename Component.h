#ifndef COMPONENT_H
#define COMPONENT_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Component
{
 protected:
  Texture texture;
  Sprite sprite;
  Component();
 public:
  Component(const Component& other) = delete;
  Component& operator=(const Component& other) = delete;
  void drawTo(RenderWindow& window);
};

#endif
