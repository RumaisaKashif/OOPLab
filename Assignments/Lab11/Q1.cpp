#include <iostream>

using namespace std;
template <class T>
class Convert{
    protected:
    T val1, val2;
    public:
    Convert(T v1):val1(v1){}
    virtual T compute(){return val2;};
};

template<class T>
class l_to_g:public Convert<T>{
    public:
    l_to_g(T v1):Convert<T>(v1){}
    T compute(){
        this->val2=this->val1*0.264;
        return this->val2;
    }
};

template<class T>
class f_to_c:public Convert<T>{
    public:
    f_to_c(T v1):Convert<T>(v1){}
    T compute(){
        this->val2=(this->val1-32)*(5.0/9.0);
        return this->val2;
    }
};
int main() {
    Convert<float> *convert;
    Convert<float> *convert2;
    l_to_g<float> ltog(12);
    f_to_c<float> ftoc(100);
    convert=&ltog;
    convert2=&ftoc;
    cout<<"12 litres = "<<convert->compute()<<" gallons."<<endl;
    cout<<"100 degrees Farenheit = "<<convert2->compute()<<" Celsius."<<endl;
    return 0;
}
