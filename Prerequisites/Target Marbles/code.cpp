#include<bits/stdc++.h>
using namespace std;

void test(int ci, int cj, int a[100])
{
    for(int i = ci; i<=cj; i++)
        cout<< a[i] << " ";
}

int main() {

    int n,t;
    cin >> n >> t;
    int a[n], ci, cj;
    for(int i = 0; i<n; i++)
        cin >> a[i];
    int sum = 0, flag = 0;
    for(int i = 0; i<n; i++)
    {
        ci = i;
        cj = i;
        sum = a[i];
        if(sum == t)
        {
            cout << "true" << endl;
            flag++;
            test(ci,cj,a);
            break;
        }
        for(int j = i+1; j<n; j++)
        {
            cj = j;
            sum = sum + a[j];
            if(sum==t)
            {
                flag++;
                break;
            }
            if(sum>t)
                break;
        }
        if(flag >= 1)
        {
            cout << "true" << endl;
            test(ci,cj,a);
            break;
        }
    }
    
    if(flag == 0)
        cout << "false";
   /* else{
        cout << "true";
        for(int i = 0; i<k; i++)
            cout << ans[i];
    }*/
	// Write your code here
}
