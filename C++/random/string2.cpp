#include <iostream>
#include <string>
using std::string;

int main()
{
    string author = "Samuel Clemens";
    string& penName = author;
    penName = "Mark Twain";
    std::cout << author << std::endl;

    return 0;
}
