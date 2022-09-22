//WAP ti insert remove and display for que
#include <iostream>
#include<queue>
#include<iterator>

using namespace std;

int main()
{

    queue<char> q1;
    //insert in the queue
    q1.push('a');
    q1.push('b');
    q1.push('c');
    q1.push('d');
    q1.push('e');
    q1.push('f');

    //display in the queue
    for(char it1=q1.front();it1<=q1.back();it1++)
                   cout<<it1<<" ";
    cout<<endl;
    //removing from queue
    q1.pop();
    q1.pop();
    q1.pop();

    for(char it1=q1.front();it1<=q1.back();it1++)
                   cout<<it1<<" ";
}
