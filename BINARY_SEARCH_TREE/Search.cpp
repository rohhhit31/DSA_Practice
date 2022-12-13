//Function to search for an element in a BST 
//recursive method

void searchBST( Node* root , int d){
    //base case
    if(root==NULL){
        returun false;
    }
    if( root->data == d){
        return true;
    }
    if(root->data>d){
        return searchBST(root->left, d);
    } 
    else{
        return searchBST(root->right, d);
    }
}

//iterative apprach
//we will create an extra node for the same for the iteration purpose through all the nodes in order to search for the data

void searchiterBST(Node* root, int d){
    Node<int> *temp = root;

    while(temp!=NULL){
        if(data==x){
            return true;
        }
        if(root->data>x){
            temp = temp->left;
        }
        else
            temp = temp->right;

    }
}
return false;
