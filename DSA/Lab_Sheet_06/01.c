#include <stdio.h>
#include <stdlib.h>

// Define the structure of a BST node
struct node
{
    int data;              // Stores the value of the node
    struct node *left;     // Pointer to the left child
    struct node *right;    // Pointer to the right child
};

// Function prototypes
struct node *insert(struct node *root, int value);
void inorder(struct node *root);

int main()
{
    int n, value;

    // Initially the Binary Search Tree is empty
    struct node *root = NULL;

    // Get the number of nodes from the user
    printf("Enter number of nodes: ");
    scanf("%d", &n);

    // Get values from the user and insert them into the BST
    for (int i = 0; i < n; i++)
    {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);

        // Insert the value into the BST
        // root stores the root node of the tree
        root = insert(root, value);
    }

    // Display the BST using inorder traversal
    printf("\nBinary Search Tree nodes in Inorder Traversal: ");

    inorder(root);

    printf("\n");

    return 0;
}


// Function to insert a new value into the BST
struct node *insert(struct node *root, int value)
{
    // If we find an empty position, create a new node
    if (root == NULL)
    {
        struct node *newnode;

        // Allocate memory for the new node
        newnode = (struct node *)malloc(sizeof(struct node));

        // Store the value in the new node
        newnode->data = value;

        // New node does not have any children yet
        newnode->left = NULL;
        newnode->right = NULL;

        // Return the newly created node
        return newnode;
    }

    // If value is smaller than current node,
    // insert it into the left subtree
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }

    // If value is greater than current node,
    // insert it into the right subtree
    else if (value > root->data)
    {
        root->right = insert(root->right, value);
    }

    // Return the root of the tree
    return root;
}


// Function to perform inorder traversal
void inorder(struct node *root)
{
    // Continue only if the current node exists
    if (root != NULL)
    {
        // 1. Visit the left subtree
        inorder(root->left);

        // 2. Visit/print the current root node
        printf("%d ", root->data);

        // 3. Visit the right subtree
        inorder(root->right);
    }
}