#include<bits/stdc++.h>
//#incude<string>
char* uniqueChar(char *str){
    //Write your code here
//      vector<char> v(strlen(str));
//     //cout << strlen(str) << endl;
//     for(int i = 0; i<strlen(str); i++)
//         v[i] = str[i];
//     vector<char>::iterator ip; 
//     ip = unique(v.begin(), v.end());
    
//     v.resize(distance(v.begin(), ip));
//      for(int i = 0; i<v.size(); i++)
//         cout << v[i];
//     str[v.size()] = '\0';
   
//         //str[i] = v[i];
    unordered_map<char,int> exists; 
  int index = 0;  
  for(int i=0;i<strlen(str);i++){ 
    if(exists[str[i]]==0) 
    { 
      str[index++] = str[i]; 
      exists[str[i]]++; 
    } 
  } 
    str[index] = '\0';
    return str;
    //return str;
        // str.unique();
        // return str;
//     unordered_set<char> s;
//     int i = 0;
    
//     while(str[i]!='\0')
//     {
//         //cout << str[i];
//         s.insert(str[i]);
//         //cout << s[i];
//         i++;
//     }
//   // unordered_set<char> :: iterator it;
//     auto it=s.begin();
//     // while(it != s.end())
//     // {
//     //    cout << *it << endl;
//     //    it++;
//         //arr[j] = *it;
//         //j++;
//         //it++;
//    // }
//     char arr[s.size()];
//     //cout << s.size() << endl;
//     int j = s.size()-1;
//    // cout << j << endl;
//     while(it != s.end())
//     {
//         arr[j] = *it;
//       // cout << *it << " "<<j;
//         j--;
//         it++;
//     }
//    // cout << "harsh" << endl;
//      //  str[s.size()] = '\0';
//     for(int i = 0; i<s.size(); i++)
//     {
//         str[i] = arr[i];
//         //cout << arr[i];
//      }
//     // cout << arr <<endl;
 
//    // strcpy(str,arr);
    
//      return str;
}

#include<iostream>
using namespace std;
#include "solution.h"

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
