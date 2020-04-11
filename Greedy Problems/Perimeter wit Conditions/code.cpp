#include<bits/stdc++.h>
using namespace std;
int main() {

    multiset <int, greater <int> > side;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        int x;
        cin >> x;
        side.insert(x);
    }
    int flag = 0, a, b, c;
    for(auto i = side.begin(); i != side.end(); i++)
    {
        a = *i;
        b = *(++i);
        c = *(++i);
        i--;i--;
        if(a+b<c)
            continue;
        if(a+c<b)
            continue;
        if(b+c<a)
            continue;
        flag = 1;
        break;
    }
    cout << c << " " << b << " " << a;
	// Write your code here
    return 0;
}
