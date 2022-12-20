//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
//الرقم التالى = مجموع الرقمين السابقين -->8=3+5
#include <iostream>
using namespace std;
int main()
{
	int index, second_num = 0, frist_num = 0, total = 0;
	cout << "Enter the index : ";
	cin >> index; //2
	for (int i = 0; i <= index; i++) //i=0 .. i=1 .. i=2
	{
		if (i== 0)
		{
			frist_num = 0;
			cout << frist_num << "  "; //0 
			continue;
		}
		else if (i == 1)
		{
			second_num = 1;
			cout <<  second_num << "  ";//0  1
			continue;
		}
		total = second_num + frist_num;// 1+0=1
		frist_num = second_num;
		second_num = frist_num;
		cout << total << "  ";//0  1  1 
	}
}
