#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{

    while(low<=high){
        int mid = low+(high-1)/2;

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
    cout<<"Binary Search using iterative approach: "<<endl;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int ans = binarySearch(arr,0, 9, 3);
	cout<<ans;
}
