// WAP to overload the operator with values 
#include <iostream>

using namespace std;
class number
{
  int a;
  public:
  number(int b=0)// it is necessary to initialize it as 0


  {
      a=b;
  }
  friend number operator +(number , int );
  friend number operator +(int ,number );
  void display()
{
    cout<<a<<endl;
}
};
number operator +(number obj, int x)
{
    number temp; 
    temp.a=obj.a+x;
    return temp;
}
number operator +(int x,number obj)
{
    number temp; 
    temp.a=x+obj.a;
    return temp;
}

int main()
{
    number obj(10);
    number obj2=obj+100;
    obj.display();
    obj2.display();
    
}