/*السلام عليكم يا شباب يارب تكونوا بخير 
في تاسك بإذن الله مطلوب منكم 
تعمل class للطالب يكون فيه اسمه وسنه والفرقة الدراسية ورقم الid ويكون فيه ٢ method اول واحده لما تستدعيها تطبع رساله ترحيبيه باسم الشخص مثلا hello ahmed .. تاني واحده لما تستدعيها تطبع بيانات الشخص كامله ودا طبعا لما تعمل object من ال class

التاسك التاني تعمل calss رئيسي و class تاني رئيسي برضو يكون فيهم اي method و data members

 و class تالت بيورث من ال ٢ class الرئيسيين  كل الحاجات اللي موجوده فيهم*/

//task1
#include <iostream>
using namespace std;
class Student
{  
  public:
string name;
int age;
int grade;
void welcome(){cout << "Hello , "<<name<<endl;}
void print (){
cout << "Name : "<<name
<<"\nAge : "<<age
<<"\nGrade : "<<grade ;}
};
int main (){
Student s1;
cout<<"type name - age - grade \n";
cin>>s1.name>>s1.age>>s1.grade;
s1.welcome();
s1.print();} 




//task 2
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


