//linked list 
#include <iostream>
#include <iterator>
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

//Print LL
    void printList(){
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

//Detect a cycle/loop in a LL: using Floyd's cycle finding algorithm
    bool iscycle(Node* head){
        Node* slow = head;
        Node* fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;   //+1
            fast = fast->next->next;  //+2

            if(slow == fast){
                cout<<"Cycle exists"<<endl;
                return true;
            }
        }
        cout<<"Cycle doesn't exists"<<endl;
        return false;
    }

//Removing cycle in a LL:
    void removeCycle(Node* head){
        //detect cycle
        Node* slow = head;
        Node* fast = head;
        bool iscycle = false;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;   //+1
            fast = fast->next->next;  //+2

            if(slow == fast){
                cout<<"Cycle exists"<<endl;
                return true;
                break;
            }
        }
        if(!iscycle){
            cout<<"Cycle doesn't exists"<<endl;
            return;
        }

        //Remove the cycle
        slow = head;
        if(slow == fast){     //special case: tail->head
            while(fast->next != slow){
                fast = fast->next;
            }
            fast->next = nullptr;   //remove cycle
        }else{
            Node* prev = fast;
            while(slow != fast){
                slow = slow->next;
                prev = fast;
                fast = fast->next;
            }
            prev->next = nullptr;    //remove cycle
        }
    }

//Merge sort on a LL:
    Node* splitAtmid(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = nullptr;

        while(fast != nullptr && fast->next != nullptr){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(prev != nullptr){
            prev->next = nullptr;
        }
        return slow;
    }
    Node* merge(Node* left, Node* right){
        List ans;
        Node* i = left;
        Node* j = right;

        while(i != nullptr && j != nullptr){
            if(i->data <= j->data){
                ans.push_back(i->data);
                i = i->next;
            }else{
                ans.push_back(j->data);
                j = j->next;
            }
        }
        while(i != nullptr){
            ans.push_back(i->data);
            i = i->next;
        }
        while(j != nullptr){
            ans.push_back(j->data);
            j = j->next;
        }
        return ans.head;
    }
    void mergesort(Node* head){
        if(head == nullptr || head->next == nullptr){
            return;
        }
        Node* rightHead = splitAtmid(head);

        mergesort(head);   //left head
        mergesort(rightHead); //right head

        merge(head, rightHead);
    }
};
int main(){
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.tail->next = ll.head;
    iscycle(ll.head);
    removeCycle(ll.head);
    printList(ll.head);

    return 0;
}

/* List in STL: using--> (List<int> LL)
Iterator: #include <iterator> -->Iterators in C++ are objects that allow 
you to traverse through the elements of a container(like arrays, vectors, 
lists, etc) in a sequential manner       */
#include <iostream>
using namespace std;

void printList(List<int> LL){
    List<int>::iterator itr;
    for(itr = LL.begin(); itr = LL.end(); itr++){
        cout<<(*itr)<<"-->";
    }
    cout<<"Null"<<endl;
}

int main(){
    List<int> LL;   //STL 
    LL.push_front(3);
    LL.push_front(2);
    LL.push_front(1);

    LL.pop_front();

    printList(LL);
    cout<<LL.size()<<endl;
    cout<<"Head: "<<LL.front()<<endl;
    cout<<"Tail: "<<LL.back()<<endl;
    return 0;
}

//Doubly Linked List:
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        prev = next = nullptr;
    }
};

class DoublyList{
public:
    Node* head;
    Node* tail;

    DoublyList(){
        head = tail = nullptr;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pop_front(){
        Node* temp = head;
        head = head->next;
        if(head != nullptr){
            head->prev = nullptr;
        }
        temp->next = nullptr;
        delete temp;
    }

    void printList(){
        Node* temp = head;
        while(temp != null){
            cout<<temp->data<<"-->";
            temp = temp->next;
        }
        cout<<"Null"<<endl;
    }
};
int main(){
    DoublyList dbll;
    dbll.push_front(5);
    dbll.push_front(4);
    dbll.push_front(3);
    dbll.push_front(2);
    dbll.push_front(1);
    dbll.printList();

    dbll.pop_front();
    dbll.printList();

    return 0;
}


