#ifndef __MENUCOMPONENT_HPP__
#define __MENUCOMPONENT_HPP__

#include <string>
#include <stdexcept>

class MenuComponent
{
public:
    using menu_component_t = MenuComponent *;
    virtual ~MenuComponent() = default;
    virtual void add([[maybe_unused]] menu_component_t menuComponent)
    {
        throw std::invalid_argument("add(): Unsupported Operation");
    }
    virtual void remove([[maybe_unused]] menu_component_t menuComponent)
    {
        throw std::invalid_argument("remove(): Unsupported Operation");
    }
    virtual MenuComponent *getChid([[maybe_unused]] int i) const
    {
        throw std::invalid_argument("getChid(): Unsupported Operation");
    }
    virtual std::string getName() const
    {
        throw std::invalid_argument("getName(): Unsupported Operation");
    }
    virtual std::string getDescription() const
    {
        throw std::invalid_argument("getDescription(): Unsupported Operation");
    }
    virtual double getPrice() const
    {
        throw std::invalid_argument("getPrice(): Unsupported Operation");
    }
    virtual bool isVegetarian() const
    {
        throw std::invalid_argument("isVegetarian(): Unsupported Operation");
    }
    virtual void print() const
    {
        throw std::invalid_argument("print(): Unsupported Operation");
    }
};

#endif // __MENUCOMPONENT_HPP__
