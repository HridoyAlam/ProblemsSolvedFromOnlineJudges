#include<bits/stdc++.h>
using namespace std;

struct bst_node{
    int data;
    bst_node *left;
    bst_node *right;
};


bst_node* getNewNode(int item){

    bst_node* temp = new bst_node;
    temp->data = item;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

bst_node* insertItem(bst_node* root, int item){
    if(root == NULL){
        return getNewNode(item);
    }
    else if(item < root->data){
            root->left = insertItem(root->left, item);
    }
    else{
        root->right = insertItem(root->right, item);
    }
    return root;
}

int findMin(bst_node* root){
    bst_node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}
bst_node* f_min(bst_node* root){
    bst_node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;

}
int findMax(bst_node* root){
    bst_node* temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp->data;
}
bool Search(bst_node* root, int value){
    if(root == NULL){
        return false;
    }
    if(root->data == value){
        return true;
    }
    else if(value > root->data){
        return Search(root->right, value);
    }
    else{
        return Search(root->left, value);
    }
}

int get_successor(bst_node* root, int value){
    bool found = Search(root, value);
    if(!found){
        return 0;
    }
    else{
        int successor = 0;
        bst_node* ancestor = root;
        while(ancestor != NULL){
            if(value < ancestor->data){
                successor = ancestor->data;
                ancestor = ancestor->left;
            }
            else{
                ancestor = ancestor->right;
            }
        }
        return successor;
    }
}
int findHeight(bst_node* root){
    int l = 0, r = 0;
    if(root == NULL){
        return 0;
    }
    else{
        l = findHeight(root->left);
        r = findHeight(root->right);
        return max(l,r)+1;
    }

}
void preOder(bst_node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<"\t";
    preOder(root->left);
    preOder(root->right);
}
void inOrder(bst_node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<"\t";
    inOrder(root->right);
}/*
bst_node* in_order(bst_node* root){
    if(root == NULL){
        return;
    }
    in_order(root->left);
    in_order(root->right);

    return root;
}*/
void postOrder(bst_node* root){
    if(root ==  NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<"\t";

}
int nodes_ammount(bst_node* root){
    int cnt=0, l = 0, r= 0;
    if(root == NULL){
        return 0;
    }
    l = nodes_ammount(root->left);
    r = nodes_ammount(root->right);
    return (l+r+1);

}
bst_node* deleteNode(bst_node* root, int value){
    if(root == NULL){
        return root;
    }
    else if(value < root->data){
        root->left = deleteNode(root->left, value);
    }
    else if(value > root->data){
        root->right = deleteNode(root->right, value);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            bst_node* temp = root;
            root = root->left;
            delete temp;
        }
        else if(root->left == NULL && root->right != NULL){
            bst_node* temp = root;
            root = root->right;
            delete temp;
        }
        else{
            bst_node* temp = f_min(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
        return root;
    }
}
void printBST(bst_node* root){
    bst_node* temp = root;
    if(temp == NULL){
        return;
    }
    printBST(temp->left);
    cout<<temp->data<<"\t";
    printBST(temp->right);
}
void balence_bst(int keys[], int l, int r, bst_node* &rt){
    if(l>r){
        return;
    }
    int mid = (l+r)/2;
    rt = getNewNode(keys[mid]);
    balence_bst(keys, l, mid-1, rt->left);
    balence_bst(keys, mid+1, r, rt->right);

}
bst_node* convert(int keys[], int n){
    sort(keys, keys+n);
    bst_node* temp = NULL;
    balence_bst(keys, 0 , n-1, temp);
    return temp;
}
int main(){

    bst_node* root = NULL;
    printBST(root);
    root = insertItem(root, 20);

    insertItem(root, 15);
    insertItem(root, 91);
    insertItem(root, 24);
    printBST(root);
    cout<<endl;
    cout<<findMin(root)<<endl;
    cout<<findMax(root)<<endl;
    bool found = Search(root,15);
    if(found){
        cout<<"Value found in BST"<<endl;
    }
    else{
        cout<<"Value not found in BST"<<endl;
    }

    found = Search(root,100);
    if(found){
        cout<<"Value found in BST"<<endl;
    }
    else{
        cout<<"Value not found in BST"<<endl;
    }
    cout<<"Height of the BST is: "<<findHeight(root)<<endl;
    cout<<"Pre order Traverse: ";
    preOder(root);
    cout<<"\nIn order Traverse: ";
    inOrder(root);
    cout<<"\nPost order Traverse: ";
    postOrder(root);
    //deleteNode(root,20);
    cout<<endl;
    printBST(root);
    cout<<"\nNumber of nodes is: "<<nodes_ammount(root)<<endl;
    cout<<endl;
    cout<<"Successor of 15 is: "<<get_successor(root, 15)<<endl;
    cout<<"Successor of 20 is: "<<get_successor(root, 20)<<endl;
    cout<<"Successor of 24 is: "<<get_successor(root, 24)<<endl;
    cout<<"Successor of 91 is: "<<get_successor(root, 91)<<endl;
/*
    bst_node* rt = NULL;
    printBST(rt);
    rt = insertItem(rt, 11);
    insertItem(rt, 9);
    insertItem(rt, 4);
    insertItem(rt, 2);
    insertItem(rt, 7);
    insertItem(rt, 3);
    insertItem(rt, 17);
    insertItem(rt, 0);
    insertItem(rt, 5);
    insertItem(rt, 1);
    printBST(rt);
    build_min_height_tree(rt);
    */
    int keys[] = { 11, 9, 4, 2, 17, 3, 17, 0, 5, 1};
    int n = sizeof(keys)/sizeof(keys[0]);
    bst_node* rt = convert(keys, n);
    cout<<"Inserted values: ";
    for(int i=0;i<n;i++){
        cout<<keys[i]<<"\t";
    }
    cout<<endl;
    cout<<"Balenced Tree:   ";
    preOder(rt);

return 0;
}
