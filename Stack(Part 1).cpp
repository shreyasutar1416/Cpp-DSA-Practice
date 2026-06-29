//Stack Implementation: (LIFO)--> Last in first out
//using vector-
#include <iostream>
#include <vector>
using namespace std;

//create stack using vector
class stack{
    vector<int> vec;
public:
    void push(int val){
        vec.push_back(val);
    }
    void pop(){
        vec.pop_back();
    }
    int top(){
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }
    bool isempty(){
        return vec.size() == 0;
    }
};
int main(){
    stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    s.pop();
    return 0;
}

//Using vector with class template-
#include <iostream>
#include <vector>
using namespace std;
template<class T>

class stack{
    vector<T> vec;
public:
    void push(T val){
        vec.push_back(val);
    }
    void pop(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }
    T top(){
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }
    bool isempty(){
        return vec.size() == 0;
    }
};
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}

//Using linked List:
#include <iostream>
#include <List>
using namespace std;
template<class T>

class stack{
    List<T> LL;
public:
    void push(T val){
        LL.push_front(val);
    }
    void pop(){
        LL.pop_front();
    }
    T top(){
        return LL.front();
    }
    bool isempty(){
        return LL.size() == 0;
    }
};
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}

//using STL:
#include <iostream>
#include <List>
#include <stack>
using namespace std;
template<class T>

class Node{
public:
    T data;
    Node* next;

    Node(T val){
        data = val;
        next = nullptr;
    }
};

class stack{
    Node<T>* head;
public:
    stack(){
        head = nullptr;
    }

    void push(T val){
        Node<T>* newNode = new Node<T>(val);
        if(head == nullptr){
            head = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void pop(){
        Node<T>* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool isempty(){
        return head == nullptr;
    }

    //PushAtBottom(& stack, value)
    void pushAtBottom(stack<int> &s; int val){
        if(s.isempty()){
            s.push(val);
            return;
        }
        int temp = s.top();
        s.pop();
        pushAtBottom(s, val);
        s.push(temp);
    }
};
//#include <stack>
int main(){
    //STL stack
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    pushAtBottom(s,4);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}

//reverse a string using a stack: "abcd" --> "dcba"
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string reverseString(string str){
    string ans;
    stack<char> s;

    for(int i = 0; i<str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top = s.top();
        ans = ans + top;
        s.pop();
    }
    return ans;
}
int main(){
    string str = "abcd";
    cout<<reverseString(str)<<endl;
    return 0;
}

//Reverse a stack:
#include <iostream>
#include <stack>
#include <string>
using namespace std;

void reverse(stack<int> s){
    if(s.empty()){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}
void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);
    printStack(s);

    reverse(s);
    printStack(s);
    return 0;
}

//Stock span problem:
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void stockSpanProblem(vector<int> stock, vector<int> span){
    stack<int> s;
    s.push(0);
    span[0] = 1;

    for(int i = 1; i<stock.size(); i++){
        int currprice = stock[i];
        while(!s.empty() && currprice >= stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span[i] = i +1;
        }else{
            int prevHigh = s.top();
            span[i] = i - prevHigh;
        }
    }

    for(int i = 0; i<span.size(); i++){
        cout<<span[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> stock = {100,80,60,70,60,85,100};
    vector<int> span = {0,0,0,0,0,0,0};

    stockSpanProblem(stock,span);
    return 0;
}
