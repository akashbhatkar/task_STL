#include <iostream>

using namespace std;

class Complex
{
private: int img;
public:
    Complex(){}
    Complex(int i)
    {
        img=i;

    }

    Complex operator++()
    {
        Complex temp;
        temp=++img;
        return temp;
    }
    Complex operator ++(int)
    {
        Complex temp;
        temp=img++;
        return temp;
    }

    void getdata()
    {
        cout<<img<<endl;
    }

    Complex operator --()
    {
        Complex temp;
        temp=--img;
        return temp;
    }
    Complex operator --(int)
    {
        Complex temp;
        temp=img--;
        return temp;
    }

};

int main()
{
    Complex c1(10);
    Complex c2=c1++;
    c2.getdata();
    Complex c3=++c1;
    c3.getdata();
    c2=c1--;
    c2.getdata();
    c2=--c1;
    c2.getdata();

}
