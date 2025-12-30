#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int u,int i)
{
    if(i == 0) return u;
    else return gcd(i,u%i);
}