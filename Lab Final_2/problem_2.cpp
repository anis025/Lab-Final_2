#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 
#define ll long long int  

class ManchesterUnited {
    private: 
        int coach, player; 
    
    public: 
        ManchesterUnited() {
            coach = 0, player = 0;
        }

        ManchesterUnited(int coach, int player) {
            this->coach = coach; 
            this->player = player; 
        }

          // Overload the ++ operator
        ManchesterUnited operator++() {
            ManchesterUnited temp;
            temp.coach = ++this->coach; 
            temp.player = ++this->player; 
            return temp;  
        }

        // overlaod the realtional operator. 
        bool operator<(ManchesterUnited &other) {
            return (coach + player) < (other.coach + other.player);
        }

        void dispaly() {
            cout<<"Coach: " << coach <<", Player: " << player <<endl;
        }
};

int main() {
    ManchesterUnited ronaldo(4, 5), fernandes(5,6);
    ronaldo.dispaly();
    fernandes.dispaly();

    ++ronaldo;

    // ++fernandes;
    // cout<< "After increment:\n";
    // ronaldo.dispaly();
    // fernandes.dispaly();

    // Compare ronaldo and fernandes before and after incrementing ronaldo by one
    cout<< (ronaldo < fernandes ?  "CR7 win\n" :  "Fernandes win\n");  

    return 0;
}