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
    void SetName(string name) {dogName = name;}
private:
    string dogName;
    float price;

};


#endif //ASSIGNMENT9_DOG_HPP
