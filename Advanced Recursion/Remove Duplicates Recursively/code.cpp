void removeConsecutiveDuplicates(char *input) {
	/* Don't write main().
	* Don't read input, it is passed as function argument.    
	* Change in the given string itself.
	* No need to return or print anything
	* Taking input and printing output is handled automatically.
	*/

    if(input[0]!='\0')
    {
        if(input[0] == input[1])
        {
            int i = 0;
            for(i = 0; input[i]!='\0'; i++)
                input[i] = input[i+1];
            removeConsecutiveDuplicates(input);    
        }
        removeConsecutiveDuplicates(input+1);
    }

}

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
