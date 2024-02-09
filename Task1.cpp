#include <iostream>
#include <sstream>

using namespace std;

class BoardMarker
{
    string brand;
    string shade;
    bool refillable;
    bool inkstatus;
    public:
    void setBrand(string b)
    {
        brand = b;
    }
    void setShade(string s)
    {
        shade = s;
    }
    void setRefill(bool refill)
    {
        refillable = refill;
    }
    void setInk(bool ink)
    {
        inkstatus = ink;
    }
    string getBrand()
    {
        return brand;
    }
    string getShade()
    {
        return shade;
    }
    bool getRefill()
    {
        return refillable;
    }
    bool getInk()
    {
        return inkstatus;
    }
};

bool stringToBool(const string& s) 
{
    return s == "true" || s == "1";
}

int main()
{
    BoardMarker marker;
    cout << "Enter marker brand: " << endl;
    string brand;
    cin >> brand;
    marker.setBrand(brand);
    cout << "Enter marker shade: " << endl;
    string shade;
    cin >> shade;
    marker.setShade(shade);
    cout << "Indicate whether the marker is refillable or not? Enter true or false." << endl;
    string refill;
    cin >> refill;
    marker.setRefill(stringToBool(refill));
    cout << "Indicate the marker's ink status by writing true or false." << endl;
    string ink;
    cin >> ink;
    marker.setInk(stringToBool(ink));
    cout << "The brand of this marker is " << marker.getBrand() << endl;
    cout << "The shade of this marker is " << marker.getShade() << endl;
    cout << "The refillable status of this marker is: ";
    if (marker.getRefill())
    {
        cout << "This marker can be refilled." << endl;
    }
    else
    {
        cout << "This marker can't be refilled." << endl;
    }

    cout << "The ink status of this marker is: ";
    if (marker.getInk())
    {
        cout << "This marker has ink." << endl;
    }
    else
    {
        cout << "This marker does not have ink." << endl;
    }
}
