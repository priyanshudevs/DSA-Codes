#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};


Node* createLinkedList(int arr[],int index,int size,Node *prev){
    // base case
    if(index==size){
        return prev;
    }
    Node *temp;
    temp = new Node(arr[index]);
    temp->next = prev;
    return createLinkedList(arr,index+1,size,temp);
}

int main(){
    Node *Head;
    Head = NULL;

    int arr[] = {2,4,6,8,10};
    Head = createLinkedList(arr,0,5,NULL);
    

    Node *temp;
    temp = Head;

    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    return 0;
}