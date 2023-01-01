/*Write a C++ program to read a set of 10 numbers (from a file) and write out the largest number
in the set. Now adjust the program to write out the position of the largest number in the set
as well, e.g. if the data is
–
–
(on separate lines in the file) the output should be 9 (largest number) and 4 (fourth number in
the set).
*/

#include <iostream>
#include <fstream>
#include <vector>
Using namespace std;
Int main()
{
 Int num;
 Fstream read(“File.txt”,ios::in);
 Vector <int> v;
 While(true){
 Read>>num;
 If(read.fail())
 Break;
 v.push_back(num);
 }
 Read.close();
 Ofstream write(“File.txt”,ios::app);
 Int max,c;
 Max=v[0];
 For(int i=1;i<v.size();i++){
 If(max<v[i]){
 Max=v[i];
 C=I;
 }
 }
 Write<<endl<<”The Maximum Num = “<<max<<” and the position is: “<<c<<endl;
 Write<<”The Fourth Num = “<<v[3];
 Write.close();
 Return 0;
}
