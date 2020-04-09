#include<iostream>
using namespace std;

int power(int x, int y)
{
    if(y==0)
        return 1;
    else
    {
        int p = x;
        p = p*power(x,y-1);
        return p;
    }
}

int main() {
	// Write your code here
	int x, y;
    cin >> x >> y;
    int sol =  power(x,y);
    cout << sol;
}
