//WAP to merge two lists
#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l1={1,2,5,6,3,7};
    list<int> l2{8,5,6,1,3};
    list<int> l3;

    l3.insert(l3.end(),l1.begin(),l1.end());
    l3.insert(l3.end(),l2.begin(),l2.end());

    list<int>::iterator it1;
    for(it1=l3.begin();it1!=l3.end();it1++)
        cout<<*it1<<"  ";
    cout<<endl;
   }

