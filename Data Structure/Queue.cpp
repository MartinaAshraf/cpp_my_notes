#include <iostream>

using namespace std;
 const int len=5;
 double que[10];
 int rear=-1;
 int f=-1;
 int counter=0;

 void init(){
 f=rear=-1;
 counter=0;

 }

 bool isEmp(){
 if(counter==0)
    return true;
 else
    return false;
 }
 bool isfull(){
 if(counter==len)
    return true;
 else
    return false;
 }
 void enque (double x){
 if(isfull())
    cout<<"over flow \n";
 else {
    rear++;
    que[rear]=x ;
    counter++;
    if(f==-1)
        f=0;
 }

 }
 double getfront(){
     if (isEmp())
        cout<<"queue is empty";
     else
 return que[f];
 }
 double getrear(){
     if (isEmp())
        cout<<"queue is empty";
     else
 return que[rear];
 }
 void deque(double &x){
     if(isEmp())
        cout<<"underflow";

 if(f>rear)
    f=rear=-1;

      else {

 que[f]=x;
 f++;
 counter--;
 } }

 void display(){
      if(isEmp())
        cout<<"queue is empty";
else
    {
 for (int i=f; i<=rear; i++)

 cout<<que[i]<<endl;

 }
 }

int main()
{
    /*cout<<" is queue empty? " <<isEmp()<<endl;
    cout<<" is queue full? " <<isfull()<<endl;
    getfront() ;
    getrear() ;*/
     double item;
     for (int i=0; i<len;i++)
     {
         cout<<"enter element: ";
         cin>>item;
         enque(item);
     }
     double y;
     cin>>y;
     deque(y);
    display();
     /*cout<<"the deleted element is "<<y<<endl;

      cout<<" is queue empty? " <<isEmp()<<endl;
    cout<<" is queue full? " <<isfull()<<endl;
    cout<<"The First Element "<<getfront()<<endl ;
    cout<<"the last Element "<<getrear() ; */
    return 0;
}
