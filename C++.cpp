// #include<iostream>
// using namespace std;

// class Teacher{
//     private:
//     double salary;

//     public:
//     string name;
//     string dept;
//     string subject;

//     void changeDept(string newDept){
//         dept = newDept;
//     }

//     void setSalary(double s){
//         salary = s;
//     }

//     double getSalary(){
//         return salary;
//     }
// };
  
// int main() {
//    Teacher t1;
//    t1.name = "Anand";
//    t1.subject = "java";
//    t1.dept = "CSE";
//    t1.setSalary(345678);

//    cout<<t1.name<<endl;
//    cout<<t1.getSalary()<<endl;
// }


//Condtructor  = Special method invoked automatically at time of object creation. Used for installasation.
// Encapsulation = Encapsulation is wrapping up of data and function in a single unit called class.
// Inheritance = When properities and member function of base class are passed on the derived class.
#include<bits/stdc++.h>
using namespace std;
  
    class Person{
        public:
        string name;
        int age;

        // Person(string name, int age){
        //     this->name = name;
        //     this->age = age;
        // }
        Person(){
        }
    };
    
    class Student : public Person{
        public:
        int rollno;

        void getInfo(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Roll no: "<<rollno<<endl;
        }
    };
int main() {
    Student s1;
    s1.name = "Nand kishor";
    s1.age = 21;
    s1.rollno = 123;
    int a = 3;
    int b = 6;
cout<<max(a,b);
    s1.getInfo();
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    float speed, distance, time;

    // Example: calculate speed
    distance = 150.0; // in kilometers
    time = 2.5;       // in hours

    speed = distance / time;

    cout << fixed << setprecision(4); // Set output to 2 decimal places
    cout << "Speed: " << speed << " km/h" << endl;

    return 0;
}