//linked list 
#include <iostream>
using namespace std;

//Node Implementation
class Node{
public:
    int data;
    Node* next;

    Node(int val){
       data = val;
       next = nullptr;
    }

    //delete entire ll
    ~Node(){
        cout<<"~Node"<<endl;
        if(next != nullptr){
            delete next;
            next = nullptr;
        }
    }
};

//List Implementation
class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = nullptr;
        tail = nullptr;
    }

    //delete entire ll
    ~List(){
        cout<<"~List"<<endl;
        if(head != nullptr){
            delete head;
            head = nullptr;
        }
    }

//Push Front Implementation
    void push_front(int val){
        Node* newNode = new Node(val);   //dynamic way for creating new node
        if(head == nullptr){  //no exisitng linked list 
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

//Push Back Implementation
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

//Print LL
    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

//Insert in LL Middle: Insert node at a given position in the LL
    void insert(int val, int pos){
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i = 0; i<pos-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

//Deleting the LL: Write code to delete the entire LL
//we simply use destructors in node, list class

//Pop Front Implementation
    void pop_front(int val){
        if(head == nullptr){
            cout<<"ll is empty"<<endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }

//Pop Back Implementation
    void pop_back(int val){
        if(head == nullptr){
            cout<<"ll is empty"<<endl;
            return;
        }
        Node* temp = head;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        temp->next = nullptr;
        delete temp;
        tail = temp;
    }

//Iterative search:
    int searchItr(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != nullptr){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

//Recursive search:
    int helper(Node* head, int key){
        if(temp == nullptr){
            return -1;
        }
        if(temp->data == key){
            return 0;
        }
        int idx = helper(temp->next, key);
        if(idx == -1){
            return -1;
        }
        return idx + 1;
    }
    int searchRec(int key){
        return helper(head, key);
    }

//Reverse a linked list:
    void reverse(){
        Node* curr = head;
        Node* prev = nullptr;
        tail = head;
        while(curr != nullptr){
            Node* next = curr->next;
            curr->next = prev;
            //updations for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
    }

//Find and remove Nth Node from the end:
    int getsize(){
        int sz = 0;
        Node* temp = head;
        while(temp != nullptr){
            temp = temp->next;
            sz++;
        }
        return sz;
    }
    void removeNth(int n){
        int size = getsize();
        Node* prev = head;
        for(int i = 1; i<(size-n); i++){
            prev = prev->next;
        }
        Node* toDel = prev->next;
        cout<<"going to delete: "<<toDel->data<<endl;
        prev->next = prev->next->next;
    }
};

int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList();  //1-->2-->3-->Null

    ll.push_back(4); 
    ll.push_back(5);
    ll.printList();  //1-->2-->3-->4-->5-->Null

    ll.insert(100,2);  
    ll.printList();   //1-->2-->100-->3-->4-->5-->Null

    ll.pop_front();
    ll.printList();   //2-->100-->3-->4-->5-->Null

    ll.pop_back();
    ll.printList();   //2-->100-->3-->4-->Null

    cout<<ll.searchItr(100)<<endl;   //it will return us idx = 2

    cout<<ll.searchRec(100)<<endl;   

    ll.reverse();
    ll.printList();    //4-->3-->100-->2-->Null

    ll.removeNth(2);
    ll.printList();   

    return 0;

}


