#include <iostream>
#include <cstdlib>

class Counter {
public:
    Counter();
    int getCounter();
    void increaseBy(int x);
private:
    int count;
};

Counter::Counter(){
    count = 0;
}
int Counter::getCounter(){
    return count;
}
void Counter::increaseBy(int x){
    count += x;
}

int main()
{
    Counter c;
    std::cout << c.getCounter() << std::endl;
    c.increaseBy(3);
    std::cout << c.getCounter() << std::endl;
    c.increaseBy(5);
    std::cout << c.getCounter() << std::endl;

    return EXIT_SUCCESS;
}

