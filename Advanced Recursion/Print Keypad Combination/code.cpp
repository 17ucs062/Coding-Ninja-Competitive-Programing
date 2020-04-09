#include <iostream>
#include <string>
using namespace std;
string input[10] ={ "", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void key(int num, string output)
{
    if(num==0)
        cout << output << endl;
    else{
        int n = num%10;
        int s = input[n].size();
        for(int i = 0; i<s; i++)
        {
            for(int j = 0; j<1;j++){
                string t = input[n][i]+output;
                // output[j] = output[j] + input[n][i]; 
                key(num/10,t);
            }
        }
        
    }
}
void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    if(num==0 || num == 1)
        return;
    string output = "";
    key(num,output);
}
#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}
