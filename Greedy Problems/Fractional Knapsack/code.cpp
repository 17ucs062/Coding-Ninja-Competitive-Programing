#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
#define vi vector<int>
#define vs vector<string>
#define vpii vector<pii>
#define all(v) v.begin(), v.end()
#define fr freopen("input.in","r",stdin)
#define fw freopen("output.out","w",stdout)
#define foreach(i,X) for(__typeof((X).begin()) i = (X).begin(); i != (X).end(); i++)
#define forup(i,a,b) for(int i=(a); i<(b); ++i)
#define fordn(i,a,b) for(int i=(a); i>(b); --i)
#define rep(i,a) for(int i=0; i<(a); ++i)
#define gi(x) scanf("%d",&x)
#define gl(x) cin>>x
#define gd(x) scanf("%lf",&x)
#define gs(x) scanf(" %s",x)
#define F first
#define S second
#define pb push_back
#define pf push_front
#define mp make_pair
const int inf = numeric_limits<int>::max();
const LL linf = numeric_limits<LL>::max();
struct Worker {
	int T, x, y;
	Worker() {}
	Worker(int _T, int _x, int _y) {
		T = _T; x = _x; y = _y;
	}
};
vector<Worker> input;
bool way(Worker a, Worker b) {
	if (a.T == b.T) {
		if (a.y == b.y) {
			return a.x < b.x;
		}
		return a.y > b.y;
	}
	return a.T < b.T;
}
int main() {
	// fr;
	// fw;
	int n, x, y, T;
	LL d;
	gi(n);
	cin >> d;
	rep(i, n) {
		gi(T); gi(x); gi(y);
		input.pb(Worker(T, x, y));
	}
	sort(all(input), way);
    // rep(i, n){
    //     cout << input[i].T << " " << input[i].x << " " << input[i].y << endl; 
    // }
	LL area = 0;
	LL bestSpeed = 0, Cost = 0, lastTime = input[0].T;
	rep(i, n) {
		LL additional = bestSpeed * 1LL * (input[i].T - lastTime);
		area += additional;
		if (area >= d) {
			break;
		}
		if (input[i].y > bestSpeed) {
			bestSpeed = input[i].y;
			Cost += input[i].x;
		}
		lastTime = input[i].T;
	}
	cout << Cost;
	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// struct details{
//     long long t,x,y;
//     double ratio;
// };

// bool compareInterval(details i1, details i2) 
// { 
//     return (i1.t < i2.t); 
// } 

// int main()
// {
//     //Write your code here
//     long long n,d;
//     cin >> n >> d;
//     details arr[n];
//     for(int i = 0; i<n; i++)
//     {
//         cin >> arr[i].t >> arr[i].x >> arr[i].y;
//     }

//     for(int i = 0; i<n; i++)
//         arr[i].ratio = arr[i].y/arr[i].x;
//     sort(arr, arr+n, compareInterval);

//     for(int i = 0; i<n; i++)
//         cout << arr[i].t << " " << arr[i].x << " " << arr[i].y << endl;

//     long long cost = arr[0].x;
//     long long speed = arr[0].y;
//     long long last = arr[0].t;
//     int m = arr[0].y;
//     for(int i = 1; i<n-1; i++)
//     {
//         if(speed >= d)
//             break;
//         if(arr[i].t == last)
//         {
//             int j = i;
//             m = arr[i-1].y;
//             int k = i-1;
//             while(arr[j].t == last)
//             {
//                 if(arr[j].y > m)
//                 {
//                     m = arr[j].y;
//                     k = j;
//                 }
//                 j++;
//             }
//             i = j-1;
//             cost = arr[k].x;
//             speed = arr[k].y;
//         }
//         else
//         {
//             int j = i;
//             int last1 = arr[i].t;
//             int k = i;
//             int m1 = INT_MIN;
//             while(arr[j].t == last1)
//             {
//                 if(arr[j].y > m1)
//                 {
//                     m1 = arr[j].y;
//                     k = j;
//                 }
//                 j++;
//             }
//             i = j-1;
//             if(m1 > m)
//             {
//                 speed += arr[k].y;
//             }
//         }
//     }
//     cout << cost << endl;
//     return 0;
// }
