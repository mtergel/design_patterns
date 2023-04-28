#ifndef __CHOCOLATEBOILER_HPP__
#define __CHOCOLATEBOILER_HPP__

#include <memory>
#include <mutex>

class ChocolateBoiler
{
private:
    bool empty;
    bool boiled;

    static ChocolateBoiler *uniqueInstance;
    static std::mutex mutex_;

    ChocolateBoiler()
    {
        empty = true;
        boiled = false;
    }

    ~ChocolateBoiler()
    {
        delete uniqueInstance;
    }

public:
    // should not be cloneable
    ChocolateBoiler(ChocolateBoiler &other) = delete;

    // should not be assignable
    void operator=(const ChocolateBoiler &) = delete;

    static ChocolateBoiler *getInstance();

    void fill()
    {
        if (isEmpty())
        {
            empty = false;
            boiled = false;
        }
    }

    void drain()
    {
        if (!isEmpty() && isBoiled())
        {
            empty = true;
        }
    }

    void boil()
    {
        if (!isEmpty() && !isBoiled())
        {
            boiled = true;
        }
    }

    bool isEmpty()
    {
        return empty;
    }

    bool isBoiled()
    {
        return boiled;
    }
};

ChocolateBoiler *ChocolateBoiler::uniqueInstance{nullptr};
std::mutex ChocolateBoiler::mutex_;

ChocolateBoiler *ChocolateBoiler::getInstance()
{
    if (uniqueInstance == nullptr)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        uniqueInstance = new ChocolateBoiler();
    }

    return uniqueInstance;
}

#endif // __CHOCOLATEBOILER_HPP__
