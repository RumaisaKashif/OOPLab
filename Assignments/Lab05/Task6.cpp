#include <iostream>

using namespace std;

class graphicsRendering{
    public:
    void display()
    {
        cout<<"This is the graphics rendering engine"<<endl;
    }
};

class inputHandler{
    public:
    void display()
    {
        cout<<"This is the input handler"<<endl;
    }
};

class physicsEngine{
    public:
    void display()
    {
        cout<<"This is the physics engine"<<endl;
    }
};

class gameEngine{
    graphicsRendering graphicsrendering;
    inputHandler inputhandler;
    physicsEngine phyengine;
    public:
    gameEngine(const graphicsRendering& mygraphics, const inputHandler& myInput, const physicsEngine& myPhysics): 
        graphicsrendering(mygraphics), inputhandler(myInput), phyengine(myPhysics){}
    void displayAll()
    {
        graphicsrendering.display();
        inputhandler.display();
        phyengine.display();
    }
};

int main()
{
    cout<<"Rumaisa Kashif, 23K-0744, Q5"<<endl;
    graphicsRendering myGraphics;
    inputHandler myInput;
    physicsEngine myPhysics;
    gameEngine gme(myGraphics,myInput,myPhysics);
    gme.displayAll();
    return 0;
}

