#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i){
	int temp;
	int largest = i;
	int l = 2*i+1;//left
	int r = 2*i+2;//right

	if(l<n && arr[l]>arr[largest]){
		largest = l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		temp = arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n) {
	int temp;
	for (int i = n / 2 - 1; i >= 0; i--){
		heapify(arr, n, i);
	}
	for (int i=n-1; i>=0; i--) {
		temp=arr[0];
		arr[0]=arr[i]; arr[i]=temp;
		heapify(arr, i, 0); 
	}
}
void printArray(int arr[], int n){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	heapSort(arr, n);
	cout<<"sorted array: "<<endl;
	printArray(arr, n);
	cout<<"209303098_shreykhandelwal"<<endl;
}
























