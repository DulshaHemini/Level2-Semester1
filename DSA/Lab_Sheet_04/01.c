#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *nextptr;
} *stnode;

void createNodeList(int n);  // function to create the list
void displayList(); // function to display the list

int main(){

    int n;

    printf("Input the number of nodes: ");
    scanf("%d", &n);

    createNodeList(n);
    displayList();

    
    return 0 ;
}

void createNodeList(int n){
    struct node *newnode; //used when creating a NEW node
    struct node *temp;  //remembers the CURRENT/LAST node

    int num, i;

    // Create the first node
    stnode=(struct node *)malloc(sizeof(struct node)); //Creates enough memory
    printf("Input data for node 1: ");
    scanf("%d", &num);

    stnode->data = num;
    stnode->nextptr = NULL;

    temp = stnode;

    for(i=2;i<=n;i++){
        //create new node
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Input data for node %d: ", i);
        scanf("%d", &num);

        newnode->data = num;
        newnode->nextptr = NULL;

        temp->nextptr = newnode; //Connect
        temp = newnode; //Move
    }

}

void displayList(){
    struct node *temp;

    temp = stnode;
    printf("\nData entered in the list:\n");
    while (temp != NULL)
    {
        printf("Data = %d\n", temp->data);
        temp = temp->nextptr;
    }
}