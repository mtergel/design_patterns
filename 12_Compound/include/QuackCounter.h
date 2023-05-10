#ifndef __QUACKCOUNTER_H__
#define __QUACKCOUNTER_H__

#include "Quackable.h"
#include <memory>

class QuackCounter : public Quackable {
private:
  std::unique_ptr<Quackable> duck = nullptr;

public:
  QuackCounter(std::unique_ptr<Quackable> d) : duck(std::move(d)) {}
  static int numberOfQuacks;

  void quack() override {
    duck->quack();
    ++numberOfQuacks;
  }
};

#endif // __QUACKCOUNTER_H__
