//Queue- FIFO (First in First Out) data structure

//Implementation using linked list
#include <iostream>
#include <list>
using namespace std;

class Node{
Public:
    int data;
    Node* next;
   
    Node(int val){
        data = val;
        next = nullptr;
    }  
};

class Queue{
    Node* head;
    Node* tail;
public:
    Queue(){
        head = tail = nullptr;
    }

    void push(int data){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return head->data;
    }

    bool empty(){
        return head == nullptr;
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

//Circular Queue implementation: using array

#include <iostream>
using namespace std;

class Queue{
    int* arr;
    int capacity;
    int currSize;

    int f,r;
public:
    Queue(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }

    void push(int data){
        if(currSize == capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        r = (r + 1)% capacity;
        arr[r] = data;
        currSize++;
    }

    void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f = (f + 1)% capacity;
        currSize--;
    }

    int front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    bool empty(){
        return currSize == 0;
    }
};
int main(){
    Queue q(9);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(5);
    cout<<q.front()<<endl;
    return 0;
}

//Queue in STL:

#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

//Queue using 2 stacks:

#include <iostream>
#include <stack>
using namespace std;

class Queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){
        //s1->s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(data);
        //s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }  
    void pop(){
        s1.pop();
    }

    int front(){
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
    
};
int main(){
    //queue using 2 stacks
    Queue q;

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

//Stack using 2 Queue:

#include<iostream>
#include<queue>
using namespace std;

class stack{
    queue<int> q1;
    queue<int> q2;
public:
    void push(int data){
        //q1->q2
        while(!q1.empty()){
            q2.push(q1.front())
            q1.pop();
        }
        q1.push(data);
        //q2->q1
        while(!q2.empty()){
            q1.push(q2.front())
            q2.pop();
        }
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};
int main(){
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

//Non- repeating letters: find 1st non-repeating letter in a stream of characters

#include <iostream>
#include <queue>
using namespace std;

void firstNonRepeat(string str){
    queue<char> Q;
    int freq[26] = {0};

    for(int i = 0; i<str.size(); i++){
        char ch = str[i];
        Q.push(ch);
        freq[ch - 'a']++;

        while(!Q.empty() && freq[Q.front()-'a']>1){
            Q.pop();
        }
        if(Q.empty()){
            cout<<"-1"<<endl;
        }else{
            cout<<Q.front()<<endl;
        }
    }
}
int main(){
    string str = "aabccxb";
    firstNonRepeat(str);
    return 0;
}

//InterLeave 2 queues:

#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &org){
    int n = org.size();
    queue<int> first;

    for(int i = 0; i<n/2; i++){
        first.push(org.front());
        org.pop();
    }

    while(!first.empty()){
        org.push(first.front());
        first.pop();
        org.push(org.front());
        org.pop();
    }
}

int main(){
    queue<int> org;
    for(int i = 1; i<=10; i++){
        org.push(i);
    }
    interleave(org);

    for(int i = 1; i<=10; i++){
        cout<<org.front()<<" ";
        org.pop();
    }
    cout<<endl;
    return 0;
}

//Queue reversal:

#include<iostream>
#include<stack>
#include <queue>
using namespace std;

void reverse(queue<int> &q){
    stack<int> s;

    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}
int main(){
    queue<int> q;
    for(int i = 1; i<=5; i++){
        q.push(i);
    }
    reverse(q);
    for(int i = 1; i<=5; i++){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    return 0;
}

//Double ended queue: Deque in C++

#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> deq;

    deq.push_front(2);
    deq.push_front(1);

    deq.push_back(3);
    deq.push_back(4);

    deq.pop_front();
    deq.pop_back();

    cout<<deq.front()<<endl;
    cout<<deq.back()<<endl;
    return 0;
}

//Queue using Deque:

#include<iostream>
#include<deque>
#include<queue>
using namespace std;

class Queue{
    deque<int> deq;
public:
    void push(int data){
        deq.push_back(data);
    }
    void pop(){
        deq.pop_front();
    }
    int front(){
        return deq.front();
    }
    bool empty(){
        return deq.empty();
    }
};
int main(){
    Queue q;
    for(int i = 1; i<=5; i++){
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

//Stack using Deque:

#include<iostream>
#include<deque>
#include<stack>
using namespace std;

class stack{
    deque<int> deq;
public:
    void push(int data){
        deq.push_front(data);
    }
    void pop(){
        deq.pop_front();
    }
    int top(){
        return deq.front();
    }
};
int main(){
    stack s;
    for(int i = 1; i<=5; i++){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
