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
    void SetName(string name) {dog_name = name;}
    string GetName() {return dog_name;}
    void SetPrice(float price) {dog_price = price;}
    float GetPrice() {return dog_price;}
private:
    string dog_name;
    int weight;
    float dog_price = (weight * 2);

};


#endif //ASSIGNMENT9_DOG_HPP
