#include <iostream>
#include <cstdlib>
#include <string>

using std::string;

enum MealType {
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
};

struct Passenger {
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

int main()
{
    Passenger* p;
    p = new Passenger;

    Passenger pass = {"John Smith", VEGETARIAN, true, "293145"};
    std::cout << pass.name << " " << pass.freqFlyerNo << std::endl;

    p->name = "Pochahontas";
    p->mealPref = REGULAR;
    p->isFreqFlyer = false;
    p->freqFlyerNo = "NONE";

    std::cout << p->name << " " << p->freqFlyerNo << std::endl;
    delete p;

    return EXIT_SUCCESS;
}
