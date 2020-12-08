#include <iostream>
using namespace std;

class Vect {
    int* data;
    int size;
public:
    Vect(int n):size(n),data(new int[n]) {
        cout<<"Constructing array with size of " << n << endl;
    }
    ~Vect() {
        cout << "destrucing the array " << endl;
        delete []data;
    }
    void setdata(int n, int index) {
        data[index] = n;
    }
    int getdata(int index) {
        return data[index];
    }
    void displayVector() {
        for (int i = 0; i < size; i++)
            cout << getdata(i) << " ";
        cout << endl;
    }
};

int main(void) {
    Vect a(5);
    for (int i = 0; i < 5; i++)
        a.setdata(i,i);
    a.displayVector();

    return 0;
}
