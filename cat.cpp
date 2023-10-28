#include "cat.hpp"
//includes data for cat

cat::cat() {
    cat_name = " ";
    cat_weight = 0;
    cat_price = 0.0;
}

cat::cat(string name, int weight, float price) {
    cat_name = name;
    cat_weight = weight;
    cat_price = price;
}

