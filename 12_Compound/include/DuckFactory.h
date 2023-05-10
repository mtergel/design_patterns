#pragma once

#include "AbstractDuckFactory.h"
#include "DuckCall.h"
#include "MallardDuck.h"
#include "Quackable.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"
#include <memory>

class DuckFactory : public AbstractDuckFactory {
public:
  std::unique_ptr<Quackable> createMallardDuck() override {
    return std::make_unique<MallardDuck>();
  }
  std::unique_ptr<Quackable> createRedheadDuck() override {
    return std::make_unique<RedheadDuck>();
  }
  std::unique_ptr<Quackable> createDuckCall() override {
    return std::make_unique<DuckCall>();
  }
  std::unique_ptr<Quackable> createRubberDuck() override {
    return std::make_unique<RubberDuck>();
  }
};
