#include<iostream>
using namespace std;
int main(){
    int x = 50, y = 60;

    int temp = x;
    x = y;
    y = temp; 

    cout << x << " " << y << endl;
    return 0;
}