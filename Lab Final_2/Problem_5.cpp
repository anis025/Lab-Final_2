#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 

class OpOverload {
    private: 
        int var1, var2; 
    
    public:
        //default constractor...
        OpOverload() {
            var1 = 0,  var2 = 0;
        }

        OpOverload(int var1, int var2) {
            this->var1 = var1;
            this->var2  = var2;
        }

        // overload post_increment.. 
        OpOverload operator++(int) {
            int lastThreeDigits = 025;
            OpOverload temp = *this; 

            var1 += lastThreeDigits; 
            var2 += lastThreeDigits;

            return temp;
 
        }

        // pre_increment...
        OpOverload& operator++() {
            int lastThreeDigits = 25; 
            var1 += lastThreeDigits; 
            var2 += lastThreeDigits; 
            return *this;
        }

        // overload post_decrement...
        OpOverload operator--(int) {
        int lastThreeDigits = 25; 
        OpOverload temp  = *this;
        var1 -= lastThreeDigits; 
        var2 -= lastThreeDigits; 
        return temp;
    }

    OpOverload& operator--() {
        int lastThreeDigits = 025; 
       
        var1 -= lastThreeDigits; 
        var2 -= lastThreeDigits; 
        return *this;
    }

    void display() {
        cout << "var1: " << var1 << ", var2: " << var2 << "\n";
    }
};

int main() {
    OpOverload obj(10, 20);

    // Post-increment
    OpOverload postIncremented = obj++;
    std::cout << "After post-increment:\n";
    obj.display(); // Display original values
    postIncremented.display(); // Display incremented values

    // Pre-increment
    OpOverload preIncremented = ++obj;
    std::cout << "\nAfter pre-increment:\n";
    obj.display(); // Display incremented values
    preIncremented.display(); // Display incremented values

    // Post-decrement
    OpOverload postDecremented = obj--;
    std::cout << "\nAfter post-decrement:\n";
    obj.display(); // Display decremented values
    postDecremented.display(); // Display original values

    // Pre-decrement
    OpOverload preDecremented = --obj;
    std::cout << "\nAfter pre-decrement:\n";
    obj.display(); // Display decremented values
    preDecremented.display(); // Display decremented values





    return 0;
}