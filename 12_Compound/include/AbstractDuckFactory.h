#pragma once

#include "Quackable.h"
#include <memory>

class AbstractDuckFactory {
public:
  virtual ~AbstractDuckFactory() = default;

  virtual std::unique_ptr<Quackable> createMallardDuck() = 0;
  virtual std::unique_ptr<Quackable> createRedheadDuck() = 0;
  virtual std::unique_ptr<Quackable> createDuckCall() = 0;
  virtual std::unique_ptr<Quackable> createRubberDuck() = 0;
};
