//FOR LOOP- SYNTAX: for(initialization; condition; updation){ //do some work }

//Print apna college 5 times
#include <iostream> 
using namespace std;

int main(){
    for(int i = 1; i<=5; i++){
        cout<<"Apna College"<<endl;
    }
    return 0;
}

//Print numbers from 1 to n
#include <iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

//Print sum of N natural numbers
#include <iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;
    int sum = 0;

    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}


/* Print the square pattern using for loop
* * * *
* * * *
* * * *
* * * *      */
#include <iostream> 
using namespace std;

int main(){
    for(int i = 1; i<=4; i++){
        cout<<"* * * *"<<endl;
    }
    return 0;
}

//Print no's from n to 1 using for loop
#include <iostream> 
using namespace std;

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;

    for(int i = n; i>=1; i--){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

//WHILE LOOP
#include <iostream> 
using namespace std;

int main(){
    int count = 1;
    while(count<3){
        cout<<count;
        count++;
    }
    cout<<endl;
    return 0;
}

//Print the sum of digits of a number using while loop, n = 10829
#include <iostream> 
using namespace std;

int main(){
    int n = 10829;
    int digsum = 0;

    while(n > 0){
        int lastdig= n % 10;
        digsum = digsum + lastdig;
        n = n/10;
    }
    cout<<"Sum: "<<digsum<<endl;
    return 0;
}

//Print the sum of odd digits of a number using while loop, n = 10829
#include <iostream> 
using namespace std;

int main(){
    int n = 10829;
    int digsum = 0;

    while(n > 0){
        int lastdig= n % 10;
        if(lastdig % 2 != 0){
            digsum = digsum + lastdig;
        }
        n = n/10;
    }
    cout<<"Sum: "<<digsum<<endl;
    return 0;
}

//Print the digits of a given numbers in reverse using while loop
#include <iostream> 
using namespace std;

int main(){
    int n = 10829;
    while(n > 0){
        int lastdig= n % 10;
        cout<<lastdig;
        n = n/10;
    }
    cout<<endl;
    return 0;
}

//Reverse a given no and print the result using while loop
#include <iostream> 
using namespace std;

int main(){
    int n = 10829;
    int res = 0;

    while(n > 0){
        int lastdig= n % 10;
        res = res * 10 + lastdig;
        n = n/10;
    }
    cout<<"Reverse"<<res<<endl;
    return 0;
}

/* DO WHILE LOOP- SYNTAX: 
initialization;
do{
    //do some work
}
while(condition); */
#include <iostream> 
using namespace std;

int main(){
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    }
    while(i<=3);
    cout<<endl;
    return 0;
}

//BREAK STATEMENT
#include <iostream> 
using namespace std;

int main(){
    int i = 1;
    while(i<=6){
        if(i == 3){
            break;
        }
        cout<<i<<" ";
        i++;
    }
    cout<<endl;
    return 0;
}

//WAP where user can keep entering no's till they enter a multiple of 10
#include <iostream> 
using namespace std;

int main(){
    int n;

    do{
        cout<<"Enter the n: ";
        cin>>n;
        if(n % 10 == 0){
            break;
        }
        cout<<"You entered: "<<n<<endl;
    }
    while(true);
    return 0;
}

//CONTINUE STATEMENT( to skip an iteration)
#include <iostream> 
using namespace std;

int main(){
    for(int i = 1; i<=6; i++){
        if(i == 3){
           continue;
        }
        cout<<i<<endl;
    }
    return 0;
}

//WAP to show numbers entered by user except multiples of 10
#include <iostream>
using namespace std;

int main(){
    int n;

    do{
        cout<<"Enter the n: ";
        cin>>n;
        if(n % 10 == 0){
            continue;
        }
        cout<<"You entered: "<<n<<endl;
    }
    while(true);
    return 0;
}

//Check if a number is prime or not
#include <iostream>
using namespace std;

int main(){
    int n = 9;
    bool isprime = true;

    for(int i = 2; i<=n-1; i++){
        if(n%i == 0){
            isprime = false;
            break;
        }
        if(isprime){
            cout<<"Number is prime"<<endl;
        }else{
            cout<<"Number is NOT a prime number"<<endl;
        }
    }
    return 0;
}

//Question 1: WAP to find the Factorial of a number entered by the user.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int fact = 1;

    for(int i = 1; i<= n; i++){
        fact = fact * i;
    }
    cout<<"Factorial of"<<n<<"= "<<fact<<endl;
    return 0;
}

//Question 2: WAP to print the multiplication table of a number, entered by the user.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number n: ";
    cin>>n;

    for(int i = 1; i<=10; i++){
        cout<<(n*i)<<" ";
    }
    cout<<endl;
    return 0;
}

//Question 3:WAP to input a number and check whether the number is an Armstrong number or not.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n: ";
    cin>>n;
    int num = n;
    int cubesum = 0;

    while(num>0){
        int lastdig = num%10;
        cubesum = cubesum + lastdig* lastdig * lastdig;
        num = num/10;
    }
    if(n == cubesum){
        cout<<"Armstrong number"<<endl;
    }else{
        cout<<"Not an armstrong number"<<endl;
    }

    return 0;
}

//Question 4: For a positive N, WAP that prints all the prime numbers from 2 to N.(AssumeN>=2)
#include <iostream>
using namespace std;

int main(){
    int N = 15;
    for(int i = 2; i<=N; i++){ 
        int curr = i;
        //current number to check for
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(curr % j== 0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout<<curr<<"";
        }
    }
    cout<<endl; 
    return 0;
}

//Question 5: For a positive N, WAP that prints the first N Fibonacci numbers.(Assume N>=2)
#include <iostream>
using namespace std;

int main(){
    int N=10;
    int first = 0, sec= 1;
    cout<<first<<" "<<sec<<" ";

    for(int i = 2; i<=N; i++){
        int third = first+sec;
        cout<<third<<" ";
        first=sec;
        sec=third;
    }
    cout<<endl;
    return 0;
}
