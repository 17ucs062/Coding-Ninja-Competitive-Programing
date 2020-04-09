#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> file;    
    string line;
    int count = 0;
    while(getline(cin,line,' '))
    {
        if (line.empty())
            break;
        file.push_back(line);
        count++;
    }
    
    // cout << file[6-1];
    unordered_map<string, int> m;
    // m["harsh"] = 1;
    int c = 0;
    for(int i = 0; i<count; i++)
    {
        // cout << m["harsh"].first;
        // if(file[i]=="Iti")
        //     cout << "it is iti" << " "  << i <<endl;
        // if(i==8)
        //     cout << file[i] << endl;
        m[file[i]]++;
    }
    unordered_map<string,int> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++)
    {
        if(it->second>1)
        {
            cout << it->first << " " <<it->second << endl;
            c=1;
        }
        // if(it->first=="Iti")
        //     cout << it->first << " " <<it->second << endl;
    }
    //cout << it->first << " " <<it->second << endl;
    if(c==0)
        cout << -1;
    return 0;
}
