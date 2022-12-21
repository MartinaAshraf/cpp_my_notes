#include <iostream>
using namespace std;
const int len=5;
int stck[10];
int top=-1;
bool isEmp(){
if(top==-1)
    return true;
else
    return false ;
}
bool isFull(){
if(top==len)
    return true;
else
    return false ;
}
 int push(int x){
if (isFull())
    cout<<"Over Flow";
    else{
        top++;
        stck[top]=x;
    }
}
int pop(){
if (isEmp())
    cout<<"Under Flow";
    else
        top--;
}
void display(){
if (isEmp())
    cout<<"Stack Is Empty";
    else {
            cout<<"Stack Elements Are\n";
        for(int i=top;i>=0;i--)
        cout<<stck[i]<<endl;
    }
}


int main()
{
    int n;
    cout<<"1-Push In The Stack\n2-Pop In The Stack\n3-Display\n" ;
    while(1){
        cin>>n;
        if(n==1){
        int x;
        cout<<"Enter The Number To Be Pushed\n";
        cin>>x;
        push(x);
        cout<<"the Number Is Pushed\n";
        cout<<"What do you Want To Do Next?\n";
        }
        else if (n==2){
            pop();
            cout<<"The Last Element Is Popped\n";
            cout<<"What do you Want To Do Next?\n";
        }
        else if(n==3){
            display();
            cout<<"What do you Want To Do Next?\n";

        }
        else
        cout<<"choose another Number";
            continue;
    }




    return 0;
}
