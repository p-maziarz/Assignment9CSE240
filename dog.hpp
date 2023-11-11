#ifndef dog_hpp
#define dog_hpp

#include <string>
#include "pet.hpp"

using namespace std;

class dog : public pet {
public:
    dog(string name, int weight, float price)
            : pet(name, weight, price)
    {}
    virtual float CalculateFee()
    {
        return licensing_rate * GetWeight();
    }
    static float licensing_rate;
};

#endif
