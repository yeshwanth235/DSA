#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int val;
	Node* next;
	Node()
	{
		val = 0;
		next = NULL;
	}
	Node(int data)
	{
		this->val = data;
		this->next = NULL;
	}
};

class Linkedlist {
	Node* head;

public:
	// Default constructor
	Linkedlist() { head = NULL; }
	void insertNode(int);
	void printList();
	bool isPalindrome();
};

bool Linkedlist ::  isPalindrome() {
	Node* temp = head;
	stack<int> st;
	while(temp != NULL) {
		st.push(temp->val);
		temp = temp->next;
	}
	temp = head;
	while(temp != NULL) {
		int t = st.top();
		st.pop();
		if(t != temp->val) return false;
		temp = temp->next;
	}
	return true;
}


void Linkedlist::insertNode(int data)
{
	// Create the new Node.
	Node* newNode = new Node(data);
	if (head == NULL) {
		head = newNode;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL) {

		temp = temp->next;
	}
	temp->next = newNode;
}

void Linkedlist::printList()
{
	Node* temp = head;

	if (head == NULL) {
		cout << "List empty" << endl;
		return;
	}
	while (temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
}

// Driver Code
int main()
{
	clock_t begin = clock();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, a;
	cin>>n;
	Linkedlist list;

	// Inserting nodes
	for(int i=0; i<n; i++) {
		cin>>a;
		list.insertNode(a);
	}

	bool flag = list.isPalindrome();
	if(flag) cout<<"true"<<"\n"; 
	else cout<<"false \n";

	// list.printList();
	// cout <<"\n";

	clock_t end = clock();
	cout<<"\n\nEstimated time: "<<double(end - begin)/ CLOCKS_PER_SEC*1000<<"\n";
	return 0;
}
