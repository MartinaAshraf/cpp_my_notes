#include <iostream>
using namespace std;
class Book
{
public:
string name ;
int price;
string author;
int pages;

   void print()//member function
   {
cout<<price<<endl //مش بنكتب اسم الاوبجيكت 
<<author<<endl
<<pages<<endl;
   }


};
int main(){
Book ob1;
   ob1.pages=300;
   ob1.price=250;
   ob1.author="MMARTINA";
cin >> ob1.name;
ob1.print();//هنا بنكتب اسم الفانكشن + اسم الاوبجيكت
return 0 ;
 }
