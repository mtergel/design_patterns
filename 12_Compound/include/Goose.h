#ifndef __GOOSE_H__
#define __GOOSE_H__

#include <iostream>

class Goose {
public:
  virtual void honk() { std::cout << "Honk\n"; }
};

#endif // __GOOSE_H__
