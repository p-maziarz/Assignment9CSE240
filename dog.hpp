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
private:
    string dog_name;
    int dog_weight;
    float dog_price = dog_weight*2;

};

#endif //dog_hpp
