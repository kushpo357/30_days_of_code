#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          //Node *n, *tail;
          if (head == NULL)
              head = new Node(data);
            //  cout<<"woah"<<endl;              
          else{
              Node *n = head;
              while(n->next) n=n->next;
              //tail->data=data;
              n->next=new Node(data);
          }
          //    head->data = data;
          //cout<<head->data<<endl;  
          //head->next = &n;
          //cout<<head->next<<endl;
          //cout<<&n<<endl;
          return head;     
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}