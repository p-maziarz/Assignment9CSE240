#ifndef pet_hpp
#define pet_hpp

#include <string>

using namespace std;

class pet {
public:
    pet(string name, int weight, float price)
            : pet_name(name)
            , pet_weight(weight)
            , pet_price(price)
    {
    }
    void SetName(string name) {
        pet_name = name;
    }
    string GetName() {
        return pet_name;
    }
    void SetWeight(int weight) {
        pet_weight = weight;
    }
    int GetWeight() {
        return pet_weight;
    }
    void SetPrice(float price) {
        pet_price = price;
    }
    float GetPrice() {
        return pet_price;
    };

    virtual float CalculateFee() = 0;
private:
    string pet_name;
    int pet_weight;
    float pet_price;
};

#endif //pet_hpp
