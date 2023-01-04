//. Write a C++ program to find the sum of the successive even integers 2, 4, ... 200.

#include <iostream> 
using namespace std; 
int main(){ 
int sumeven=0; 
for (size_t i = 2; i <=200; i++) 
{ 
 if(i%2==0) 
 { 
 sumeven+=i; 
 } 
} 
cout<<"the sum of the successive even integers from 2 to 200 = "<<sumeven<<endl; 
return 0; 
}
