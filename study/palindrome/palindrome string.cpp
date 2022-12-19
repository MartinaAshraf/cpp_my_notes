#include <iostream>
using namespace std;
int main(){
//Ipalind rome string ==> level
	string s;

cout << "enter a string: ";
cin >> s;

bool isPalindrome = true;

for (int i = 0; i < (s.length() / 2); i++)
{
	if (s[i] != s[s.length() - 1 - i])
	{
		isPalindrome = false;
	}
}
cout << boolalpha<< isPalindrome;

}

