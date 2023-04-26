#ifndef __SUBJECT_HPP__
#define __SUBJECT_HPP__

#include "Observer.hpp"

class Subject
{
public:
    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifiyObservers() = 0;
};

#endif // __SUBJECT_HPP__
