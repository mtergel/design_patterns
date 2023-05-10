#ifndef __MALLARDDUCK_H__
#define __MALLARDDUCK_H__

#include "Quackable.h"
#include <iostream>

class MallardDuck : public Quackable {
public:
  MallardDuck() = default;
  void quack() override { std::cout << "Quack\n"; }
};

#endif // __MALLARDDUCK_H__
