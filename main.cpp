//includes the needed libraries and each of the header files
#include <iostream>
#include <string>
#include <vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"

using namespace std;
//Rate can be set to $2/lb for a dog, $1.50/lb for a cat, output the name of the pet and the fee

int main() {
    vector<pet*> pvec; //creates a list of pointers to pets

    //creating 3 pets to test program, two dogs and one cat
    dog* bob = new dog("Bob", 65, 0.0); //uses constructors from dog class, setting initial price to 0
    pvec.push_back(bob); //adds bob to the vector
    pet* stan = new dog("Stan", 37, 0.0);
    pvec.push_back(stan);
    pet* tom = new cat("Tom", 12, 0.0);
    pvec.push_back(tom);

    //declare the rates for dogs and cats
    dog::licensing_rate = 2.0;
    cat::licensing_rate = 1.50;

    //loop to calculate total fee
    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->GetName() << ' ' << pvec[i]->GetPrice() << endl;
        total_fee = total_fee + pvec[i]->GetPrice();
    }
    cout << "total licensing fee = " << total_fee << endl;

    //deletes memory when program is done so program wont overload memory
    for (int i = 0; i < pvec.size(); i++) {
        delete pvec[i];
    }
    return 0;
}
