#ifndef cat_hpp
#define cat_hpp

#include <string>
#include "pet.hpp"

using namespace std;

class cat : public pet {
public:
    cat();
    cat(string name, int weight, float price);
    void SetName(string name) {
        cat_name = name;
    }
    string GetName() {
        return cat_name;
    }
    void SetWeight(int weight) {
        cat_weight = weight;
    }
    int GetWeight() {
        return cat_weight;
    }
    void SetPrice(float price) {
        cat_price = price;
    }
    float GetPrice() {
        return cat_price;
    }
    static float licensing_rate;
private:
    string cat_name;
    int cat_weight;
    float cat_price = cat_weight;
};

float cat::licensing_rate = 1.50;

#endif //cat_hpp
