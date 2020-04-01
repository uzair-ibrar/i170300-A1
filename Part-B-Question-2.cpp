#include<iostream>
#include <sstream>
#include <string>
using namespace std;
int main()
{
	string text,pattern,s1,s2;
	int element1,element2,patt;
	int modulo;
	cout<<"Enter the text ==>>";
	cin>>text;
	int spurious_hits=0;
	cout<<endl;
	cout<<"Enter the pattern ==>>";
	cin>>pattern;
	cout<<endl;
	cout<<"Enter the modulo ==>>";
	cin>>modulo;
	cout<<endl;
	//cout<<text[0];
	element1=pattern[0]-48;
	element2=pattern[1]-48;
	patt=element1*10+element2;
	for(int i=0;i<text.size()-1;i++){
		element1=text[i]-48;
		element2=text[i+1]-48;
		//cout<<(element1*10+element2)%11<<endl;
		if(((element1*10+element2)%modulo)==patt%modulo)
		{
			spurious_hits++;
		}	
	}
	cout<<spurious_hits;
}
