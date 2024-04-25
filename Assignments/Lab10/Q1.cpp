#include <iostream>

using namespace std;
class Logo{
    string logo;
    public:
    void setLogo(string l)
    {
        logo=l;
    }
    friend void changeLogo();
    void display()
    {
        cout<<"Logo: "<<logo<<endl;
    }
};

void changeLogo(Logo& l)
{
    l.setLogo("Doge Coin");
};
class Platform{};
class Server{};


int main() {
    Logo twitter;
    twitter.setLogo("Blue Bird");
    twitter.display();
    changeLogo(twitter);
    twitter.display();
    return 0;
}
