//function to find out the minimum and maximum node for a binary search tree

void findmin(Node* root){
    Node *temp = root;
while(temp->left!=NULL){
    temp = temp->left;
}
return temp;
}


//for mac value


void findmax(Node* root){
Node *temp = root;

while(temp->right!=NULL){
    temp = temp->right;
}
return temp;
}