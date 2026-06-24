//Print Subarrays: --> Subarray is continuous part of an array
#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n){
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            cout<<"("<<start<<","<<end<<")";
            for(int i = start; i<=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main(){
    int arr[5] ={1,2,3,4,5};
    int n = 5;

    printSubarrays(arr,n);
    return 0;
}

//Max Subarrays Sum (Brute force approach)
//Maximum--> INT_MIN (-infinity)
//Minimum--> INT_MAX (+infinity)
#include <iostream>
#include <climits>
using namespace std;

void maxSubarraysum1(int *arr, int n){
    int maxsum = INT_MIN;

    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            int currsum = 0;
            for(int i = start; i<=end; i++){
                currsum = currsum +arr[i];
            }
            cout<<currsum<<" ";
            maxsum = max(maxsum, currsum);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray sum= "<<maxsum<<endl;
}
int main(){
    int arr[6] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraysum1(arr,n);
    return 0;
}

//slightly optimized (max subarrays sum)
#include <iostream>
#include <climits>
using namespace std;

void maxSubarraysum2(int *arr, int n){
    int maxsum = INT_MIN;

    for(int start = 0; start<n; start++){
        int currsum = 0;
        for(int end = start; end<n; end++){
            currsum = currsum + arr[end];
            maxsum = max(maxsum, currsum);
        }
    }
    cout<<"Maximum Subarray sum= "<<maxsum<<endl;
}
int main(){
    int arr[6] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraysum2(arr,n);
    return 0;
}

//Kadane's Algorithm(DP)
#include <iostream>
#include <climits>
using namespace std;

void maxSubarraysum3(int *arr, int n){
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i = 0; i<n; i++){
        currsum = currsum + arr[i];
        maxsum = max(maxsum, currsum);
        if(currsum < 0){
            currsum = 0;
        }
    }
    cout<<"Maximum Subarray sum= "<<maxsum<<endl;
}
int main(){
    int arr[6] ={2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    maxSubarraysum3(arr,n);
    return 0;
}

//Buy and Sell Stocks Problem:
#include <iostream>
#include <climits>
using namespace std;

void maxProfit(int *prices, int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i = 1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
    }
    int maxProfit = 0;
    for(int i = 0; i<n; i++){
        int currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }
    cout<<"Max Profit= "<<maxProfit<<endl;
}
int main(){
    int prices[6] = {7,1,5,3,6,4};
    int n = sizeof(prices)/sizeof(int);

    maxProfit(prices,n);
    return 0;
}
