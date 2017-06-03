#ifndef EGG_H
#define EGG_H
#include <SFML/Graphics.hpp>
using namespace sf;
#include "Component.h"

class Egg : public Component
{
 private:
 public:
  Egg();
  Egg(const Egg& other) = delete;
  Egg& operator=(const Egg& other) = delete;
};

#endif
