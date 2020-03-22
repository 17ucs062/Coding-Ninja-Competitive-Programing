#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i<n; i++)
        cin >> a[i];
	int max = 0;
    for(int i = 0; i<n-1; i++)
        for(int j = i+1; j<n; j++)
        {
            if(max < a[j]-a[i])
            {
                max = a[j]-a[i];
            }
        }
    cout << max;
    // Write your code here
}
/*Alternate O(n) approach
#include<iostream>
using namespace std;
void profit( int arr[],int n) {
	int minindex=0;
	int maxprofit=0;
	int i=1; 
	while(i<n) {
		if(arr[i]<arr[minindex]) {
			minindex=i;
		}
		int cp=arr[i]-arr[minindex];
		if(cp>maxprofit) {
			maxprofit=cp;
		}
		i++;
	}
	cout<<maxprofit;
}
int main() {
	int n;
	cin>>n;
	int* arr=new int[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	profit(arr,n);
}
*/
