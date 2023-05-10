#ifndef __GOOSEADAPTER_H__
#define __GOOSEADAPTER_H__

#include "Goose.h"
#include "Quackable.h"

class GooseAdapter : public Quackable {
private:
  Goose *goose;

public:
  GooseAdapter(Goose *g) : goose(g) {}
  void quack() override { goose->honk(); }
};

#endif // __GOOSEADAPTER_H__
