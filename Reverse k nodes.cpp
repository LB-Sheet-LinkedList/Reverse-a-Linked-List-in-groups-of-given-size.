class Solution
{
    public:

    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
    
        
        //pehle normal reversing karo
        node *prevptr=NULL;
        node *currptr=head;
        node *nextptr=NULL;
        
        int count=0; //pta chale ki kab rukna hai
        
        while(currptr!=NULL && count<k)
        {
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            count++;
        }
        
        //ab k nodes reverse ho chuke hai 
        //isko recursively aage badhaane ke liye apne ko 
        //waapis call karna hoga 
        
        //check karo ki kahi apan last me to nhi pohoch gye
        if(nextptr!=NULL){
        head->next=reverse(nextptr,k);  //nextptr point karra hoga k+1 th element pe
        }
        
        //return new head
        return prevptr;
        
    }
};

