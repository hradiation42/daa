#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    
    if(n<2) return n;

    int prev2=0, prev1=1, cur=0;
    for(int i=2;i<=n;i++){
        cur = prev2+prev1;
        prev2 = prev1;
        prev1 = cur;
    }
    return cur;
}


int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif
	cout<<"fibonacci series:"<<endl;

	int n;
	cin>>n;
	int ans = fib(n);
	cout<<ans<<endl;
	cout<<"shreykhandelwal_209303098"<<endl;
}
