/*A Character is given to you and You need to Whether it's is Vowel or Consonant. */

#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	word = toupper(c);
	if(word=='A' || word=='E' || word=='I' || word=='O' || word=='U')
		return true;
	
	return false;
}
int main() {
	char c;
	cin>>c;
	
	if(isvowel(c))
	cout<<"Vowel";
	else cout<<"Consonant";
	
	return 0;
}
