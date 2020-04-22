#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct node{
    int data;
    struct node *next;
};
int main() {
    int n;
    cin >> n;
    struct node *head = NULL,*tail = NULL;
    for(int i = 0; i < n; i++){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        cin >> newnode -> data;
        newnode -> next = NULL;
        if(head == NULL){
            head = newnode;
            tail = newnode;
        }
        else{
            tail -> next = newnode;
            tail = newnode;
        }
    }
    int k;
    cin >> k;
    struct node *temp=head;
    for(int i = 0; i < k; i++)
        temp = temp -> next;
    struct node *temp1 = head, *temp2;
    while(k--){
        temp2 = temp1 -> next;
        free(temp1);
        temp1=temp2;
    }
    struct node *newh = temp;
    while(newh != NULL){
        cout << newh -> data;
        newh = newh -> next;
        if(newh != NULL)
            cout << "->";
    }
    return 0;
}
