#include <string>
using namespace std;
string input[10] ={ "", "","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    int m = 1;
    if(num == 0)
        return 1;
    else
    {
        m = keypad(num/10,output);
        int n = num%10;
        int s = input[n].size();
        //         // cout << m << endl;
        if(m==0)
            return 0;
        if(m>1){
            int k = 0;
            for(int i = 0; i<s; i++)
            {
                // cout << "harsh";
                for(int j = 0; j<m; j++)
                {
                    output[k] = output[j];
                    k++;
                }
            }
        }
        //         if(((num%10>= 2 && num%10 <=6) || num%10 == 8))
        //         {
        //             if(m>1){
        //                 int k = 0;
        //                 for(int i = 0; i<3; i++)
        //                 {
        //                     // cout << "harsh";
        //                     for(int j = 0; j<m; j++)
        //                     {
        //                         output[k] = output[j];
        //                         k++;
        //                     }
        //                 }
        //             }
        //             // for(int i = 0; i<3;)
        //             // {
        //             int i = 0;
        // if(num%10 == 2)
        // {
        int k = 0;
        for(int i = 0; i<s; i++)
        {
            // cout << "harsh";
            for(int j = 0; j<m; j++)
            {
                output[k] = output[k] + input[n][i];
                k++;
            }
        }
        // for(int j = 0, i = 0; j<m*s; j++, i++)
        //     output[j] = output[i%s] + input[i%s];
        return m*s;
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'b';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'c';
        //             }
        //             if(num%10 == 3)
        //             {
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'd';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'e';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'f';

        //             }
        //             if(num%10 == 4)
        //             {
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'g';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'h';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'i';

        //             }
        //             if(num%10 == 5)
        //             {
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'j';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'k';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'l';

        //             }
        //             if(num%10 == 6)
        //             {
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'm';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'n';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'o';

        //             }
        //             if(num%10 == 8)
        //             {
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 't';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'u';
        //                 for(int j = 0; j<m; j++)
        //                     output[i++] = output[i] + 'v';

        //             }
        //             // }
        //             return  m*3;

        //         }
        //         else if(num%10 == 7)
        //         {
        //             if(m>1){
        //                 int k = 0;
        //                 for(int i = 0; i<4; i++)
        //                 {
        //                     // cout << "harsh";
        //                     for(int j = 0; j<m; j++)
        //                     {
        //                         output[k] = output[j];
        //                         k++;
        //                     }
        //                 }
        //             }
        //             // for(int i = 0; i<4;)
        //             // {
        //             int i = 0;
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'p';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'q';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'r';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 's';
        //             // }
        //             return  m*4;
        //         }
        //         else if(num%10 == 9)
        //         {
        //             // for(int i = 0; i<4;)
        //             // {
        //             if(m>1){
        //                 int k = 0;
        //                 for(int i = 0; i<4; i++)
        //                 {
        //                     // cout << "harsh";
        //                     for(int j = 0; j<m; j++)
        //                     {
        //                         output[k] = output[j];
        //                         k++;
        //                     }
        //                 }
        //             }
        //             int i = 0;
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'w';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'x';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'y';
        //             for(int j = 0; j<m; j++)
        //                 output[i++] = output[i] + 'z';
        //             // }
        //             return  m*4;
        //         }
        //         else
        //             return 0;


        //         //output[i] =  


        //     }
    }
}
// // else
// // m = m*4;

#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
