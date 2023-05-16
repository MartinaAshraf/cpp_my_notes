//افتكر الreturn function
#include <iostream>
using namespace std;
class RECT{
    public:
int hight;
int width;

int print (){cout<< width*hight;}//هنا احنا عملنا cout 
};
int main (){
    RECT rec1;
    cin>>rec1.hight;
    cin >> rec1.width;
    return rec1.print();//فهنا عملنا return
          }

//هنا بقي عملنا العكس
#include <iostream>
using namespace std;
class RECT{
    public:
int hight;
int width;

int print (){return width*hight;}
};
int main (){
    RECT rec1;
    cin>>rec1.hight;
    cin >> rec1.width;
    cout<< rec1.print();
          }
