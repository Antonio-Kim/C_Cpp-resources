#include <iostream>
using namespace std;

class Vect {
    int* data;
    int size;
public:
    Vect(int n);
    ~Vect();
    void setdata(int n, int index);
    int getdata(int index);
    void displayVector();
};

Vect::Vect(int n) {
    size = n;
    data = new int[n];
}

Vect::~Vect() {
    delete [] data;
    cout << "deleting vectors" << endl;
}

void Vect::setdata(int n, int index){
    data[index] = n;
}

void Vect::displayVector() {
    for (int i = 0; i < size; i++)
        cout << getdata(i) << " ";
    cout << endl;
}

int Vect::getdata(int index){
    return data[index];
}

int main(void) {
    Vect a(5);
    for (int i = 0; i < 5; i++)
        a.setdata(i,i);
    a.displayVector();

    return 0;
}
