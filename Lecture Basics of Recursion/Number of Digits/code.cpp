int count(int n){
    if(n == 0){
        return 0;
    }
    else{
        int smallAns = count(n / 10);
        return smallAns + 1;
    }
}

#include<iostream>
#include "Solution.h"
using namespace std;


int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


