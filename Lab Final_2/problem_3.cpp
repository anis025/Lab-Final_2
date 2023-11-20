#include<bits/stdc++.h>
using  namespace std;
#define endl '\n' 



class Country {
public:
    virtual void displayInfo() const = 0; // Pure virtual function makes Country abstract
    virtual ~Country() {} // Virtual destructor for proper cleanup
 
};

class Germany : public Country {
public:
    void displayInfo() const override {
        std::cout << "Germany: A country in Europe.\n";
    }

};

class Argentina : public Country {
public:
    void displayInfo() const override {
        std::cout << "Argentina: A country in South America.\n";
    }

   
};

class Brasil : public Country {
public:
    void displayInfo() const override {
        std::cout << "Brasil: A country in South America.\n";
    }

     
};

int main() {
    // Using an array of pointers to the base class to demonstrate polymorphism
    Country* countries[] = { new Germany(), new Argentina(), new Brasil() };

    // Display information for each country using the array of pointers
    for (const auto& country : countries) {
        country->displayInfo();
    }

    // Cleanup
    for (const auto& country : countries) {
        delete country;
    }

    return 0;
}
