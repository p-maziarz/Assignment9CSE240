#ifndef pet_hpp
#define pet_hpp

#include <string>
#include "dog.cpp"
#include "cat.cpp"

using namespace std;

class pet {
public:
    pet();
    pet(string name, int weight);
    void SetName(string name) {petName = name;}
    string GetName() {return petName;}
    void SetPrice(int weight) {price = weight;}
    int GetPrice();
private:
    string petName;
    float price;
};



#endif //ASSIGNMENT9_PET_HPP

