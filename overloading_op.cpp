//WAP for operator overloading of +,-,* operators
#include<iostream>

using namespace std;

class Complex
{
        private: int real,img;
        public: Complex(int a,int b)
                {
                        real=a;
                        img=b;
                }
                Complex(){}
                void display()
                {
                        cout<<real<<"+i"<<img<<endl;
                }
                Complex operator+(Complex a)
                {
                        Complex temp;
                        temp.real=real+a.real;
                        temp.img=img+a.img;
                        return temp;

                }
                Complex operator -(Complex b)
                {
                        Complex temp;
                        temp.real=real-b.real;
                        temp.img=img-b.img;
                        return temp;
                }
                Complex operator *(Complex c)
                {
                        Complex temp;
                        temp.real=real*c.real;
                        temp.img=img*c.img;
                        return temp;
                }
};

int main()
{

        Complex c1(30,40);
        Complex c2(10,20);
        Complex c3=c1+c2;
        cout<<"Addition of complex=";
        c3.display();

        cout<<"substraction of complex=";
        c3=c1-c2;
        c3.display();
        cout<<"multiplication of complex=";
        c3=c1*c2;
        c3.display();
}
