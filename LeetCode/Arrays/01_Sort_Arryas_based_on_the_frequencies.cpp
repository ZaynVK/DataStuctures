#include <bits/stdc++.h>
using namespace std;

 static bool compare(pair<int,int> &p1, pair<int,int> &p2){
  if( p1.second == p2.second) return p1.first < p2.first;
  return p1.second > p2.second;
}

void sortFreq(int arr[], int n){
  unordered_map<int,int> freq;
  for(int i = 0; i<n; i++) freq[arr[i]]++;
  vector<pair<int,int>> freqVec(freq.begin(),freq.end());
  sort(freqVec.begin(), freqVec.end(), compare);
  int i = 0;
  for( auto &p:freqVec){
    int count = p.second;
    while( count--){
      arr[i++] = p.first;
    }
  }
  }
