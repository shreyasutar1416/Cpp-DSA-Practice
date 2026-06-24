/* ARRAYS- Linear collection of same type of elements 
that are stored together in contiguous memory spaces  */

//Creating an array
#include <iostream>
using namespace std;

int main(){
    // int marks[50]; //0 to 49
    // int marks[50] = {1,2,3,4,5};
    int marks[]= {1,2,3,4};
//memory is statiscally allocated(at compile time)
    cout<<marks[0]<<endl;
    return 0;
}

//Output Array:
#include <iostream>
using namespace std;

int main(){
    int arr[5] ={7,5,2,1,3};
    int len = sizeof(arr)/sizeof(int);

    for(int i = 0; i<=len-1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

//Input Array:
#include <iostream>
using namespace std;

int main(){
    int arr[5];
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i<=n; i++){
        cin>>arr[i];   //inputted the array
    }
    for(int i = 0; i<=n; i++){
        cout<<arr[i]<<" ";  //ouput the array
    }
    cout<<endl;
    return 0;
}

//Find the Largest number in array
#include <iostream>
using namespace std;

int main(){
    int arr[]={5,4,3,9,12};
    int n = sizeof(arr)/sizeof(int);

    int max = arr[0];
    for(int i=0; i<=n; i++){
        if(arr[i] > max){
            max = arr[i];
            cout<<"Assigning value "<<arr[i]<<" to max"<<endl;
        }
    }
    cout<<"Max = "<<max<<endl;
    return 0;
}

/* Arrays are passed by reference: C++ --> array name --> pointer
 void printArr(int arr[]){.......}
 void printArr(int *arr){.......}   --these both are same */

//Linear Search (Algorithm):
#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int key){
    for(int i = 0; i<=n; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]= {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);

    cout<<linearSearch(arr,n,10);
    return 0;
}

//Reverse an Array (with extra space):
#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    
    int copyArr[n];
    for(int i=0; i<n; i++){
        int j = n-i-1;
        copyArr[i] = arr[i];
    }
    for(int i = 0; i<n; i++){
        arr[i] = copyArr[i];
    }

    printArr(arr,n);
    return 0;
}

//Reverse an array (without extra space) using 2 pointer approach:
#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/sizeof(int);
    
    int start = 0, end = n-1;
    while(start > end){
        int temp = arr[start]; //swapping the array logic
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArr(arr,n);
    return 0;
}

//Binary Search (sorted array):
#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key){
    int st = 0, end = n-1;

    while(st <= end){ //sorted array
        int mid = (st+end)/2;   //find middle value of array
        if(arr[mid] == key){   //comparing the middle val with key
            return mid;
        }else if(arr[mid] < key){
            st = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);

    cout<<binSearch(arr,n,4)<<endl;
    return 0;
}

//ARRAY POINTER:
// 1)Increment and decrement operators (ptr++ or ++ptr, ptr-- or --ptr)
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout<<ptr<<endl;  //one int = 4 bytes
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;
    return 0;
}

// 2)Addition and subtraction of constants
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr = &a;

    cout<<ptr<<endl;
    cout<<(ptr + 3)<<endl; //by adding constant 3 to ptr, we get 12 bytes(4*3 = 12)
    return 0;
}
//OR
#include <iostream>
using namespace std;

void printArr(int *ptr, int n){
    for(int i = 0; i<n; i++){
        cout<<*(ptr + i)<<endl;
    }
}
int main(){
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);

    printArr(arr,n);
    return 0;
}

// 3)Addition and subtraction of pointers
//ptr1 + ptr2 -->Invalid operation
//ptr1 - ptr 2 --> Both should be of same type
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr1 = &a;
    int *ptr2 = ptr1 + 3;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl; 

    cout<<ptr2 - ptr1<<endl;
    return 0;
}

// 4)Comparison( =, >, <)
#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;

    cout<<ptr1<<endl;
    cout<<ptr2<<endl; 

    cout<<(ptr1 < ptr2)<<endl; //true(1)
    return 0;
}
