#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"

using namespace std;

//Calculate license fees
//Rate can be set to $2/lb for a dog, $1.50/lb for a cat, output the name of the pet and the fee
int main() {
    vector<int> pvec;
    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << endl;
        total_fee = total_fee + pvec[i]->CalculateFee();
    }
    cout << "total licensing fee = " << total_fee << endl;
    return 0;
    //Create three pets in main
}
