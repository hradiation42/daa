#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int array[], int n){
	for(int i =0;i<n-1;i++){
		for (int j=0;j<n-i-1;j++){
			if(array[j]>array[j+1]){
				int swap = array[j+1];
				array[j+1] = array[j];
				array[j] = swap;
			}
		}
	}
	for(int i =0;i<n-1;i++){
		cout<<array[i]<<endl;
	}	
}

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	cout<<"bubble sort"<<endl;
	int n;
	int low = 0;
	int arr[6];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	bubble_sort(arr, 7);
	cout<<"209303098_shreykhandelwal"<<endl;

}
