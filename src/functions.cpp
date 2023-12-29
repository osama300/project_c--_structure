#include <iostream>
#include "../helper/pow_lib.cpp"
using namespace std;
class Functions {
public:
MathHelper mathHelper;

MathHelper math() {
   return mathHelper;
}

void generateDice() {
   srand(time(0));
    int randomNumber = (rand() % 6) + 1;
    cout << " number of dice: " << randomNumber <<endl;


}
void generateNymber() {
   srand(time(0));
   for (int i = 0; i < 10; ++i) {
         int randomNumber = rand() % 31 + 20;
   cout << "prints number: " << randomNumber <<endl;
   }
}

void calculatePower() {
   double base, exponent;
   cout << "Enter base: ";
   cin >> base;
   cout << "Enter exponent: ";
   cin >> exponent;
   double result = math().customPow(base, exponent);
   cout << "Result: " << result <<endl;
}

};

