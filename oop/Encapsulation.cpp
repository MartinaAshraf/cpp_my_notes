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


//example2


#include <iostream>
using namespace std ;
class Circle {
private:
    float radius;
public:
    void setvalue(){cin>>radius;}
    void printArea(){cout<<3.14*radius*radius;}
    };
int main(){
Circle ob1;
ob1.setvalue();
ob1.printArea();
}

//برنامج بتدخل فيه اسم موظفين و رواتبهم و بيطبع حاصل جمع الرواتب دى 

#include <iostream>
using namespace std ;
class Campany {
private :
    int sal;
    string name;
public:
    void setvalue (){cin >> sal >> name;}
    void getsal(Campany ob1){cout<<ob1.sal+sal;}
};
int main(){
Campany ob1;
ob1.setvalue();
Campany m;
m.setvalue();
m.getsal(ob1);
}
