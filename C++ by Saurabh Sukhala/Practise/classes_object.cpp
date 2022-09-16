#include<iostream>
using namespace std;

class complex
{   
    // private:
    // public:
    int a,b;
    public:
    
    // void show()
    // {
    //     cout<<"a= "<<a<<"b= "<<b<<endl;
    // }
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"a="<<a <<" and "<<"b="<<b;
    }
    
};
int main()
{
    complex c1;
    c1.a=55;
    c1.b=100;
    // c1.show();
    c1.set_data(3,4);
    c1.show_data();
}