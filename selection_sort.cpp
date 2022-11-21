#include<bits/stdc++.h>
using namespace std;

void selection_sort(int array[], int n){

	for(int i = 0;i<n-1;i++){
		int min_value = i;
		
		for(int j=i+1;j<n;j++){
			if(array[j]<array[min_value])
				min_value = j;
		}
		if (min_value!=i){
			int swap = array[min_value];
			array[min_value] = array[i];
			array[i] = swap;
		}
	}

	for(int i =0;i<n;i++){
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
	cout<<"selection sort: "<<endl;
	int n;
	int low = 0;
	int arr[6];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	
	selection_sort(arr, 6);
	cout<<"209303098_shreykhandelwal"<<endl;
}
