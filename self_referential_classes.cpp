  #include<iostream>
 using namespace std;
 class Node{
 	public:
 		int value;
 		Node *next;
 		Node(int val){
 			value=val;
 			next=NULL;
		 }
		 ~Node(){
		 
		 }
 };
 class LinkedList{
 	public:
 		Node *head;
 		LinkedList(){
 			head=NULL;
		 }
		 ~LinkedList(){
		 Node *curr = head;
        while (curr != NULL) {
            Node *temp = curr;
            curr = curr->next;
            delete temp;
        }
        head = NULL;
		 }
		 void insert(int val){
		 	Node *newnode=new Node(val);
		 	newnode->next=head;
		 	head=newnode;
		 }
		 void remove(int val){
		 	if(head==NULL){
		 		return;
			 }
			 if(head->value == val){
			 	Node *temp=head;
			 	head=head->next;
			 	temp->next=NULL;
			 	delete (temp);
			 	return;
			 }
			 Node *curr=head;
			 while(curr->next != NULL){
			 	if(curr->next->value == val){
			 		Node *temp=curr->next;
			 		curr->next=curr->next->next;
			 		delete (temp);
			 	    return;
				 }
				 curr=curr->next;
			 }
		 }
		 void display(){
		 	if(head==NULL){
		 	    cout<<"NO element to display."<<endl;
			 }
			
			 	Node *curr=head;
			 	while(curr != NULL){
			 		cout<< curr -> value <<"->";
			 		curr=curr -> next;
				 }
				 cout<<"NULL\n";
			 }
		 
 };
 int main(){
 	LinkedList list;
 	list.insert(50);
 	list.insert(40);
 	list.insert(30);
 	list.insert(20);
 	list.insert(10);
 	list.display();
 	list.remove(40);
 	list.display();
 	return 0;
 }