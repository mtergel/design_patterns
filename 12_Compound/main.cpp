
#include "AbstractDuckFactory.h"
#include "CountingDuckFactory.h"
#include "Flock.h"
#include "Goose.h"
#include "GooseAdapter.h"
#include "QuackCounter.h"
#include "Quackable.h"
#include <iostream>
#include <memory>

void simulate(Quackable *duck) { duck->quack(); }
void simulate(AbstractDuckFactory *duckFactory) {

  std::unique_ptr<Quackable> mallardDuck = duckFactory->createMallardDuck();
  std::unique_ptr<Quackable> redheadDuck = duckFactory->createRedheadDuck();
  std::unique_ptr<Quackable> duckCall = duckFactory->createDuckCall();
  std::unique_ptr<Quackable> rubberDuck = duckFactory->createRubberDuck();

  auto goose = new Goose();
  GooseAdapter gooseDuck(goose);

  std::cout << "\nDuck Simulator: With Composite - Flocks\n";
  Flock flockOfDucks;
  flockOfDucks.add(mallardDuck.get());
  flockOfDucks.add(redheadDuck.get());
  flockOfDucks.add(duckCall.get());
  flockOfDucks.add(rubberDuck.get());
  flockOfDucks.add(&gooseDuck);

  simulate(&flockOfDucks);

  std::cout << "The ducks quacked: " << QuackCounter::numberOfQuacks
            << " times\n";

  delete goose;
}

int main() {
  CountingDuckFactory duckFactory;
  simulate(&duckFactory);
  return 0;
}
