/*
******************************
single linkedlist function : 
(1).create linkedlist
(2).create new node
(3).read linkedlist
(4).add head node of linkedlist
(5).add end node of linkedlist
(6).add mid node of linkedlist
(7).delete head node of linkedlist
(8).delete back node of linkedlist
(9).delete mid node of linkedlist
******************************
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct node{
	int val;
	struct node * next;	
};

struct node* getNode (){          
    int input=0;
	std::cout<<"Which value do you want to add in New Node? "<<std::endl;
	std::cin>>input;
	std::cout<<"You want to add : "<< input << " value in New Node" <<std::endl;
	node *p;
	p = (node *) malloc(sizeof(node));
	if ( p == NULL)
	{
		printf ("記憶體不足");
		exit(1);
	}
	p->val=input;
	p->next=NULL;
	return(p);
}

struct node* getNode2 (int input){          
    std::cout<<"You want to add : "<< input << " value in New Node" <<std::endl;
	node *p;
	p = (node *) malloc(sizeof(node));
	if ( p == NULL)
	{
		printf ("記憶體不足");
		exit(1);
	}
	p->val=input;
	p->next=NULL;
	return(p);
}

void freeLinkedlist(struct node *p){
	free(p);
}

struct node* reverseLinkedlist2(struct node* head){
	printf("Start reversing...\n");
	struct node *pre, *curr, *next;
	pre=NULL;
	curr = head;
	while(curr)
	{
		next = curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
	}
	
	return pre;
}

void reverseLinkedlist(struct node** head){
	printf("Start reversing...\n");
	struct node *pre, *curr, *next;
	pre=NULL;
	curr = *head;
	while(curr)
	{
		next = curr->next;
		curr->next=pre;
		pre=curr;
		curr=next;
	}
	*head = pre;
}

void readLinkedlist(struct node* head){
	printf("start read linkedlist... \n");
	int show;
	while(head)
	{
		show=head->val;
		printf("read : %d\n",show);
		head=head->next;
	}
}

void createLinkedlist(struct node* head, int num){
	std::cout<<"Start create new linkedlist !!! "<<std::endl;
	struct node *ptr = head;
	int count=0;
	while(count < num ){
		int input;
		std::cin>>input;
		ptr->val=input;
		count++;		
		if(count>=num)
		{
			ptr->next = NULL;
		}
		else
		{
			ptr->next = (struct node*)malloc(sizeof(node));	
        	ptr=ptr->next;
			ptr->next=NULL;                                                                                                                           
		}
	}
}

void deleteHeadLinkedlist(struct node** head){
	std::cout<<"Start delete head node !!! "<<std::endl;
	struct node* tmp, *curr;
	tmp=*head;
	curr=*head;
	curr=curr->next;
	free(tmp);
	*head=curr;
}

void deleteBackLinkedlist(struct node** head){
	std::cout<<"Start delete back node !!! "<<std::endl;
	struct node* tmp, * last;
	tmp=*head;
	while(tmp->next)
	{
		last=tmp;
		tmp=tmp->next;
	}
	last->next=NULL;
	free(tmp);
}

void deleteMidLinkedlist(struct node** head, int midNums){
	std::cout<<"Start delete midNums of node !!!  "<<std::endl;
	if(midNums==1){
		std::cout<<"You keyin midNumd can't = 1 !!!  "<<std::endl;
		return;
	}
	struct node* ptr, * curr, * tmp;
	ptr = *head;
	curr= *head;
	int count=1;
	while(ptr->next)
	{
		ptr=ptr->next;
		count++;
	}
	std::cout<<"you have : "<< count << " numbers of node "<<std::endl;
	if(midNums < count)
	{
		count=1;
		while( count < midNums)  //here midNums can't = 1
		{
			tmp=curr;
			curr=curr->next;
			count++;
		}	
		tmp->next=curr->next;
	}
	else
	{
		std::cout<<"You keyin midNums out of node! "<<std::endl;
		return;
	}
}

void addHeadLinkedlist(struct node** head, struct node* addNode){
	std::cout<<"Start add head node !!! "<<std::endl;
	struct node* tmp;
	tmp=*head;
	addNode->next=tmp;
	tmp=addNode;
	*head=tmp;
}

void addBackLinkedlist(struct node** head, struct node* addNode){
	std::cout<<"Start add back node !!! "<<std::endl;
	struct node* tmp1;
	tmp1 = (struct node*)malloc(sizeof(node));
	tmp1=*head;
	while(tmp1->next)
	{
		tmp1=tmp1->next;
	}
	tmp1->next=addNode;
}

void addMidLinkedlist(struct node** head, struct node* addNode, int midNums){
	std::cout<<"Start add midNums of node !!!  "<<std::endl;
	struct node* ptr, * curr, * tmp;
	ptr = *head;
	curr= *head;
	int count=1;
	while(ptr)
	{
		ptr=ptr->next;
		count++;
	}
	if(midNums < count)
	{
		count=1;
		while(count<midNums)
		{
			tmp=curr;
			curr=curr->next;
			count++;
		}	
		tmp->next=addNode;
		addNode->next=curr;
	}
	else
	{
		std::cout<<"You keyin midNums out of node! "<<std::endl;
		return;
	}
}

int main(int argc, char** argv) {	
	struct node * head, * ptr, * tmp1, * tmp2, * addNode;
	int count=0, nums=0, midNums=0; ;
	head = (struct node*)malloc(sizeof(node));
	ptr=head;
	std::cout<<"How many numbers do you want? "<<std::endl;
	std::cin >> nums ;
	std::cout<<"You want to keyin : "<< nums << " numbers. " <<std::endl;

	//keyin forward
	createLinkedlist(ptr, nums);
	readLinkedlist(ptr);

	//linkedlist reserve
	reverseLinkedlist(&ptr);
	readLinkedlist(ptr);

	//add head node
	addNode=getNode();
	addHeadLinkedlist(&ptr, addNode);
	readLinkedlist(ptr);
	
	//add back node
	addNode=getNode();
	addBackLinkedlist(&ptr, addNode);
	readLinkedlist(ptr);
	
	//add mid node
	addNode=getNode();
	std::cout<<"Which midNums of node do you want to add ? "<<std::endl;
	std::cin >> midNums ;
	addMidLinkedlist(&ptr, addNode, midNums);
	readLinkedlist(ptr);
	
	//delete head node
	deleteHeadLinkedlist(&ptr);
	readLinkedlist(ptr);
	
	//delete back node 
	deleteBackLinkedlist(&ptr);
	readLinkedlist(ptr);
	
	//delete mid node
	std::cout<<"Which midNums of node do you want to delete ? "<<std::endl;
	std::cin >> midNums ;
	deleteMidLinkedlist(&ptr, midNums);
	readLinkedlist(ptr);
		
	free(ptr);
	return 0;
}
