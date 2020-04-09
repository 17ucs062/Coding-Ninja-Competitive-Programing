#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<float, int> m;
    float *arr = new float[n];
   for(int i = 0; i<n; i++)
        cin >> arr[i];
    
    int *dept = new int[n];
    for(int i = 0; i<n; i++)
        cin >> dept[i];
    
  //  cout << m[605] << endl;
    for(int i = 0; i<n; i++)
    {
        //cout << m[arr[i]] << " ";
        while(m[arr[i]]!=0)
        {
           // cout << "hello";
            arr[i] = arr[i] + .01; 
        }
       // cout << arr[i] << " ";
        m[arr[i]] = dept[i];
        // m.insert(make_pair(arr[i],dept[i]));
        //cout << m[arr[i]] << " ";
    }
    // auto it;
   // cout << m[1];
    int chair = 0, flag = 0, dep = 0, tdep = 0;
//     // int ar = 0, dept = 0;
     for(auto it = m.begin(); it!=m.end();)
     {
         //cout << it->first << " ";
        flag = 0;
        dep = 0;
       it++;
     
        for(auto jt = m.begin(); jt!=it; jt++)
        {
            if(jt->second <= it->first)
                dep++;
            if(jt->second <= it->first && tdep <= dep-1 )
            {
                //cout << it->first << endl;
                tdep++;
                flag =1;
                break;
            }
            
        }
        if(flag == 0)
            chair++;
        // if(ar==0)
        // {
        //     ar++;
        //     chair++;
        // }
        // else if(ar>0)
        // {
        //     if(arr[i]>minimum(dept[i])
        // }
    }
    cout << chair;
    // Write your code here

}
