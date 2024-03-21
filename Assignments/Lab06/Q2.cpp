#include <iostream>
#include <ctime> 

using namespace std;

class ImageData{
    public:
    int pixel1;
    int pixel2;
    ImageData(int p1, int p2): pixel1(p1), pixel2(p2){}
    void display()
    {
        cout<<pixel1<<" x "<<pixel2<<endl;
    }
};

class Image
{
    int width, height;
    ImageData* imgdata;
    public:
    //IMP
    Image(int w, int h, const ImageData& data) : width(w), height(h), imgdata(new ImageData(data)) {}
    Image(const Image& obj)
    {
        width=obj.width;
        height=obj.height;
        imgdata=new ImageData(*obj.imgdata); // Syntax
    }
    ~Image() 
    {
        delete [] imgdata;
    }
    void display() const
    {
        cout<<"Image width: "<<width<<endl;
        cout<<"Image height: "<<height<<endl;
        imgdata->display();
    }
    void updateData()
    {
        if (imgdata->pixel1<=0)
        {
            srand(time(nullptr));
            int randomNumber = (rand() % 255) + 1;
            imgdata->pixel1=randomNumber;
        }
        if (imgdata->pixel2 <= 0)
        {
            srand(time(nullptr));
            int randomNumber= (rand()%255)+1;
            imgdata->pixel2=randomNumber;
        }
    }
};

int main()
{
    cout<<"Rumaisa Kashif, BS AI 2A, 23K0744"<<endl;
    ImageData imgdata(0,5);
    Image img1(2,3, imgdata);
    Image img2=img1;
    img1.display();
    cout<<"\n----------------------"<<endl;
    img2.display();
    cout<<"\n----------------------"<<endl;
    img1.updateData();
    img1.display();
    cout<<"\n----------------------"<<endl;
    img2.display();
}
