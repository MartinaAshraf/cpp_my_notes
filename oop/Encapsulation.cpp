#include <iostream>
using namespace std ;
class youtube{
private:
    string name ;
    int videos;
    int sub;
public:
void add(){ cin>>name>> videos>>sub;}//عشان فوق برايفت ف بتعمل اكسس عليها 
void print (){cout << name<<" "<<videos<<" "<<sub<<" ";} //للطباعه عادى
};
int main(){

youtube ob1;
ob1.add();
ob1.print();
}
