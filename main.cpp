#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {2,-1,7,-1,-1,10,-1};
	vector<int> b = {5,8,12,14};
	int l = 0,r = 0;
	int i = 0;
	while(l < a.size() && r < b.size()){
	    while(l < a.size() && a[l] == -1) l++;
	    if(l == a.size()) break;
	    if(a[l] < b[r]) a[i++] = a[l++];
	    else a[i++] = b[r++];
	}
	
	while(l < a.size())
	    a[i++] = a[l++];
	while(r < b.size())
	    a[i++] = b[r++];
	
	for(int i=0;i<a.size();i++)
	 cout<<a[i]<<" ";
	return 0;
}
