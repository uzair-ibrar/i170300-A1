#include<iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	string text;
	int i = 1, j = 0;
	cout<<"Enter the text ==>> ";
    cin>>text;
    int siz = text.size();
    int prefix[siz]={0};
    while (i < text.size()) {
        while (text[i] != text[j] && j > 0) 
		{
            j = prefix[j - 1];
        }
        if (text[i] != text[j]) 
		{
            prefix[i] = j;
            i++;
        } else 
		{    
            prefix[i] = j + 1;
            i++;
            j++;
        }
    }
    cout<<"The prefix is ==>> ";
    for (int k = 0; k < siz; k++) {
        cout<<prefix[k];
    }
    return 0;

}
