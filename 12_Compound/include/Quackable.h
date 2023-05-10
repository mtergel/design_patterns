#ifndef __QUACKABLE_H__
#define __QUACKABLE_H__

// Target
class Quackable {
public:
  Quackable() = default;
  virtual ~Quackable() = default;
  virtual void quack() = 0;
};

#endif // __QUACKABLE_H__
