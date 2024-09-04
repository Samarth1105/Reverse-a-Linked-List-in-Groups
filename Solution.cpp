struct node {
    int data;
    struct node* next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
  
    struct node *reverseIt(struct node *head, int k) {
        if(head == NULL || head->next ==NULL || k==1){
            return head;
        }
    
        node* prev = NULL;
        node* curr = head;
        node* next = head->next;
    
        int count=0;
        while(curr!=NULL && count<k){ 
            next = curr->next;
            curr->next = prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        if (next != NULL) {
            head->next = reverseIt(next, k);
        }
    
        return prev; 
    }
};
