#include <iostream>

using namespace std;

int main ()
{
    int n, m, r, sum;
    cout<<"Enter the number which you want to check : ";
    cin>>n;
    m = n;
    while (n > 0)
    {
        r=n%10;
        n=n/10;
        sum = sum + r*r*r; 
    }
    if (sum == n)
    {
        cout<<"Its an Amstrong number";
    }
    else
    {
        cout<<"Not an Amstrong number";
    }
    
}