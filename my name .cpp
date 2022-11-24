#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;
int main() {

	char name[8];//1+size 
	name[0] = 'M';
	name[1] = name[0] - 'M' + 'A';
	name[2] = name[1] - 65 + 'R';
	name[3] = name[2] + 2;
	name[4] = name[1] - 'A' + 'I';
	name[5] = name[0] + 1;
	name[6] = name[1];
	name[7] = '\0'; 
	cout << name << endl;
}
