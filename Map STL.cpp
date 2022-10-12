#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {   
     map<string,int>s;
    int q;
    cin>>q;
        for(int i=0;i<q;i++)
        {
           int t,n,m;
            cin>>t;
            switch(t)
                {
                case 1:
                {
                    string name;
                    int marks;
                    cin>>name>>marks;
                    map<string,int>::iterator itr=s.find(name);
                    if(itr==s.end())
                    s.insert(make_pair(name,marks));
                    else
                    itr->second+=marks;
                    break;
                }
                case 2:
                {
                    string name;
                    cin>>name;
                    s.erase(name);
                    break;
                }
                case 3:
                {
                    string name;
                    cin>>name;
                    map<string,int>::iterator itr=s.find(name);
                    if(itr==s.end())
                        cout<<"0"<<endl;
                    else
                        cout<<itr->second<<endl;
                    break;
                }
            }
        }
    return 0;
}
