#ifndef __ITERATOR_HPP__
#define __ITERATOR_HPP__

template <typename T>
class Iterator
{
public:
    virtual ~Iterator() = default;
    virtual T *next() = 0;
    virtual bool hasNext() const = 0;
};

#endif // __ITERATOR_HPP__
