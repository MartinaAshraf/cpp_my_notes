// frist selution by using : FOR 
#include <iostream>
using namespace std;
int main()
{
	int counter, x, max = INT_MIN, min = INT_MAX;
	cout << "enter the counter :  " ;
	cin >> counter;
	for (int i = 0; i < counter; i++)
	{
		cout<< "enter the value : ";
		cin >> x;

		if (x> max)
		{
			max = x; 
			continue;
		}
		else if (x < min)
		{
			min = x;

		}
		
	}
	cout <<"min num = " << min << endl <<"max num = " << max << endl;
}


// Another selution by using : ARRAY

#include<iostream>
using namespace std;
int main()
{
int size;
cout << "Enter the size of array : ";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
	    cout<<"enter the value : "; 
	    cin>>arr[i];
	}


int max=arr[0];
int min=arr[0];
for(int i=0;i<5;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
cout<<"max = "<<max<<endl;
cout<<"min = "<<min<<endl;
return 0;
}
