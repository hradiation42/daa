#include<bits/stdc++.h>
using namespace std;

void knapsack(int n, float weight[], float profit[], float capacity){
	float ratio[20], tp = 0;
	int i, j, u;
	u = capacity;
	for(i=0;i<n;i++){
		ratio[i]=0.0;
	}
	for(i=0;i<n;i++){
		if(weight[i]>u)
			break;
		else{
			ratio[i] = 1.0;
			tp = tp+profit[i];
			u = u-weight[i];
		}
	}
	if(i<n)
		ratio[i] = u/weight[i];

	tp = tp + (ratio[i]*profit[i]);
	cout<<"maximum profit is: "<<tp<<endl;
}



int main(){
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input.txt","r", stdin);
	//for getting output from output.txt
	freopen("output.txt","w",stdout);
#endif

	cout<<"knapsack problem"<<endl;


	float weight[20], profit[20], capacity;
	int num, i, j;
	float ratio[20], temp;

	//cout<<"enter number of objects:";
	cin>>num;

	//cout<<"enter number of weight and profit for each object:";
	for(i=0;i<num;i++){
		cin>>weight[i]>>profit[i];
	}

	//cout<<"enter the capacity of the knapsack:"<<endl;
	cin>>capacity;

	for(i=0;i<num;i++){
		ratio[i] = profit[i]/weight[i];
	}

	for(i = 0;i<num;i++){
		for(j=i+1;j<num;j++){
			if(ratio[i]<ratio[j]){
				temp = ratio[i];
				ratio[j] = ratio[i];
				ratio[i] = temp;

				temp = weight[j];
				weight[j] = weight[i];
				weight[i] = temp;

				temp = profit[j];
				profit[j] = profit[i];
				profit[i] = temp;
			}
		}
	}
	knapsack(num, weight, profit, capacity);
	cout<<"shreykhandelwal_209303098"<<endl;
	return 0;
}

