/************New and Delete operator overloading **********************/
#include <iostream>

using namespace std;

void * operator new(size_t size)
{
    cout<<"global operator overloading on new"<<endl;
    void *q=malloc(size);
}

void operator delete(void *q)

{
    cout<<"global overloading of delete operator "<<endl;
    free(q);
}
class test
{
    int x;
public: test()
    {
        x=0;
    }

    void * operator new(size_t size)
    {
        cout<<"new operator overloading "<<size<<endl;
        void *p=malloc(size);
        return p;
    }

    void operator delete(void *p)
    {
        cout<<"delete operator overloading"<<endl;
        free(p);
    }
};

int main()
{
  test *t=new test();
  delete t;
  int *q=new int;
  delete q;
}
