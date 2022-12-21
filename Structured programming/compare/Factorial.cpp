//المضروب.. (n!)=n*(n-1)*(n-2)*(n-3).....*3*2*1
#include <iostream>
using namespace std;
int main()
{
	int n , fact=1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;

	}
	cout <<"fact "<< fact;

  // another sloution
        #include <iostream>
using namespace std;
int main()
{
	int n , fact=1,i=1;
	cin >> n;
	while (i <= n )
	{
		fact = fact * i;
		i++;
	}
	cout <<"fact "<< fact;
}
