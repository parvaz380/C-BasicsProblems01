#include<bits/stdc++.h>
using namespace std;
int main()
{
    float k,f;
    cout<<"Enter Kelvin scale temperature : ";
    cin>>k;
    f = (9*(k-273))/5+32;
    cout<<"The Farenheit scale temperature is : "<<f;
}
