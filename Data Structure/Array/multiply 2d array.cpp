#include <iostream>

using namespace std;

int main()
{
   int row1,col1,row2,col2;
   cout<<"enter size of array 1 :\n";
   cin>>row1>>col1;
    int arr1[row1][col1];
     cout<<"enter size of array 2 :\n";
   cin>>row2>>col2;
    int arr2[row2][col2];
    int result[row1][col2];
    if (col1!=row2){
        cout<<"column 1 must equal row 2";
    }
    else{
    cout<<"enter values for array one \n";
    for(int i=1; i<=row1;i++) {
        for(int j=1 ; j<=col1;j++)
    {
        cout <<i<<" / "<<j<<" : ";
        cin>>arr1[i][j];

    }  }
    cout<<"enter values for array two \n";
    for(int i=1; i<=row2;i++) {
        for(int j=1 ; j<=col2;j++)
    {
        cout <<i<<" / "<<j<<" : ";
        cin>>arr2[i][j];

    }  }

     for(int i=1; i<=row1;i++) {
        for(int j=1 ; j<=col2;j++){
           result[i][j]=0  ;
         for(int k=1 ; k<=col1;k++) {
            result[i][j]+=arr1[i][k]*arr2[k][j] ;

    }  } }

    cout<<"result\n";
    for(int i=1; i<=row1;i++)  {
        for(int j=1 ; j<=col2;j++)
    {
       cout << " " << result[i][j];
        if(j == col2)
            cout << endl;

    }    } }
    return 0;
}
