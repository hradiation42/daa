#include<bits/stdc++.h>
using namespace std;


int mcm(int p[], int n){

	int m[n][n];
	int i, j, k, l, q;

	for(int i =1 ;i<n;i++){
		m[i][i]=0;
	}

	for(l=2;l<n;l++){

		for(i = 1;i<n-l+1;i++){
			
			j = i + l - 1;
			m[i][j] = INT_MAX;
				for(k=i; k<=j-1;k++){
				q = m[i][k]+m[k+1][j] + p[i-1]*p[k]*p[j];

				if(q<m[i][j]){
					m[i][j]=q;
				}	
			}
		}
	}
	return m[1][n-1];
}


int main(){

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif
	
	cout<<"matrix chain multiplication"<<endl;
	int arr[] = { 1, 2, 3, 4};
	cout << mcm(arr, 4)<<endl;
	cout<<"shreykhandelwal_209303098"<<endl;
	return 0;
}
