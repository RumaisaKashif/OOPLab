/*
Programmer: Rumaisa Kashif
Date: 11/2/2024
*/

#include <iostream>

using namespace std;

bool hasSubsetSum(int arr[], int size, int targetSum)
{
    if (targetSum==0) 
    {
        return true;
    }
    if (size==0 || targetSum<0) 
    {
        return false;
    }
    for (int i=size-1; i>=0; --i) 
    {
    if (targetSum>=arr[i]) 
    {
      if (hasSubsetSum(arr, i, targetSum-arr[i])) 
      {
        return true;
      }
    }
  }
  return false;
}


int main()
{
    int size;
    cout<<"Enter size of array ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter integer array."<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int targetSum;
    cout<<"Enter target sum ";
    cin>>targetSum;
    if (hasSubsetSum(arr, size, targetSum))
    {
        cout<<"Sum exists within the array.";
    }
    else
    {
        cout<<"Sum does not exist within the array.";
    }
    return 0;
}
