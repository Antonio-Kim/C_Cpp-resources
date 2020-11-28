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

class Passenger {
public:
    Passenger();
    bool isFrequentFlyer() const;
    void makeFrequentFlyer(const string& newFreqFlyerNo);
    string getName();
    void getMealType();
    void getFlyerNo();
private:
    string name;
    MealType mealPref;
    bool isFreqFlyer;
    string freqFlyerNo;
};

bool Passenger::isFrequentFlyer() const {
    return isFreqFlyer;
}

void Passenger::makeFrequentFlyer(const string& newFreqflyerNo) {
    isFreqFlyer = true;
    freqFlyerNo = newFreqflyerNo;
}

void Passenger::getName(){
    return name;
}

void Passenger::getMealType(){
    return mealPref;
}

void Passenger::getFlyerNo(){
    return freqFlyerNo;
}


Passenger::Passenger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passenger::Passenger(const string& nm, MealType mp, const string& ffn){
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE");
    freqFlyerNo = ffn;
}

Passenger::Passenger(const Passenger& pass){
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}

int main ()
{
    Passenger p1;
    Passenger p2("John Smith", VEGETARIAN, 293145);
    Passenger p3("Adam Smith", REGULAR);
    Passenger p4(p3);
    Passenger p5 = p2;
    Passenger* pp1 = new Passenger;
    Passenger* pp2 = new Passenger("Joe Blow", NO_PREF);
    Passenger pa[20];

    p1.getName();
}
