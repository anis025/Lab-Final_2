
#include<bits/stdc++.h>
using namespace std;

class EricTenHag {
public:
    // Virtual function for abstraction
    virtual void showDegea() const = 0;

    // Virtual destructor for proper cleanup
    virtual ~EricTenHag() {}
};

class Varane : public EricTenHag {
public:
    // Implementing the abstract function
    void showDegea() const override {
        cout << "Varane: saves goal\n";
    }
};

class Maguire : public EricTenHag {
public:
    // Implementing the abstract function
    void showDegea() const override {
       cout << "Maguire: saves nogoals\n";
    }
};

int main() {
    // Using the base class pointer for abstraction
    EricTenHag* player1 = new Varane();
    EricTenHag* player2 = new Maguire();

    // Using the abstraction to call the specific implementation
    player1->showDegea();
    player2->showDegea();

    // Cleanup
    delete player1;
    delete player2;

    return 0;
}
