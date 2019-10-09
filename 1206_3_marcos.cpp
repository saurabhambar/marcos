#include<iostream>

using namespace std;

#define SQRT(x) (x * x)

int main(){
    int a, b = 3;
    a = SQRT(b++);
    cout<< a << endl << b;
    return 0;
}

//output:   12
//          5
//(b++ * b++) = 3 * 4
// at last value of b becomes 5
