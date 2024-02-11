/*
Programmer: Rumaisa Kashif
Date: 11/2/2024
*/

#include <iostream>

using namespace std;

int calcGCD(int a, int b) 
{
    if (b==0) 
    {
        return a;
    } 
    else 
    {
        return calcGCD(b, a%b);
    }
}

int calcLCM(int a, int b) 
{
    if (a==1 || b==1) 
    {
        return a*b;
    }
    if (b%a== 0) 
    {
        return b;
    }
    if (a%b== 0) 
    {
        return a;
    }
    return calcLCM(a+1, b+1);
}

int main()
{
    cout<<"Enter the two numbers: "<<endl;
    int a, b;
    cin>>a;
    cin>>b;
    // Calculate GCD
    int gcd=calcGCD(a, b);
    cout<<"GCD of "<<a<<" and "<<b<<" is: "<<gcd<<endl;
    // Calculate LCM
    int lcm=calcLCM(a, b);
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm<<endl;
    return 0;
}
