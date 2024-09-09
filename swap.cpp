#include <iostream>
using namespace std;

int main(){
    int x = 2;
    int y = 1;
    int temp = x;
    x = y;
    y = temp;
    cout << "x = " << x <<", y = " << y << endl;
    return 0;
}