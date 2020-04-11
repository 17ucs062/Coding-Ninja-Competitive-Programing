#include<bits/stdc++.h> 
using namespace std; 

// An interval has a start time and end time 
struct Interval 
{ 
	long long start, end; 
}; 

// Compares two intervals according to staring times. 
bool compareInterval(Interval i1, Interval i2) 
{ 
	return (i1.end < i2.end); 
} 

int main() 
{ 
	// Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} }; 
	// int n = sizeof(arr)/sizeof(arr[0]); 

	// sort the intervals in increasing order of 
	// start time
    long long n;
    cin >> n;
    Interval arr[n];
    for(long long i = 0; i<n; i++)
        cin >> arr[i].start >> arr[i].end;
	sort(arr, arr+n, compareInterval); 
	// cout << n << endl;
	// cout << "Intervals sorted by start time : \n"; 
	long long count = 1;
    long long last = arr[0].end;
    for(long long i=1; i<n; i++)
    {
        if(last <= arr[i].start)
        {
            last = arr[i].end;
            count++;
        }
    }
        
    cout << count;
	// cout << "[" << arr[i].start << "," << arr[i].end 
			// << "] "; 

	return 0; 
}
