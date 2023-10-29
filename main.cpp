#include <iostream>
#include <string>
#include <vector>
#include "pet.hpp"
#include "dog.hpp"
#include "cat.hpp"

using namespace std;

int main() {
    vector<pet*> pvec; //creates a list of pointers to pets

    //creating 3 pets to test program, two dogs and one cat
    pet* bob = new dog("Bob", 65, 0.0f);
    pvec.push_back(bob); //adds bob to the vector
    pet* stan = new dog("Stan", 37, 0.0f);
    pvec.push_back(stan);
    pet* tom = new cat("Tom", 12, 0.0f);
    pvec.push_back(tom);

    float total_fee = 0.0;
    for (int i = 0; i < pvec.size(); i++)
    {
        cout << pvec[i]->GetName() << ' ' << pvec[i]->CalculateFee() << endl;
        total_fee = total_fee + pvec[i]->CalculateFee();
    }
    cout << "total licensing fee = " << total_fee << endl;
}
