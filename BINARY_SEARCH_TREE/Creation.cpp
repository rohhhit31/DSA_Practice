#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *right;
    Node *left;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *insertoBST(Node *root, int d)
{
    // base case
    if (root == NULL)
    {
        return root;
    }
    if (d > root->data)
    {
        root->right = insertoBST(root->right, d);
    }
    else
    {
        root->left = insertoBST(root->left, d);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;

    while (data != -1)
    {
        root = insertoBST(root, data);
        cin >> data;
    }
}

void levelordertraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << "";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
int main()
{

    Node *root = NULL;

    cout << "Enter the data to insert into the BST" << endl;
    takeInput(root);

    cout << "Printing data in level order traversal" << endl;
    levelordertraversal(root);

    return 0;
}