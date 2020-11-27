#include <iostream>
#include <string>
using std::string;

int main()
{
    string author = "John Hancock";
    string& penName = author;
    std::cout << penName << std::endl;
    penName = "Mark Twain";
    std::cout << author << std::endl;

    return 0;
}
