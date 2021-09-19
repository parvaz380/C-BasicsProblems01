#include<bits/stdc++.h>
using namespace std;
int main()
{
    float k,f;
    cout<<"Enter Farenheit scale temperature : ";
    cin>>f;
    k = (5*(f-32))/9+273;
    cout<<"The kelvin scale temperatur is : "<<k;
}
