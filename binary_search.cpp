//#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int binarySearchRecursion(int arr[], int low, int high, int key){
    
    if (high >= low) {
        int mid = low+(high-low)/2;
 
        if (arr[mid] == key)
            return mid;
 
        if (arr[mid] > key)
            return binarySearchRecursion(arr, low, mid - 1, key);
 
        return binarySearchRecursion(arr, mid + 1, high, key);
    }
    return -1;
}


int binarySearchIteration(int arr[], int low, int high, int key){

    while(low<=high){
        int mid = low+(high-low)/2;

        if (arr[mid] == key)
            return mid;

        if(arr[mid]<key)
            low = mid+1;
        else
            high = mid - 1;
    }
    return -1;
}


int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	int n;
	int low = 0;
	int arr[6];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	//int arr[] = {1,2,3,4,5,6,7,8,9};
	int ans = binarySearchRecursion(arr, low, n, 1);
	int ans_iterative = binarySearchIteration(arr, low, n, 4);

	cout<<"Binary Search Algorithm using recursive approach: "<<endl;

	cout<<ans<<endl;
	cout<<"Binary search Algorithm using iterative approach: "<< endl;
	cout<<ans_iterative<<endl;
	cout<<"209303098_shreykhandelwal"<<endl;
}
