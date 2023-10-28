#ifndef pet_hpp
#define pet_hpp

#include <string>
#include "dog.cpp"
#include "cat.cpp"

using namespace std;

class pet {
public:
    pet();
    pet(string name, int weight, float price);
    void SetName(string name) {
        pet_name = name;
    }
    string GetName() {
        return pet_name;
    }
    void SetWeight(int weight) {
        pet_weight = weight;
    }
    string GetWeight() {
        return pet_name;
    }
    void SetPrice(float price) {
        pet_price = price;
    }
    float GetPrice() {
        return pet_price;
    };
private:
    string pet_name;
    int pet_weight;
    float pet_price;
};

#endif //pet_hpp
