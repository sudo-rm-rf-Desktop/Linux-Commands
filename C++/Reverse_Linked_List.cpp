#include<bits/stdc++.h>
 
using namespace std;
 
void fastio() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

struct node {
	int data;
	node* next;

	node(int x) {
		data = x;
		next = NULL;
	}
};

// //Naive
// node* reverse(node* head) {
// 	if(head == NULL || head->next == NULL) return head;
// 	node* current = head;
// 	vector<int> arr;
// 	while(current != NULL) {
// 		arr.push_back(current->data);
// 		current = current->next;
// 	}
// 	current = head;
// 	while(current != NULL) {
// 		current->data = arr.back();
// 		arr.pop_back();
// 		current = current->next;
// 	}
// 	return head;
// }

//Efficient
node* reverse(node* head) {
	if(head == NULL || head->next == NULL) return head;
	node* left = NULL;
	node* current = head;
	node* right;
	while(current != NULL) {
		right = current->next;
		current->next = left;
		left = current;
		current = right;
	}
	return left;
}

void print(node* head) {
	node* current = head;
	while(current != NULL) {
		cout<<current->data<<" ";
		current = current->next;
	}
}

int main() {
 
	fastio();
	
	node* head = new node(1);
	head->next = new node(2);
	head->next->next = new node(3);
	head->next->next->next = new node(4);
	head->next->next->next->next = new node(5);

	print(head);
	cout<<"\n";
	head = reverse(head);
	print(head);

	return 0;
}