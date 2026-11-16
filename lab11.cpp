#include <iostream>
 using namespace std;
  class Student
   {
     private: 
    int rollNo;
    string name;
    public: 

    Student(int r, string n)  
    {      
    rollNo = r;   
    name = n;  
    cout << "Student object created" << endl;
    }  
    // Member function   
    void display() 
    {cout << "Roll Number: " << rollNo << endl;    
    cout << "Name: " << name << endl; 
    }     // Destructor 
    ~Student()   
    {        
    cout << "Student object destroyed" << endl;     
    } 
    }; 
    int main() {     
    int R;
    string N;
    cout<<"enter your rollno:"<<endl;
    cin >>R;
    cout<<"enter your name:"<<endl;
    cin >> N;
    
    Student s1(R,N);
    s1.display();  
    
    return 0; 
     } ;
                                                                  