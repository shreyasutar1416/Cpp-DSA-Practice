//IF ELSE STATEMENT

#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age: ";
    cin>>age;

    if(age >= 18){
        cout<<"can vote"<<endl;
    }else{
        cout<<"cannot vote"<<endl;
    }
    return 0;
}

//Print the largest of 2 numbers
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;

    if(a>=b){
        cout<<"a is largest: "<<a<<endl;
    }else{
        cout<<"b is largest: "<<b<<endl;
    }
    return 0;
}

//Print if a no. is even or odd
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the Number: ";
    cin>>number;

    if(number%2==0){
        cout<<"Number is even";
    }else{
        cout<<"Number is odd";
    }
    return 0;
}

//ELSE IF STATEMENT

#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the marks: ";
    cin>>marks;

    if(marks>=90){
        cout<<"Grade A";
    }else if(marks>=80){
        cout<<"Grade B";
    }else{
        cout<<"Grade C";
    }
    return 0;
}

//Create a Income Tax calculator

#include <iostream>
using namespace std;

int main(){
    int income;
    float tax;

    cout<<"Enter the income(in lakhs): ";
    cin>>income;

    if(income < 5){
        tax = 0;
    }else if(income <= 10){
        tax = 0.2 * income;
    }else{
        tax = 0.3 * income;
    }
    cout<<"Tax: "<<(tax * 10000)<<endl;

    return 0;
}

//Find the largest of 3 numbers
# include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the number a: ";
    cin>>a;

    cout<<"Enter the number b: ";
    cin>>b;

    cout<<"Enter the number c: ";
    cin>>c;

    if((a>=b)&&(a>=c)){
        cout<<"a is largest: "<<a<<endl;
    }else if(b>=c){
        cout<<"b is largest: "<<b<<endl; 
    }else{
        cout<<"c is largest: "<<c<<endl;
    }
    return 0;
}

/* TERNARY OPERATOR (SHORT FORM FOR IF ELSE STATEMENT)
SYNTAX- variable = condition ? statement 1: statement 2; */

#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter the number a: ";
    cin>>a;
    cout<<"Enter the number b: ";
    cin>>b;

//     if(a>=b){
//         cout<<"a is largest: "<<a<<endl;
//     }else{
//         cout<<"b is largest: "<<b<<endl;
//     }
// OR
    int largest = (a>=b) ? a : b;
    cout<<"largest number is: "<<largest<<endl;
    return 0;
}

//one more example
#include <iostream>
using namespace std;

int main(){
    bool isAdult;
    int age;

    cout<<"Enter the age: ";
    cin>>age;

    // if(age>=18){
    //     isAdult = true;
    // }else{
    //     isAdult = false;
    // }
//OR
    isAdult = (age>=18) ? true: false;
    cout<<isAdult<<endl;
    return 0;
}

//One more example
#include <iostream>
using namespace std;

int main(){
    bool isEven;
    int num = 13;
    isEven = (num%2==0) ? true:false;
    cout<<"Answer: "<<isEven<<endl;
    return 0;

}

    
//SWITCH STATEMENT

#include <iostream>
using namespace std;

int main(){
    int day = 1;
    switch(day){
        case 1: cout<<"Monday";
           break;
        case 2: cout<<"Tuesday";
           break;
        default: cout<<"Inavlid";
    }
    return 0;
}

//Build the calculator- using switch and 4 arithmetic operation( +, -, *, /)
#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"Enter the number a: ";
    cin>>a;

    cout<<"Enter the number b: ";
    cin>>b;
    
    cout<<"Enter the operator: ";
    cin>>op;
    
    if(op == '+'){
        cout<<"a+b= "<<(a+b)<<endl;
    }else if(op == '-'){
        cout<<"a-b= "<<(a-b)<<endl;
    }else if(op == '*'){
        cout<<"a*b= "<<(a*b)<<endl;
    }else if(op == '/'){
        cout<<"a/b= "<<(a/b)<<endl;
    }else{
        cout<<"Invalid operator";
    }
    return 0;
}

/* Question 1:Write a C++ program to get a number 
from the user and print whether it's positive, negative or zero.*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(num > 0){
        cout<<"Number is positive";
    }else if(num < 0){
        cout<<"Number is negative";
    }else{
        cout<<"Number is Zero";
    }
    return 0;
}

/* Question 2:Write a C++ program that takes a year 
from the user and print whether that year is a leap year or not */

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year: ";
    cin>>year;

    if(year % 400 == 0){
        cout<<"Is a leap year "<<year<<endl;
    }else if(year % 100 == 0){
        cout<<"Is not a leap year "<<endl;
    }else if(year % 4 == 0){
        cout<<"Is a leap year "<<endl;
    }else{
        cout<<"Is not a leap year ";
    }
    return 0;
}

/* Question 5:For any 3 digit number check whether it’s 
an Armstrong number or not. Armstrong number is a number 
that is equal to the sum of cubes of its digits.
Eg:371 is an armstrong number.
3*3*3 + 7*7*7 + 1*1*1 = 371 
Bonus:Read up about the difference between typedef(keyword),
macros & const(keyword) in C++ */

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter 3 digits numbers: ";
    cin>>n;

    int num = n; //creating a copy

    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int cubesum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    if(cubesum == n){
        cout<<n<<" is a armstrong number";
    }else{
        cout<<n<<" is not a armstrong number";
    }
    return 0;
}
