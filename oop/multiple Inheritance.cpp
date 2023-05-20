#include <iostream>
using namespace std;

class A {
private:
string name;
int age;
public:
A(string n, int a) {
name = n;
age = a;
}
void print() {
cout << "Name: " << name << endl;
cout << "Age: " << age << endl;
}
};

class B {
private:
string email;
public:
B(string e) {
email = e;
}
void print() {
cout << "Email: " << email << endl;
}
};

class C : public A, public B {
private:
int grade;
public:
C(string n, int a, string e, int g) : A(n, a), B(e) {
grade = g;
}
void print() {
A::print();
B::print();
cout << "Grade: " << grade << endl;
}
};

int main() {
string name, email;
int age, grade;
cout << "Enter name: ";
getline(cin, name);
cout << "Enter age: ";
cin >> age;
cin.ignore();
cout << "Enter email: ";
getline(cin, email);
cout << "Enter grade: ";
cin >> grade;
C ob1(name, age, email, grade);
ob1.print();
return 0;
}
