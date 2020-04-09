void print(int n){
    if(n == 1){
        cout << n << " ";
    }
    else{
        print(n - 1);
        cout << n << " ";
    }
}

#include<iostream>
using namespace std;
#include "Solution.h"

int main(){
    int n;
    cin >> n;
  
    print(n);
}


