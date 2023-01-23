#include<bits/stdc++.h>
using namespace std;
int knapsack(int W,int val[], int wt[], int n ){
	if(n==0||W==0)
	return 0;
	if(W<wt[n-1])
	{
		return knapsack(W,val,wt,n-1);

	}
	else{
		return max(knapsack(W,val,wt,n-1),val[n-1]+knapsack(W-wt[n-1],val,wt,n-1));
		
	}

}
int main(){
	int val[]={60,100,120};
	int wt[]={10,20,30};
	int W=50;
	int n=sizeof(val)/sizeof(val[0]);
	cout<<knapsack(W,val,wt,n);
	return 0;

}
//             // <---this code is for memoziation code -->
// // A dynamic programming based
// // solution for 0-1 Knapsack problem
// #include <bits/stdc++.h>
// using namespace std;

// // A utility function that returns
// // maximum of two integers
// int max(int a, int b)
// {
// 	return (a > b) ? a : b;
// }

// // Returns the maximum value that
// // can be put in a knapsack of capacity W
// int knapSack(int W, int wt[], int val[], int n)
// {
// 	int i, j;
// 	vector<vector<int>> K(n + 1, vector<int>(W + 1));

// 	// Build table K[][] in bottom up manner
// 	for(i = 0; i <= n; i++)
// 	{
// 		for(j = 0; j <= W; j++)
// 		{
// 			if (i == 0 || j == 0)
// 				K[i][j] = 0;
// 			else if (wt[i - 1] <= j)
// 				K[i][j] = max(val[i - 1] +
// 								K[i - 1][j - wt[i - 1]],
// 								K[i - 1][j]);
// 			else
// 				K[i][j] = K[i - 1][j];
// 		}
// 	}
// 	return K[n][W];
// }

// // Driver Code
// int main()
// {
// 	int val[] = { 60, 100, 120 };
// 	int wt[] = { 10, 20, 30 };
// 	int W = 50;
// 	int n = sizeof(val) / sizeof(val[0]);
	
// 	cout << knapSack(W, wt, val, n);
	
// 	return 0;
// }

// // This code is contributed by Debojyoti Mandal
// // 