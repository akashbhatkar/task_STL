//WAP for insert remove and display of map class
#include <iostream>
#include<map>

using namespace std;

int main()
{

    map<int,int> m2;
    m2.insert(pair<int,int>(1,10));
    m2.insert(pair<int,int>(2,20));
    m2.insert(pair<int,int>(3,30));
    m2.insert(pair<int,int>(4,40));
    m2.insert(pair<int,int>(5,50));
    m2.insert(pair<int,int>(6,60));

    //displaying elements from the map
    map<int,int>::iterator it1;
    for(it1=m2.begin();it1!=m2.end();it1++)
        cout<<it1->first <<"-"<<it1->second<<endl;
    cout<<endl;


    //removing elements
    m2.erase(1);
    m2.erase(2);
     for(it1=m2.begin();it1!=m2.end();it1++)
        cout<<it1->first <<"-"<<it1->second<<endl;
    cout<<endl;
}
