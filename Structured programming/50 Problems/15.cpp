/* Write a C++ program that reads two 3 × 3 matrices, i.e. A and B, and then calculates the 
multiplication of the two matrices.
*/

#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
int n=3;
//cin>>n;
int arr[3][3],arr2[3][3],arr3[3][3],sum=0;
cout<<"Enter the first matrix \n";
for(int i=0;i<n;i++){
 for(int j=0;j<n;j++){
 cin>>arr[i][j];
 }
}
cout<<"Enter the second matrix \n";
for(int a=0;a<n;a++){
 for(int f=0;f<n;f++){
 cin>>arr2[a][f];
 }
}
cout<<"The multiplication of matrix = \n";
for(int g=0;g<n;g++){
 for(int l=0;l<n;l++){
sum=0;
for(int r=0;r<n;r++)
sum+=(arr[g][r]*arr2[r][l]);
 arr3[g][l]=sum;
}
}
for(int a=0;a<n;a++){
 for(int f=0;f<n;f++)
 cout<<arr3[a][f]<<"\t";
 cout<<endl;
}
cout<<endl;
return 0;
}
