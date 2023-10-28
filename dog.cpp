#include "dog.hpp"

dog::dog() {
    dog_name = " ";
    dog_weight = 0;
    dog_price = 0.0;
}

dog::dog(string name, int weight, float price) {
    dog_name = name;
    dog_weight = weight;
    dog_price = price;
}
