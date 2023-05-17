#include <iostream>
using namespace std ;
class Test{
private:
    int a;
    int b;
public:
    Test(){ //this is a constractor لازم يبقي باسم الكلاس
      //بيتنفز بمجرد ما عملت اوبجيكت
    int x; cin>>x;
    a=x;
    int y; cin>> y;
    b=y;
    }
void show (){cout <<a<<" "<<b;}

};


int main (){
Test ob1;
ob1.show();

}
