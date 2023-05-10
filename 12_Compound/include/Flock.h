#pragma once

#include "Quackable.h"
#include <memory>
#include <vector>
class Flock : public Quackable {
private:
  std::vector<Quackable *> quackers;

public:
  ~Flock() = default;
  void add(Quackable *q) { quackers.push_back(q); }
  void quack() override {
    for (int i = 0; i < quackers.size(); ++i) {
      quackers[i]->quack();
    }
  }
};
