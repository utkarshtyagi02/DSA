/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void insertcopy(Node* head){
    Node*temp=head;
    while(temp!=NULL){
        Node* nextelement=temp->next;
        Node* copy= new Node(temp->val);
        copy->next=nextelement;
        temp->next =copy;
        temp=nextelement;
        }}

void connectrandom(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        Node* copynode=temp->next;
        if(temp->random){
            copynode->random=temp->random->next;

        }
        else{
            copynode->random=nullptr;
        }
        temp=temp->next->next;
        
    }
}    
 
Node* getdeepcopylist(Node* head){
    Node* temp = head;
    Node* dummynode=new Node(-1);
    Node* res= dummynode;
    while(temp!=NULL){
        res->next=temp->next;
        res=res->next;
        temp->next=temp->next->next;
        temp=temp->next;
    }
    return dummynode->next;
} 
    Node* copyRandomList(Node* head) {
        insertcopy(head);
        connectrandom(head);
        return getdeepcopylist(head);
    }
};