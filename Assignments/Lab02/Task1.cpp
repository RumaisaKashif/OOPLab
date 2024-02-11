/*
Programmer: Rumaisa Kashif
Date: 1/2/2024
*/

#include <iostream>

using namespace std;

void recursiveSwap(int a, int b, int count)
{
    if (count>0)
    {
        int temp=b;
        b=a;
        a=temp;
        recursiveSwap(a,b,count-1);
    }
    else
    {
        cout<<"After swapping, numbers are\na= "<<a<<", b= "<<b<<endl;
    }
}
int main() 
{
    int a;
    int b;
    cout<<"Enter numbers to be swapped."<<endl;
    cin>>a;
    cin>>b;
    cout<<"Numbers to be swapped are\na= "<<a<<", b= "<<b<<endl;
    recursiveSwap(a,b,1);
    return 0;
}
