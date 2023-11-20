#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 

class Publication {
    public:
        string title; 
        float price; 

        virtual void  getData() {
            cout<<"Enter the title: "; 
            cin.ignore();  // ignor any /n, /t, char  from the input buffer. 
            getline(cin, title);  // input a sentance. 

            cout<<"Enter the price: "; 
            cin>>price;

        }

        // display data... 
        virtual void putData() {
            cout<<"Title: "<< title << endl; 
            cout<<"Price: ৳" << price << endl; 
        }
};  


class Book : public Publication {
    private: 
        int pageCount; 
    
    public: 
        void getData()  {
            Publication :: getData();
            cout<<"Enter page count: "; 
            cin>> pageCount;
        }

        void putData() {
            Publication :: putData();
            cout<<"Page Count: " << pageCount<< endl;
        }
};

class Tape : public Publication {
    private: 
        float playingTime;
    
    public:
        void getData() {
            Publication :: getData();
            cout<<"Enter playing time(in munites)" << endl;
            cin>> playingTime; 
        }

        void putData() {
            Publication :: putData();
            cout<<"Playing Time: "<< playingTime << endl;
        }
};


int main() {
    Book book; 
    Tape tape; 

    cout<<"Enter data for the book: "; 
    book.getData(); 

    cout<< "Enter data for the tape:"; 
    tape.getData(); 

    // dispaly data for book 
    cout<<"\nBook details:\n"; 
    book.putData(); 

    cout<<"\nTape details:\n";
    tape.putData();
 
    return 0;
}
 