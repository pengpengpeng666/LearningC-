#include<iostream>

using namespace std;

class Student {
    string name;
    int age;

 public:
    Student() : name(""), age(0) {}

    void set_age(int age) {this->age = age;}
    int get_age() {return age;}
    void set_name(string name) {this->name = name;}
    string get_name() {return name;}
};

void increment_age(Student s) {
    s.set_age(s.get_age()+1);
}

int main(int argc, char **argv)
{
    Student s;
    s.set_name("Jack");
    s.set_age(20);

    increment_age(s);

    cout<<s.get_age()<<endl;
}
