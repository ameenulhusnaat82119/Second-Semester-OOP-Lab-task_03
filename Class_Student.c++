#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int age;

public:
    void setName(string n)
    {
         if(!n.empty())
        {
            name = n;
        }
        else
        {
            cout<<"Invalid name. Name cannot be empty."<<endl;
        }
    }

    void setAge(int a)
    {
        if(a > 0 && a < 120)
        {
            age = a;
        }
        else
        {
            cout<<"Invalid age. Age must be between 1 and 119."<<endl;
        }
        
    }

    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    Student s;
    s.setName("Ali");
    s.setAge(20);
    cout<<"Name: "<<s.getName()<<endl;
    cout<<"Age: "<<s.getAge()<<endl;
    
    return 0;
}