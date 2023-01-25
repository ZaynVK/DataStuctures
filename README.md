# DataStuctures
Arrays:
greater elements using maps:-
#include<bits/stdc++.h>
using namespace std;
void printGreater(int arr[]){
    map<int,int> m;
    for(int i=0;i<5;i++){
        m[arr[i]]++;
    }
    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
        int freq=it->second;
        it->second=cum_freq;
        cum_freq+=freq;
    }
    for( int i=0;i<5;i++){
        cout<<m[arr[i]]<<" ";
    }
}
int main()
{
    int arr[]={2,8,10,5,8};
    printGreater(arr);
}
