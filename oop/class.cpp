
#include <iostream>
using namespace std;
class Book
{
public:
string name ;
int price;
string author;
int pages;
};
int main(){
Book ob1;
   ob1.pages=300;
   ob1.price=250;
   ob1.author="MARTINA";
cin >> ob1.name;
cout<<ob1.price<<endl//اسم الاوبجيكت + الحاجه اللى عايزينها من كلاس الاوبجيكت
<<ob1.author<<endl
<<ob1.pages<<endl;
return 0 ;
 }
