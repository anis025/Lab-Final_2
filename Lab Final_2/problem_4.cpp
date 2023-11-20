#include<bits/stdc++.h>
using namespace std; 
#define endl '\n' 

class Student {
    public: 
        string name; 
        vector<int> courseMarks; 
        
        Student(const string  &name,const vector<int> &marks) {
            this->name = name; 
            this->courseMarks  = marks; 
        }

        void calculateMarks(int &highest, double &average, int &lowest) {
            highest  = courseMarks[0];
            average = 0.0; 
            lowest = courseMarks[0];
           
            for(int mark : courseMarks) {
                if(mark > highest) 
                    highest = mark;
                if(mark < lowest) 
                    lowest = mark;
                
                average += mark;
                
            }

           average /= courseMarks.size();
            
        } 

        void display() {
            int highest, lowest; 
            double average; 

            calculateMarks(highest, average, lowest);

            cout << "Student Name: " << name << "\n";
            cout << "Highest Mark: " << highest << "\n";
            cout << "Average Mark: " << average << "\n";
            cout << "Lowest Mark: " << lowest << "\n\n";
        }
};

int main()  {

    vector<Student> students = {

        {"Anis", {90, 85, 92, 88, 89}},
        {"Fatema", {78, 82, 80, 75, 79}},
        {"Abdullah", {95, 88, 93, 90, 91}},
        
    };
    
    for(auto stu : students) 
        stu.display();
    
      
    return 0;
}