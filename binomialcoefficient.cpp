#include<bits/stdc++.h>
using namespace std;

int binomialcoeff(int n, int k){
	int C[n + 1][k + 1];
	for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i){
                C[i][j] = 1;
            }
            else{
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
            }
        }
    }
    return C[n][k];
}

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	cout<<"binomial coefficient: "<<endl;
	int num1, num2;
	cin>>num1;
	cin>>num2;
	cout<<binomialcoeff(num1, num2)<<endl;
	cout<<"shreykhandelwal_209303098"<<endl;
}
