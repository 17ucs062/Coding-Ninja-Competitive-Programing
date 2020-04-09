#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, c1, c2;
    cin >> n >> c1 >> c2;
    string bulbs;
    cin >> bulbs;
    long long cost = 0, all_1 = 0;
    long long s = 0, i = 0, j, flag =0,k = 0;
    if(n==0)
    {
        cout << 0;
        return 0;
    }
    // if(c1<c2)
    // {
        int count = 0;
        for(i = 0; i<n; i++)
        {
            // if(bulbs[i]== '1' && bulbs[i+1] == '0')
            // {
            //     cout << i << " " << i+1 << endl;
            //     count++;
            //     i++;
            // }
            if(bulbs[i] == '0')
            {
                count++;
                while(bulbs[i++] == '0');
                i--;
            }
                // flag = 1;
                
        }
        // cout << count << endl;
        cost = min((count-1)*c1 + c2, count*c2);
        if(count == 0)
            cout << 0;
        else
            cout << cost;
        // cout << endl << count;
//         for(i = 0; i<n;)
//         {
//             j = i;
//             all_1 = 0;
//             while(bulbs[i]=='0' && i<n)
//             {
//                 flag = 1;
//                 i++;
            
//             }
//             if(i>=n)
//                 break;
//             while(flag==1 && bulbs[i]=='1' && i<n)
//             {
//                 all_1++;
//                 i++;
//                 // k = j + all_1;
//             }
//             if(i>=n)
//                 break;
//             if(flag==1 && bulbs[i] == '0' && i<n)
//             {
//                 // cout << "harsh" << i<< " " << j << endl;
//                 cost = cost + c1;
//                 string str;
//                 if(j==0)
//                       str = bulbs.substr(j,i);
//                 else
//                      str = bulbs.substr(j,i-1);
//                 // cout << str << endl ;
//                 reverse(str.begin(),str.end());
//                 // cout << str;
//                 // bulbs[0] = str[0];
//                 // bulbs[1] = str[1];
//                 // cout << str.length() << " " << i-1-j << endl;
//                 long long d = 0;
//                 for(long long f = j; f<i ; f++)
//                 {
//                     bulbs[f] = str[d];
//                     d++;
//                 }
//                 // cout << "after " << str << endl;
//                 i = j + all_1;
//                 k = i;
//                 flag = 0;
//                 continue;
//             }        
//             if(bulbs[i]=='1' && flag==0)
//             {
//                 i++;
//                 continue;
//             }
//         }
//         flag = 0;
//         for(long long i = k; i<n; i++)
//         {
//             if(bulbs[i]=='0')
//             {
//                 flag =1;
//                 bulbs[i] = 1;
//             }
//         }

//         if(flag == 1)
//             cost = cost + c2;
//     }
//     else
//     {
//         int all_0 = 0;
//         for(long long i =0;i<n;i++)
//         {
//             //cout << bulbs[i] << " ";
//             if(bulbs[i] == '0')
//             {
//                 all_0++;
//                 while(bulbs[i++] == '0');
//                 i--;
//             }
//             // else
//                 // i++;
//         }
//         cost = c2*(all_0);
//         cout << cost;
//     }
    
    return 0;
}
