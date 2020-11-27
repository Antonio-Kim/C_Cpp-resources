#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    if (s > t)
        cout << u << endl;
    s = "John";
    int i = s.size();
    char c = s[3];
    s+="Smith";

    cout << i << " " << c << " " << s << endl;

    return 0;
}
