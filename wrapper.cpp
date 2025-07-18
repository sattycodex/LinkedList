struct Node{
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
    Node(int val,Node* node){
        this->val=val;
        this->next=node;
    }
};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        int size;
    public:
        LinkedList(){
            head=NULL;
            tail=NULL;
            size=0;
        }
        
        void addFirst(Node* node){
            if(size==0){
                head=node;
                tail=node;
                size++;
            }else{
                node->next=head;
                head=node;
                size++;
            }
        }
        
        void addFirst(int val){
            Node* temp=new Node(val);
            if(size==0){
                head=temp;
                tail=temp;
                size++;
            }else{
                temp->next=head;
                head=temp;
                size++;
            }
        }
        
        Node* removeFirst(){
            if(size==0)return NULL;
            Node* removedNode=head;
            head=head->next;
            removedNode->next=NULL;
            size--;
            return removedNode;
        }
        
        void addLast(Node* node){
            if(size==0){
                head=node;
                tail=node;
                size++;
            }else{
                tail->next=node;
                tail=node;
                size++;
            }
        }
        void addLast(int val){
            Node* node=new Node(val);
            if(size==0){
                head=node;
                tail=node;
                size++;
            }else{
                tail->next=node;
                tail=node;
                size++;
            }
        }
        
        Node* removeLast(){
            if(size==0)return NULL;
            else if(size==1){
                Node* lastnode=tail;
                head=NULL;
                tail==NULL;
                size--;
                return lastnode;
            }
            Node* temp=head;
            for(int i=0;i<size-2;i++){
                temp=temp->next;
            }
            Node* lastnode=tail;
            temp->next=NULL;
            tail=temp;
            size--;
            return lastnode;
        }
        
        void print(){
            Node* temp=head;
            while(temp){
                cout<<temp->val<<" ";
                temp=temp->next;
            }
        }
};
