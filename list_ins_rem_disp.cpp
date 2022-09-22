//WAP for insert delete and display in the list
#include <iostream>
#include<list>
using namespace std;

int main()
{
    list<int> l1;
    //insertion of data into list

    l1.push_front(10);
    l1.push_front(20);
    l1.push_front(30);
    l1.push_front(40);
    l1.push_front(50);
    l1.push_front(60);
    l1.push_back(70);
    l1.push_back(80);
    l1.push_back(90);
    l1.push_back(100);

    //display of data from list
    list<int>::iterator it1;
    for(it1=l1.begin();it1!=l1.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;

    l1.pop_front();
    l1.pop_front();
    l1.pop_back();
    l1.pop_back();

    //display of data from list

    for(it1=l1.begin();it1!=l1.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;
}
