#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while(t--)
    {
        long long size, n;
        // set<long long> s;
        cin >> size >> n;
        // for(long long i = 0; i<size; i++)
        // {
        //     long long x;
        //     cin >> x;
        //     s.insert(x);
        // }
        // //int i, flag = 0;
        // auto it = s.begin();
        // long long arr[size], k = 0;
        // for(it; it!=s.end(); it++)
        // {
        //     arr[k] = *it;
        //     k++;
        // }
        long long arr[size];
        for(long long i = 0; i<size; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+(size));
        
        // cout << n << endl;
        // cout << size-1 << endl;
        if(n == 1)
        {
            cout << arr[size-1] << endl;
            continue;
        }
        
        long long l = 0, h = arr[size-1] - arr[0];
        long long mid,ans;
        while(l<=h)
        {
            mid = (l+h)/2;
            long long f = 0, j = n-1;
            for(long long c = 1; c<size; c++)
            {
                if(arr[c]-arr[f] >= mid)
                {
                    f = c;
                    j--;
                }
                if(j == 0)
                    break;
            }
            if(j==0)
            {
                l = mid + 1;
                ans = mid;
            }
            else
                h = mid-1;     
        }
        cout << ans << endl;
        //mid = ceil(l+h)/2;
      //  if(mid%2!=0)
            
       //cout << mid-1 << endl;
        // for(i = arr[size-1]; i>0; i--)
        // {
        //     int j = n-1;
        //     int f = 0;
        //     for(long long c = 0; c<k; c++)
        //     {
        //         if(arr[c]-arr[f] >= i)
        //         {
        //             f = c;
        //             j--;
        //         }
        //         if(j == 0)
        //             break;
        //     }
        //     if(j == 0)
        //     {
        //         flag = 1;
        //         break;
        //     }
        //     else
        //         j = n-1;
        // }
//         int max, l = 0;
//         for(i = 1; i<arr[size-1];i++)
//         {
//             int j = n-1;
//             long long mid = (arr[l] + arr[l+1])/2;
//             //i =  arr[l];
//             int f = 0;
//             for(long long c = 1; c<k; c++)
//             {
//                 if(arr[c]-arr[f] >= mid)
//                 {
//                     // if(i==4)
//                     //     cout << arr[c] << " "<<arr[f]<<endl;
//                     f = c;
//                     j--;
//                 }
//                 if(j==0)
//                 {
//                     //cout<< mid << endl;
//                     // if(max<i)
//                     //     max=i;
//                     break;
//                 }
//             }
//             if(j != 0)
//             {
//              //   cout << mid << "  " << (arr[l-1]+arr[l])/2 << endl;
//                 for(i = mid; i>=(arr[l-1] + arr[l])/2; i--)
//                 {   
//                     j = n-1;
//                     f = 0;
//                     for(long long c = 1; c<k; c++)
//                     {
//                         if(arr[c]-arr[f] >= i)
//                         {
//                             // if(i==4)
//                             //     cout << arr[c] << " "<<arr[f]<<endl;
//                             f = c;
//                             j--;
//                         }
//                         if(j == 0)
//                             break;
//                     }
//                     if(j == 0)
//                     {
//                         cout << i <<endl;
//                         break;
//                     }
//                 }
                
//                 break;
//             }
//             else if(j==0 && l+1 == size-1)
//             {
//                 for(i = arr[l+1]; i>=mid; i--)
//                 {   
//                     j = n-1;
//                     f = 0;
//                     for(long long c = 1; c<k; c++)
//                     {
//                         if(arr[c]-arr[f] >= i)
//                         {
//                             // if(i==4)
//                             //     cout << arr[c] << " "<<arr[f]<<endl;
//                             f = c;
//                             j--;
//                         }
//                         if(j == 0)
//                             break;
//                     }
//                     if(j == 0)
//                     {
//                         cout << i <<endl;
//                         break;
//                     }
//                 }
                
//                 break;
//             }
//             else{
//                 j = n-1;
//                 l++;
//             }
//         }
//         // if(flag==1)

        // int arr[2][size];
        // map<int,int> m;
        //         auto it = s.begin();
        //         for(int i = 0; i<size-1;i++)
        //         {
        //             // arr[0][i] = *it - *(it+1);
        //             // arr[]
        //             int z = *it;
        //             int y = *++it;
        //             // m.insert(make_pair(y-z,i));
        //             m[y-z]++;
        //         }

        //         int max = 0;
        //         for(auto i = m.begin(); i!=m.end();i++)
        //         {
        //             // arr[0][i] = *it - *(it+1);
        //             // arr[]
        //             // m.insert(make_pair(*it - *(it+1),i));
        //             if(i->second >= n && max<i->first)
        //                 max = i->first;
        //         }
        //         if(max == 0)
        //         {

        //         }
        //         cout << max;
    }
    // Write your code here
}
