#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int data;
    struct node *next;
}node;
node* delete_node(node *head, int k)
{
    int i;
    for (i = 1; i < k; i++) {
        head = head -> next;
    }
    printf("%d ", head -> next -> data);
    head -> next = head -> next -> next;
    return head;
}
int main()
{
    node *head, *p, *q;
    int n,m,k,i;
    int count= 1;
    scanf("%d %d %d", &n, &m, &k);
    head = (node *)malloc(sizeof(node));
    p = head;
    p -> data = 1;
    p -> next = '\0';
    for (i = 2; i <= n; i++){
        q = (node *)malloc(sizeof(node));
        q -> data = i;
        q -> next = head;
        p -> next = q;
        p = q;
    }
    for (i = 2; i <m; i++) {
        head = head -> next;
    }
    printf("%d ", head -> next -> data);
    head -> next = head -> next -> next;
    while(count != n){
        head = delete_node(head, k);
        count++;
    }

}
