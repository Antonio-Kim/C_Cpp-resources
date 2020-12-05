#include <cstdio>
using namespace std;

class A {
    int _value = 0;
public:
    void setv (const int a) { _value = a; }
    int getv ();
    int getv () const; 
};

int A::getv() {
    puts ("mutable getv");
    return _value;
}

int A::getv() const {
    puts ("const getv");
    return _value;
}

int main(void) {
    A a;
    a.setv(42);
    printf("a is %d\n", a.getv());

    const A b = a;
    printf("b is %d\n", b.getv());
    return 0;
}
