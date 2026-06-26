/* Recursion: When a function repeatedly calls itself
example-  void func(){
                cout<<"function calls repeatedly"<<endl;
                func();
            }                                             */

//Understanding using math:
#include <iostream>
#include <string>
using namespace std;

int factorial(int n){
    if(n == 0){     //Base case (smallest problem)
        return 1;
    }
    return n * factorial(n - 1);
}
int main(){
    int ans = factorial(4);
    cout<<ans<<endl;
    return 0;
}

//It is a method of solving computational problems where the solution depends on solutions to smaller instances of the same problem
//Recursion in memory:

//Question 1: Print numbers in descending order
#include <iostream>
#include <string>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n - 1);
}
int main(){
    print(100);
    return 0;
}

//Question 2: Sum of N natural numbers
#include <iostream>
#include <string>
using namespace std;

int sum(int n){
    if(n == 1){
       return 0;
    }
    return n + sum(n - 1);
}
int main(){
    cout<<sum(6)<<endl;
    return 0;
}

//Question 3: Print Nth fibonacci number
#include <iostream>
#include <string>
using namespace std;

int fibonacci(int n){
    if(n == 1 || n == 0){
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(){
    cout<<fibonacci(5)<<endl;
    return 0;
}

//Question 4: Check if array sorted(ascending)
#include <iostream>
#include <string>
using namespace std;

bool issorted(int arr[], int n, int i){
    if(i == n-1){
        return true;
    }
    if(arr[i] > arr[i + 1]){
        return false;
    }
    return issorted(arr, n, i+1);
}
int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,4,3,5};
    cout<<issorted(arr2,5,0);
    return 0;
}

//Question 5: First occurence- WAF to find first occurence of an element in a vector
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int firstoccur(vector<int>arr, int i, int target){
    if(i == arr.size()){
        return -1;
    }
    if(arr[i] == target){
        return i;
    }
    return firstoccur(arr, i+1, target);
}
int main(){
    vector<int>arr = {1,2,3,3,3,4};
    cout<<firstoccur(arr,0,3)<<endl;
    return 0;
}

//Question 6: Last occurence- WAF to find last occurence of an element in a vector
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int lastoccur(vector<int>arr, int target, int i){
    if(i == arr.size()){
        return -1;
    }
    int idxfound = lastoccur(arr, target, i+1);
    if(idxfound == -1 && arr[i] == target){
        return i;
    }
    return idxfound;
}
int main(){
    vector<int>arr = {1,2,3,3,3,4};
    cout<<lastoccur(arr,45,0)<<endl;
    return 0;
}

//Question 7: Print X to the power N
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int pow(int x, int n){
    if(n == 0){
        return 1;
    }
    int halfpow = pow(x,n/2);
    int halfpowsquare = halfpow * halfpow;
    if(n % 2 != 0){
        return x * halfpowsquare;
    }
    return halfpowsquare;
}
int main(){
    cout<<pow(2,3)<<endl;
    return 0;
}

//Question 8: Tilling Problem
#include <iostream>
#include <string>
using namespace std;

int tp(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return tp(n - 1) + tp(n - 2);
}
int main(){
    int n = 3;
    cout<<tp(5)<<endl;
    return 0;
}

//Question 9: Removes duplicates in string
#include <iostream>
#include <string>
using namespace std;

void removeduplicates(string str, string ans, int i, int map[26]){
    if(i == str.size()){
        cout<<"ans: "<<ans<<endl;
        return;
    }
    int mapIdx = (int)(str[i] - 'a');
    if(map[mapIdx]){
        removeduplicates(str, ans, i+1, map);
    }else{
        map[mapIdx] = true;
        removeduplicates[str, ans+str[i], i+1, map];
    }
}
int main(){
    string str = "apnacollege";
    string ans = " ";
    int map[26] = {false};
    removeduplicates(str, ans, i, map);
    return 0;
}

//Question 10: Friends pairing
#include <iostream>
#include <string>
using namespace std;

int fp(int n){
    if(n == 1 || n == 2){
        return n;
    }
    return fp(n - 1) + (n - 1)* fp(n - 2);
}
int main(){
    cout<<fp(3)<<endl;
    return 0;
}

//Question 11: Binary strings
#include <iostream>
#include <string>
using namespace std;

void binstring(int n, int lastplace, string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }
    if(lastplace != 1){
        binstring(n - 1, 0, ans + '0');
        binstring(n - 1, 1, ans + '1');
    }else{
        binstring(n - 1, 0, ans + '0');
    }
}
int main(){
    string ans = " ";
    binstring(3, 0, ans);
    return 0;
}
