//WAP for merging two vectors
#include <iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> v1{1,2,5,9,3,4};
    vector<int> v2{8,6,9,1,2};
    vector<int> v3;

    v3.insert(v3.end(),v1.begin(),v1.end());
    v3.insert(v3.end(),v2.begin(),v2.end());

    vector<int>::iterator it1;
    for(it1=v3.begin();it1!=v3.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;



}
