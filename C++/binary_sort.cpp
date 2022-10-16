// How to convert a sorted list to a binary search tree?
#include<bits/stdc++.h>
#define PI 3.141
using namespace std;
class LNode
{
	public:
	int data;
	LNode* next;
};
class TNode
{
	public:
	int data;
	TNode* left;
	TNode* right;
};
TNode* newNode(int data);
int countLNodes(LNode *head);
TNode* sortedListToBSTRecur(LNode **head_ref, int n);
TNode* sortedListToBST(LNode *head)
{
	int n = countLNodes(head);
	return sortedListToBSTRecur(&head, n);
}
TNode* sortedListToBSTRecur(LNode **head_ref, int n)
{
	if (n <= 0)
		return NULL;
	TNode *left = sortedListToBSTRecur(head_ref, n/2);
	TNode *root = newNode((*head_ref)->data);
	root->left = left;
	*head_ref = (*head_ref)->next;
	root->right = sortedListToBSTRecur(head_ref, n - n / 2 - 1);
	return root;
}
int countLNodes(LNode *head)
{
	int count = 0;
	LNode *temp = head;
	while(temp)
	{
		temp = temp->next;
		count++;
	}
	return count;
}
void push(LNode** head_ref, int new_data)
{
	LNode* new_node = new LNode();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(LNode *node)
{
	while(node!=NULL)
	{
		cout << node->data << " ";
		node = node->next;
	}
}
TNode* newNode(int data)
{
	TNode* node = new TNode();
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void preOrder(TNode* node)
{
	if (node == NULL)
		return;
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
}
int main()
{
    clock_t start=clock();
	LNode* head = NULL;
	push(&head, 6);
	push(&head, 9);
	push(&head, 5);
	push(&head, 4);
	push(&head, 2);
	push(&head, 3);
	push(&head, 1);
	cout<<"Given Linked List: ";
	printList(head);
	TNode *root = sortedListToBST(head);
	cout<<"\n\nPre-Order Traversal of constructed BST:  ";
	preOrder(root);
    cout<<"\n";
    cout<<"\nTime Taken = "<<((long double)(clock() - start)/CLOCKS_PER_SEC)<<endl;
	cout<<"\nSaiyam_Gupta\n21053043\n"<<endl;
	return 0;
}