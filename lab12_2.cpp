#include<iostream>
using namespace std;
int gcd(int x, int y);
int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}
int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}