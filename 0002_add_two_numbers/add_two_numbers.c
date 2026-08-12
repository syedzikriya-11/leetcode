/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

struct ListNode dummy;
struct ListNode *current=&dummy;
int carry=0;

while(l1!=NULL||l2!=NULL){

int digitOne_l1;
    if(l1!=NULL){
    digitOne_l1=l1->val;
}
else{ 
    digitOne_l1=0;
    }
int digitTwo_l2;
    if(l2!=NULL){
    digitTwo_l2=l2->val;
}
else{ 
    digitTwo_l2=0;
    }
int sum= digitOne_l1+digitTwo_l2+carry;

//check for carry 
carry=sum/10;
int result=sum%10;

struct ListNode *newNode = malloc(sizeof(struct ListNode));
newNode->val = result;
newNode->next = NULL;

current->next = newNode;
current = current->next;
    if(l1!=NULL){
    l1=l1->next;
}

if(l2!=NULL){
    l2=l2->next;
}


}
if (carry != 0)
{
    struct ListNode *newNode = malloc(sizeof(struct ListNode));

    newNode->val = carry;
    newNode->next = NULL;

    current->next = newNode;
    current = current->next;
}
return dummy.next;
}