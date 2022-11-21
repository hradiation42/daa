#include<bits/stdc++.h>
using namespace std;

void quicksort(int array[],int first,int last){
   int i, j, pivot, temp;

   if(first<last){
      pivot=first;
      i=first;
      j=last;

      while(i<j){
         while(array[i]<=array[pivot])
            i++;
         while(array[j]>array[pivot])
            j--;
         if(i<j){
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
      }

      temp=array[pivot];
      array[pivot]=array[j];
      array[j]=temp;
      quicksort(array,first,j-1);
      quicksort(array,j+1,last);

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
	int low = 0;
	int arr[6];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"quick_sort"<<endl;

	quicksort(arr,0, n-1);
	for(int i =0;i<6;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"209303098_shreykhandelwal"<<endl;
}

