#include<bits/stdc++.h>
using namespace std;

bool possible_palindrome(string s)
{
	map<char,int>m;
	for(int i=0;i<s.length();i++){
		m[s[i]]++;
	}
	
	int oc=0;
	for(auto x:m){
		if(x.second%2!=0){
			oc++;
		}
		if(oc>1){
			return false;
		}
	}
	return true;
}
int main(){
	string s;
	cin>>s;
	if(possible_palindrome(s)){
		cout<<"possible";
	}
	else
	{
		cout<<"Not possible";
	}
}
