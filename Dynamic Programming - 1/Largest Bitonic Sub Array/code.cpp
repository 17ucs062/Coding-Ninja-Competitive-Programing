
int longestBitonicSubarray(int *input, int n) {

    /* Don't write main().
     	* the input is already passed as function argument.
     	* Taking input and printing output is handled automatically.
     	*/
    int* output = new int[n];
    output[0] = 1;
    for (int i = 1; i < n; i++) {
        output[i] = 1;
        for (int j = i - 1; j >= 0; j--) {
            if (input[j] >= input[i]) {
                continue;
            }
            int possibleAns = output[j] + 1;
            if (possibleAns > output[i]) {
                output[i] = possibleAns;
            }
        }
    }
    
    int* output1 = new int[n];
    output1[n-1] = 1;
    for (int i = n-1; i >= 0; i--) {
        output1[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (input[j] >= input[i]) {
                continue;
            }
            // output[i]++;
            int possibleAns = output1[j] + 1;
            if (possibleAns > output1[i]) {
                output1[i] = possibleAns;
            }
        }
    }

    // for(int i = 0; i<n; i++)
    //     cout << output[i] << " " << output1[i] << endl;
    int best = 0;
    for(int i = 0; i<n; i++)
        output[i]+=output1[i];
    for (int i = 0; i < n; i++) {
        if (best < output[i]) {
            best = output[i];
        }
    }
    delete [] output;
    delete [] output1;
    return best-1;

}

#include<iostream>
using namespace std;
#include "solution.h"

int main() {
  int n, input[100000];
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>input[i];
  }
  cout<<longestBitonicSubarray(input, n);
  return 0;
}
