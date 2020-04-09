void merge(int input[], int l, int mid, int r)
{
    int size1 = mid-l+1, a[size1];
    int size2 = r-mid, b[size2];
    for(int i = 0; i<size1; i++)
        a[i] = input[l+i];
    for(int i = 0; i<size2; i++)
        b[i] = input[mid+1+i];
    int i = 0;
    int j = 0;
    int k = l;
    while(i != size1 && j != size2 )
    {
        if(a[i]<b[j])
            input[k] = a[i++];
        else
            input[k] = b[j++];
        k++;
    }
    while(i!=size1)
        input[k++] = a[i++];
    while(j!=size2)
        input[k++] = b[j++];
}
void m_sort(int input[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        m_sort(input, l, mid);
        m_sort(input, mid+1, r);
        merge(input, l, mid, r);
    }
}
void mergeSort(int input[], int size){
	// Write your code here
    m_sort(input,0,size-1);
        
}
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}
