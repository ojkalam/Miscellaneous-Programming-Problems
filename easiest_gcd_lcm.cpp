#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    //Easiest program for GCD and LCM
    int a,b,i,lg;
    cin>>a>>b;
    lg = a>=b ? a : b;
    //cout<<lg<<endl;
    for(i=lg; !(i%a==0 && i%b==0); i++){}
    cout<<"LCM: "<<i<<endl;
    cout<<"GCD: "<<(a*b)/i<<endl;

}
