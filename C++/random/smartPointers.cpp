/* This is a demonstration of using smart pointers to create a vector-like 
 * class
 */
#include <iostream>
#include <memory>
using namespace std;

class Smart{
    unique_ptr<long []> array;
    int maxSize;
public:
    Smart(int max){
        maxSize = max;
        make_unique<long []>(max)={};
    }
    
    void insert_element(int element, int index)
    {
        if (index > maxSize){
            cout << "index is out of bound" << endl;
        } else {
            array[index] = element;
        }
    }
    void display_elements()
    {
        for (int i=0; i<maxSize; i++){
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main (void)
{
    Smart arr(10);

    return 0;
}