#include<bits/stdc++.h>
using namespace std;
int main() {

    int n,k,l;
    cin >> n >> k >> l;
    int *seq = new int[n];
    for(int i = 0; i<n; i++)
        cin >> seq[i];
    
    int chk = seq[0], flag = 0;
    for(int i = 0; i<n; i++)
    {
        if(chk!=seq[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout << 0;
        return 0;
    }
    
    int min = seq[0], max = seq[0];
    for(int i = 0; i<n; i++)
    {
        if(min>seq[i])
            min = seq[i];
        if(max<seq[i])
            max = seq[i];
    }
    
    int cost = 0;
    flag = 0;
    for(int i = min; i<=max; i++)
    {
         int in = 0, dec = 0;
        for(int j = 0; j<n; j++)
        {
            if(seq[j]>i)
                dec = dec + seq[j] - i;
            else
                in = in + i - seq[j];
        }
        if(dec>in)
            continue;
        // cout << in << " " << dec << endl;
      //  cout << i << endl;
        int temp = dec*k + (in-dec)*l;
        if(flag==0)
        {
            flag = 1;
            cost = temp;
        }
        else if(cost>temp && flag == 1)
            cost = temp;
    }
    cout << cost;
	// Write your code here
}
