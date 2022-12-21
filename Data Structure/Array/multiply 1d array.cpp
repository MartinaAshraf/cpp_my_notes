#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter Arrays Variables Number \n";
    cin>>n;
    int arr1[n], arr2[n];

    cout<<"Enter Array 1 Variables Values \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Array 2 Variables Values \n";
    for(int i=0; i<n; i++)
    {
        cin>>arr2[i];
    }
     for(int i=0; i<n; i++)
    {
        sum+=arr1[i]*arr2[i];
    }
    cout<<" Result = "<<sum;
    return 0;
}
