#include <iostream>
using namespace std;

// Declaration (no memory)
extern int gi;

// Definition (memory allocated)
int gi = 42;

// Const example with linkage
extern const int bufSize = 100;

void basicRefs() {
    int ival = 1024;
    int &ref = ival;
    cout << "ref = " << ref << endl;

    // int &bad = 10; // must bind to object
}

void constRefs() {
    const int x = 1024;
    const int &rx = x; // OK
    cout << rx << endl;

    // int &r2 = x; // non-const reference to const object
}

void tempBinding() {
    double d = 3.14;
    const int &ri = d; // compiler creates temp
    cout << ri << endl;
}

int main() {
    basicRefs();
    constRefs();
    tempBinding();
}
