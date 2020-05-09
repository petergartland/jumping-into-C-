struct LinkedListNode
{
	int val;
	LinkedListNode *p_next;
};

class LinkedList
{
public:
	LinkedList();
	~LinkedList();
	void insert(int);
	LinkedList& operator= (const LinkedList& other);
	LinkedList (const LinkedList& other);  
//private:
	LinkedListNode* p_head;
};


