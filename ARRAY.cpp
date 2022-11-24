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
	for (int i = 0; i < size; i++) { cout << num[size - i - 1] << endl; }// الطريقة التانيه
	for (int i = 0; i < size; i++) { cout << i << endl; }//الخانات اللى محفوظ فيها القيم ..index
	
	cout << "----------------------------------------------------" << endl;
	
	const int sizee = 10;
	int  number[sizee];
	for (int i = 0; i < sizee; i++) { cin >> number[i] ; }//عشان استقبل ارقام ف array
	
	cout << "=====================================================" << endl;
	
	//لو عايزين نجيب اقل رقم  ف array 
	
	int minimum = number[0];//اعتبرنا اول رقم متخزن ف array هو الاصغر
	for (int i = 1; i < sizee; i++)  //بدأنا من تانى خانه فالمقارنه 
	{
		if (minimum > number[i]) //دى المقارنه
		{
			minimum = number[i];
		}
	}
	//لازم نحط cout من بره عشان يكرر loop و فالاخر يطبع 
	cout << minimum << endl;
		return 0;

}

