#include <bits/stdc++.h>
using namespace std;


vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	//Your Code goes here
    vector<int> v;
    map<int,int> s;
    for(int i = 0; i<n; i++)
        s.insert(make_pair(arr[i],i));
    
    // for(auto i = s.begin(); i!=s.end(); i++)
    //     cout << i->first << " "<< i->second <<endl;
    int max = 0, count = 1;
    auto i = s.begin();
    int x = i->first;
    //cout << x;
    auto j = i;
    auto max_j = i;
    i++;
    auto max_i = i;
    
    for(i; i!=s.end(); i++)
    {
        if(x+1 == i->first)
        {
            count++;
            x++;
        }
        else
        {
            x = i->first;
            if(count==max && max_j->second > j->second)
            {
                max_j = j;
                max_i = i;
                max = count;
            }
            if(count>max)
            {
                max_j = j;
                max_i = i;
                max = count;
            }
            count = 1;
            j = i;
        }
        
    }
    if(count==max && max_j->second > j->second)
    {
        max_j = j;
        max_i = i;
        max = count;
    }
    if(count>max)
    {
        max_j = j;
        max_i = i;
        max = count;
    }
    j = max_i;
    for(i = max_j; i!=j; i++)
        v.push_back(i->first);
    return v;

}
#include "Solution.h"
#include<iostream>
using namespace std;

int main(){
  int size;
  
  cin >> size;
  int* arr = new int[size];
  for(int i = 0; i < size; i++){
    cin >> arr[i];
  }
  vector<int> ans = longestConsecutiveIncreasingSequence(arr,size);
  
  for (auto it = ans.cbegin(); it != ans.cend(); it++) {
	cout << *it <<endl;
  }

  delete arr;
}
