#include<bits/stdc++.h>
using namespace std;
vector <int> next_bigger(int n,vector<int> arr){
	if(n==1){
		return arr;
	}
	//cout<<"hjkhkhuh";
	int i;
	for(i=n-1;i>0;i--){
		if(arr[i]>arr[i-1]){
			break;
		}		
	}
	if(i!=0){
		for(int j=n-1;j>=i;j--){
			if(arr[i-1]<arr[j]){
			//	cout<<arr[i-1]<<"   "<<arr[j];
				swap(arr[i-1],arr[j]);
				break;
			}
		}
	}
	
	reverse(arr.begin()+i,arr.end());
	return arr;
}
int main(){
	vector<int>v;
	int x;
	while(cin>>x){
		v.push_back(x);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i];
	}
	vector<int>ans;
	//cout<<v.size();
	ans=next_bigger(v.size(),v);
	if(ans.size()==0){
		cout<<"NIL";
	}
	else{
	
		for(int i=0;i<ans.size();i++){
			cout<<ans[i];
		}
	}
}
