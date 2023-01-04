/*A class of 35 students takes an exam in which the score is between 0 and 100, write a C++
program to calculate:
a) the average score,
b) the number of student failed, (i.e., of scores below 60),
c) The numbers of student of perfect scores 100
*/


#include <iostream>
using namespace std;
int main() {
 int arr[40], failed = 0, perfect = 0;
 double avg = 0.0;
 cout << "Enter marks for 35 student\n";
 for (int g = 0; g < 35; g++)
 {
 cin >> arr[g];
 if (arr[g] == 100)
 perfect++;
 if (arr[g] < 60)
 failed++;
 avg += arr[g];
 }
 avg /= 35;
 cout << "the number of student failed : " << failed << "\n";
 cout << "The numbers of student of perfect scores : " <<perfect << "\n";
 cout << "the average score : " << avg << "\n";
}
