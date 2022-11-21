#include<bits/stdc++.h>
using namespace std;

int LCS(char *x,char *y, int s1, int s2){
	int lcs[s1+1][s2+1]; //initializing matrix of size s1+1 and s2+1


	for(int i=0;i<=s1;i++){
		for(int j=0;j<=s2;j++){
			if(i==0 || j==0){
				lcs[i][j]=0;
			}
			else if(x[i-1]==y[j-1]){
				lcs[i][j] = 1+lcs[i-1][j-1];
			}
			else {
				lcs[i][j]=max(lcs[i-1][j], lcs[i][j-1]);
			}
		}
	}
	return lcs[s1][s2];// the last value contains the answer for the
	//longest common string;
}


int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	cout<<"longest common substring: ";

	char x[20], y[20];
	cin.getline(x, 20);//to read the line from the user, the first parameter is for the variable in which its has to be stored
	// the next parameter is for the length of characters you need to take as input.
	cin.getline(y, 20);
	int s1 = strlen(x);
	int s2 = strlen(y);
	int ans = LCS(x,y, s1, s2);
	cout<<ans<<endl;
	cout<<"shreykhandelwal_209303098"<<endl;
}
