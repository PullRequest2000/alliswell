#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

struct node{
	int value;
	node* next;
};

int main(){
	int sizeLL;
	cin >> sizeLL;
	node* head;
	int v;
	cin >> v;
	head->value = v;
	head->next = NULL;
	node* prev = head;
	while(sizeLL>1){
		cin >> v;
		node* newNode;
		newNode->value = v;
		newNode->next = NULL;
		prev->next = newNode;
		prev = newNode;
		sizeLL--;
	}
	prev->next = head;
	return 0;
}
