// arr - input array
// size - size of array
#include<bits/stdc++.h>
using namespace std;
// #include<map>
// #include<iterator>
int FindUnique(int arr[], int size){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    unordered_map<int, int> m;
    //map<int,int> m;
    for(int i = 0; i<size; i++)
    {
        m[arr[i]]++;
    }
    
    auto i = m.begin();
    for(i = m.begin(); i!=m.end(); i++)
    {
        if(i->second==1)
            return i->first;
    }
}
#include<iostream>
#include <algorithm>
#include "solution.h"
using namespace std;

int main() {

	int size;

	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
	cout<<FindUnique(input,size)<<endl;
		
	return 0;
}
