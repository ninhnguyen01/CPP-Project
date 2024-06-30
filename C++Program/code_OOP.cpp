#include <iostream>
#include <string>

using namespace std;

class AbstractEmployee {

    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
    private:
        string Name;
        int Age;
        string Company;
    protected:
        
    public:
        void setName(string name){
            Name = name;
        }
        string getName() {
            return Name;
        }

        void setAge(int age){
            Age = age;
        }
        int getAge() {
            return Age;
        }

        void setCompany(string company){
            Company = company;
        }
        string getCompany() {
            return Company;
        }

        void IntroduceYourself() {
            cout << "Name: " << Name << endl;
            cout << "Age: " << Age << endl;
            cout << "Company: " << Company << endl; 
        }
        Employee(string name,int age,string company) {
            Name = name;
            Age = age;
            Company = company;
        }
        void AskForPromotion() {
            if (Age > 34) {
                cout << Name << " got promoted!" << endl;
            }
            else {
                cout << Name << ", sorry, no promotion is available!" << endl;
            }
        }
};

int main() {

    Employee employee1 = Employee("Henry",32,"FreeCodeCamp");
    // Employee1.Name = "Henry";
    // Employee1.Age = 32;
    // Employee1.Company = "FreeCodeCamp";
    // employee1.IntroduceYourself();
    employee1.AskForPromotion();

    Employee employee2 = Employee("John",35,"Amazon");
    // Employee2.Name = "John";
    // Employee2.Age = 35;
    // Employee2.Company = "Amazon";
    // employee2.IntroduceYourself();
    employee2.AskForPromotion();

    employee1.setAge(37);
    std::cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    return 0;
}
