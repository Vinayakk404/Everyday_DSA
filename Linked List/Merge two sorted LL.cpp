#include <iostream>
using namespace std;
struct Node{
    
    int data;
    Node *next;
    Node(int val){data=val;next=NULL;}
};
void add(Node*&head,int data){
    Node*n=new Node(data);
    if(head==NULL){
        head=n;
    }
    else{Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
}
void display(Node*head3){
    while(head3!=NULL){
    cout<<    head3->data<<endl;head3=head3->next;
    }
}
Node* sortt(Node*&head1,Node*&head2){
    Node *temp1=head1;
    Node*temp2=head2;
    Node*head3=new Node(-1);
    Node *temp3=head3;
    while(temp1!=NULL and temp2!=NULL ){
        if(temp1->data<temp2->data){
          temp3->next=temp1;
           temp1=temp1->next;
        }
        
         else if(temp1->data>temp2->data){
        
           temp3->next=temp2;
           temp2=temp2->next;
        }
        temp3=temp3->next;      
    }
    
    while(temp2!=NULL){temp3->next=temp2;temp2=temp2->next;temp3=temp3->next;}
     while(temp1!=NULL){temp3->next=temp1;temp1=temp1->next;temp3=temp3->next;}
     return head3->next;
}
int main() {
	Node*head1=NULL;
	Node*head2=NULL;
	Node*head3=NULL;
	add(head1,1);
	add(head1,5);
	add(head1,8);
	add(head2,3);
	add(head2,4);
	add(head2,9);
//	display(head1);
//	cout<<"Head 2"<<endl;
	//display(head2);
Node *k=sortt(head1,head2);
	display(k);
	return 0;
}
