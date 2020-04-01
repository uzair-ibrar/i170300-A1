/*
	One of the solution to increase the efficiency of the naive algorithm is
	--To move the index j of the pattern multiple as we know in naive algorithm we slide the pattern every time
	we got the mismatched by 1. let's suppose we have a string of text as ..aaabcaa.. and pattern as ..abb..
	when we'll slide in naive algorithm on index 2 we'll start getting the matched pattern but when it'll move on
	b of pattern at index 2 of pattern will mismatch the c of text at index 4 then if we compare the previous indexes
	1 of pattern and 3 of text and slide the pattern by matched size we'll get 2 slides which will increase the
	efficiency of naive algprithm.
	Yes, it'll be the efficient solution 
*/

#include <iostream> 
using namespace std; 
int main()  
{  
    string text,pattern;
    cout<<"Enter the text ==>> ";
    cin>>text;
    cout<<endl;
    cout<<"Enter the pattern ==>> ";
    cin>>pattern;
    int patternSize = pattern.size();  
    int textSize = text.size();  
    int i = 0;
	int j;  
    while (i <= textSize - patternSize)  
    {  
         
        for (j = 0; j < patternSize; j++)  
            if (text[i + j] != pattern[j])  
                break;  
        if (j == patternSize)  
        {  
            cout << "Pattern matched at index ==>> " << i << endl;  
            i = i + patternSize;  
        }  
        else if (j == 0)  
            i = i + 1;  // sliding pattern by 1
        else
            i = i + j; // slide the pattern by j ** This is the step which increases the efficiency of the naive algorithm*** 
    }  
    return 0;  
}  
