//Binary Tree: Hierarchical data structure--> Each node has at max 2 children

//Build tree from preorder:

#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return null;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    cout<<"Root= "<<root->data<<endl;
    return 0;
}

//Tree Traversals: (Recursive)--> DFS

/* 1)Preorder Traversal
   -Root
   -left subtree
   -right subtree        */

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

void preorder(Node* root){
    if(root == nullptr){
        return;
    }
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    preorder(root);
    cout<<endl;
    return 0;
}

/* 2)Inorder Traversal:
   -left subtree
   -root
   -right subtree             */

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

void inorder(Node* root){
    if(root == nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    inorder(root);
    cout<<endl;
    return 0;
}

/* 3)Postorder Traversal
   -left subtree
   -right subtree
   -root                          */

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

void postorder(Node* root){
    if(root == nullptr){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<endl;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    postorder(root);
    cout<<endl;
    return 0;
}

//Level Order Traversal: (Iterative)--> BFS

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

void levelOrder(Node* root){
    if(root == nullptr){
        return;
    }

    queue<Node*>q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node*curr = q.front();
        q.pop();

        if(curr == nullptr){
            cout<<endl;
            if(q.empty()){
                break;
            }
            q.push(nullptr);    //to track the next line
        }else{
            cout<<curr->data<<" ";

            if(curr->left != nullptr){
               q.push(curr->left);
            }
            if(curr->right != nullptr){
               q.push(curr->right);
            }
        }
    }
}
int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    levelOrder(root);
    cout<<endl;
    return 0;

}

//Height of a tree: Max distance from root to leaf. In terms of nodes or edges(nodes-1)

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

int height(Node* root){
    if(root == nullptr){
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt) + 1;
    return currHt;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    cout<<"Height: "<<height(root)<<endl;
    return 0;
}

//Count of Nodes:

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

int Count(Node* root){
    if(root == nullptr){
        return 0;
    }

    int leftCount = Count(root->left);
    int rightCount = Count(root->right);

    return leftCount + rightCount + 1;
}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    cout<<"Count: "<<Count(root)<<endl;

    Node* root2 = new Node(5);
    root2->left = new Node(3);
    root2->right = new Node(4);

    cout<<"Count2: "<<Count(root)<<endl; 
    return 0;
}

//Sum of Nodes:

#include <iostream>
#include <vector>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = nullptr;
    }
};

static int idx = -1;

Node* buildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = buildTree(nodes);   //left subtree
    currNode->right = buildTree(nodes);  //right subtree

    return currNode;
}

int Sum(Node* root){
    if(root == nullptr){
        return 0;
    }

    int leftSum = Sum(root->left);
    int rightSum = Sum(root->right);

    // return leftSum + rightSum + root->data;
    //OR
    int currsum = leftSum + rightSum + root->data;
    cout<<"Sum: "<<currsum<<endl;
    return currsum;

}

int main(){
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = buildTree(nodes);
    
    cout<<"Sum of Nodes: "<<Sum(root)<<endl;
    return 0;
}
