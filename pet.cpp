#include "pet.hpp"
//includes the data from the pet file

pet::pet() {
    pet_name = " ";
    pet_weight = 0;
    pet_price = 0.0;
}

pet::pet(string name, int weight, float price) {
    pet_name = name;
    pet_weight = weight;
    pet_price = price;
}
