//Write a program for insert remove and display elements in vector class
#include <iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int> v1;
    //insertion into vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);
    //display vector
    vector <int>::iterator it1;

    for(it1=v1.begin();it1!=v1.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin(),50);
    v1.insert(v1.begin()+3,70);
    v1.insert(v1.end()-1,80);
    v1.insert(v1.end(),100);



    for(it1=v1.begin();it1!=v1.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;


    //delete from vector
     v1.pop_back();
     v1.pop_back();

     for(it1=v1.begin();it1!=v1.end();it1++)
     {
         cout<<*it1<<" ";
     }



}
