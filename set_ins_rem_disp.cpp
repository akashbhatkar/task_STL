//WAP for insert remove and display of set class
#include <iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s1;

//insert operation
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);
    s1.insert(60);
    s1.insert(70);

    //display operation
    set<int>::iterator it1,it2;

    for(it1=s1.begin();it1!=s1.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;
    it2=s1.end();

    //delete operation
    s1.erase(s1.begin());
    s1.erase(s1.begin()++);
    s1.erase(50);


    for(it1=s1.begin();it1!=s1.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;




}
