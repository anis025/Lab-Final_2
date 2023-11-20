

#include <bits/stdc++.h>
using namespace std;


class ShakibAlHasan {
private:
    int value;

public:
    ShakibAlHasan(int value) {
        this->value = value;
    }

    // Overload addition operator
    ShakibAlHasan operator+(int s)   {
        return ShakibAlHasan(value + s);
    }

    // Overload multiplication operator
    ShakibAlHasan operator*(int s)   {
        return ShakibAlHasan(value * s);
    }

    // Function to display the value
    void displayValue()   {
        cout << "Value: " << value <<  endl;
    }
};

class LitonKumarDas {
    private: 
        int value; 
    
    public:
        LitonKumarDas(int value) {
            this->value = value;
        }

        LitonKumarDas operator+(int m) {
            return LitonKumarDas(value + m);
        }

        LitonKumarDas operator*(int m) {
            return LitonKumarDas (value * m);
        }

        void display() {
            cout<<"Value: " << value << endl;
        }
};

class TaskinAhmed {
    private: 
        int value; 
    
    public:
      TaskinAhmed(int v) : value(v) {}

    // Overload addition operator
    TaskinAhmed operator+(int s)   {
        return TaskinAhmed(value + s);
    }

    // Overload multiplication operator
    TaskinAhmed operator*(int s)   {
        return TaskinAhmed(value * s);
    }

    // Function to display the value
    void displayValue()   {
        cout << "Value: " << value <<  endl;
    }
};

int main() {
     
    LitonKumarDas liton(2);
    TaskinAhmed taskin(3);

    ShakibAlHasan tanzidTamim = (liton + 2) *( taskin);

    
    tanzidTamim.displayValue();

    return 0;
}
  
