#include <iostream>
#include <memory>
using namespace std;

class Vect {
    unique_ptr<int[]> data;
    int size;
public:
    Vect(int n): size(n), data{new int[n]}{
        cout << "Constructing array with size of " << n << endl;
    }
    void set_data(int n, int index){
        data[index] = n;
    }
    int get_data(int index){
        return data[index];
    }
    void display_vector(){
        for (int i = 0; i < size; i++)
            cout << get_data(i) << " ";
        cout << endl;
    }
};

int main(void) {
    Vect a(5);
    for (int i = 0; i < 5; i++)
        a.set_data(i,i);
    a.display_vector();

    return 0;
}
