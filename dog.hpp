#ifndef dog_hpp
#define dog_hpp

#include <string>
#include <iostream>
#include "pet.hpp"

using namespace std;

class dog : public pet {
public:
    dog();
    dog(string name, int weight, float price);
    void SetName(string name) {
        dog_name = name;
    }
    string GetName() {
        return dog_name;
    }
    void SetWeight(int weight) {
        dog_weight = weight;
    }
    int GetWeight() {
        return dog_weight;
    }
    void SetPrice(float price) {
        dog_price = price;
    }
    float GetPrice() {
        return dog_price;
    }
    static float licensing_rate;
private:
    string dog_name;
    int dog_weight;
    float dog_price;
};

float dog::licensing_rate = 2.0; //sets the rate for dogs at $2 a pound

#endif //dog_hpp
