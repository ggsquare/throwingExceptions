#include <iostream>
#include "MyInt.h"

using namespace std;

int main() {
    MyInt one;
    int n = 6;

    try{
        one[n] = 2;
        cout << one[n] << endl;
    } catch (const char* m){
        cerr << "Exception caught: " << m << endl;
    }
    return 0;
}