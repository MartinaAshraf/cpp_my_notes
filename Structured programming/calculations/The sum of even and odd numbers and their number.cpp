#include <iostream>
using namespace std;
int main()
{
	int counter , x, even=0 ,odd=0 , sume=0,sumo=0  ;
	cin >> counter ; 
	for (int i = 0; i < counter; i++)
	{
		cin >> x;

		if (x % 2 == 0)
		{
			sume = sume + x;
			even++;
			
		}

		else
		{
			sumo = sumo + x;
			odd++;
		}
	}
	cout << odd << " " << sumo << "\n" << even << " " << sume; 
}
