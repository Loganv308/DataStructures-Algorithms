// Logan Velier
// Intro to Data Structure
// 3/30/2022

#include <iostream>

using namespace std;

struct Node 
{
   int data;
   Node* next;
};

void initNode(struct Node *head,int n){
   head->data = n;
   head->next =NULL;
}

void addNode(struct Node *head, int n) {
   Node *newNode = new Node;
   newNode->data = n;
   newNode->next = NULL;

   Node *cur = head;
   while(cur) {
       if(cur->next == NULL) {
           cur->next = newNode;
           return;
       }
       cur = cur->next;
   }
}

void recursiveReversePrint(struct Node *cur){
   if(cur==NULL){
       return ;
   }
   recursiveReversePrint(cur->next);
   cout<<cur->data<<" ";
}

void reversePrint (struct Node *head,int sz) {
   for(int i=sz-1;i>=0;i--){
       int n=i;
       Node *list = head;
       while(n--) {
           list = list->next;
       }
       cout << list->data << " ";
   }
   cout<<"\n";
}

int main()
{
   struct Node *newHead; // Creates a newHead node pointer
   struct Node *head = new Node; // Creates a new node pointer
   int n;
   cout<<"Enter number of elements to be added\n";
   cin>>n;
   int val;
   for(int i=0;i<n;i++) // Loops through based on input value (cin >> n)
   {
       cout<<"Enter value to be inserted" << endl;
       cin>>val;
       if(i==0)
       {
           initNode(head,val);
           continue;
       }
       addNode(head,val);
      
   }
   reversePrint(head,n);
   recursiveReversePrint(head);
   cout << endl;
   return 0;
}