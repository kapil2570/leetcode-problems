class LRUCache {
public:
    class Node {
        public:
            int key;
            int val;
            Node* next;
            Node* prev;
        Node(int _key, int _val) {
            key = _key;
            val = _val;
        }
    };

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);

    int cap;
    unordered_map<int,Node*>mpp;
    LRUCache(int capacity) {
        cap = capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addNode(Node* newNode) {
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }

    void deleteNode(Node* deleteNode) {
        Node* delprev = deleteNode->prev;
        Node* delnext = deleteNode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    
    int get(int _key) {
        if(mpp.find(_key)!=mpp.end()) {
            Node* resNode = mpp[_key];
            int res = resNode->val;
            mpp.erase(_key);
            deleteNode(resNode);
            addNode(resNode);
            mpp[_key] = head->next;
            return res;
        }
        return -1;
    }
    
    void put(int _key, int value) {
        if(mpp.find(_key)!=mpp.end()) {
            Node* existingNode = mpp[_key];
            mpp.erase(_key);
            deleteNode(existingNode);
        }
        if(mpp.size()==cap) {
            mpp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(_key,value));
        mpp[_key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */