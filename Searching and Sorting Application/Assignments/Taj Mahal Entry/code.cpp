#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
   // cout << ceil();
    long long *w = new long long[n];
    long long min;
    cin >> w[0];
    // cout << w[0];
    long long t[n];
    int sum = (w[0]-0);
    if(sum<0 && sum<n)
        t[0] = -1;
    else
        t[0] = sum/n;
  
   // cout << t;
    if((w[0]-0)%n != 0)
            t[0] = t[0]+1;
    min = 0 + t[0]*n;
    // cout << min;
    int m = 0;
    for(long long i = 1; i<n; i++)
    {
        cin >> w[i];
        sum = (w[i]-i);
        if(sum<0 && sum<n)
            t[i] = -1;
        else
            t[i] = sum/n;
        if((w[i]-i)%n != 0)
            t[i] = t[i]+1;
        //cout << t;
        t[i] = i + n*t[i];   
         // cout << t[i];
        if(min>=t[i])
        {
            m = i;
            min = t[i];
            // cout << m<< endl;
        }
    }
    cout << (m+1);
//     if(min==0)
//         min = 1;
//     long long pos =0;
//     while(1)
//     {
//         // if(min == 0)
//         // {
//         //     cout << 
//         // }
//         if(w[pos]<=0)
//             break;
//         for(long long i = 0; i<n; i++)
//         {
//             w[i] = w[i] - min;
//         }
//         pos = (pos+min)%n;
//         long long j = 0;
//         w hile(j++)
//         {
//             if(w[j]>0)
//             {
//                 min = w[j];
//                 break;
//             }
//         }
//         for(long long i = j; i<n; i++)
//         {
//             if(min>w[i] && w[i]>0)
//                 min = w[i];
//         }
//     }
    
//     cout << pos+1;
    
    
	return 0;
}
