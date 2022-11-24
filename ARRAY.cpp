#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <cmath>
#include <cstring>
#include <vector>

using namespace std;
int main() {
	const int size = 5;
	int num[size] = { 1,2,3,4,5 };// int ->النوع ... num ->الاسم ... size ->عدد العناصر الموجوده ف array
	for (int i = 0; i < size; i++) { cout << num[i] << endl; }//معرفة الموجود ف array
	for (int i = size - 1; i >= 0; i--) { cout << num[i] << endl; }//الطريقة الاولى ل كتابته الارقام بالعكس 
	for (int i = 0; i < size; i++) { cout << num[size-i - 1] << endl; }// الطريقة التانيه
	for (int i = 0; i < size; i++) { cout << i << endl; }//الخانات اللى محفوظ فيها القيم ..index
}

