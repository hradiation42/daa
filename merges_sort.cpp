#include<bits/stdc++.h>
using namespace std;


void merge(int arr[], int l, int mid, int h, int size){
	int i = l;
	int j=mid+1;
	int k=l;
	int temp[size];

	while(i<=mid && j<=h){
		if(arr[i]<=arr[j]){
			temp[k]=arr[i];
			i++;
			k++;
		}else{
			temp[k] = arr[j];
			k++;
			j++;
		}
	}
	while (i <= mid) {
	    temp[k] = arr[i];
	    i++;
	    k++;
  	}
	while (j <= h) {
    	temp[k] = arr[j];
    	j++;
    	k++;
  	}
  	for (int p = l; p <= h; p++) {
    	arr[p] = temp[p];
  	}
}


void mergeSort(int arr[], int l, int h, int size){
	if(l<h){
		int mid = (l+h)/2;
		mergeSort(arr, l, mid, size);
		mergeSort(arr, mid+1, h, size);
		merge(arr, l, mid, h, size);
	}
}


int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	cout<<"merge sort"<<endl;

	int size;
	
	cin>>size;
	int low = 0;
	int arr[size];
	
	for(int i = 0;i<size;i++){
		cin>>arr[i];
	}
	mergeSort(arr, 0, size-1, size);

	for (int i = 0; i < size; i++) {
    	cout << arr[i] << endl;
  	}
  	cout<<"shreykhandelwal_209303098"<<endl;
  	return 0;
}
