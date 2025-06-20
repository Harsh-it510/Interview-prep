#include<iostream>
using namespace std;
int main(){
    int x = 50, y = 60;

    x = x+y;
    y = x-y;
    x = x-y;

    cout << x << " " << y << endl;
    return 0;
}