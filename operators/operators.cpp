#include<iostream>
using namespace std;

int main() {
    int i, j, operation, ternary;
    i = 1;
    j = 2;

    operation = i + j + i++ + j-- + --i + ++j;
    cout<<operation<<endl;

    cout<<!false<<endl;
    cout<<!5<<endl;
    cout<<(3 && 4)<<endl;
    cout<<(0 && 5)<<endl;

    cout<<(4<<2)<<endl;  // a<<n => a*2^n
    cout<<(4>>3)<<endl;  // a>>n => a/2^n

    // ternary = (operation == 4)?2:5;
    cout<<((operation == 4)?2:5)<<endl;

    return 0;
}