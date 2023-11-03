#ifndef cat_hpp
#define cat_hpp

#include <string>
#include "pet.hpp"

using namespace std;

class cat : public pet {
public:
    cat(string name, int weight, float price)
            : pet(name, weight, price)
    {}
    virtual float CalculateFee()
    {
        return licensing_rate * GetWeight();
    }
    static float licensing_rate;
};

#endif
