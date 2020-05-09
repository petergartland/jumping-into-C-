class VectorofInt
{
public:
	VectorofInt();
	VectorofInt(int n);
	int get (const int index);
	void set(const int index, int value);
	void push_back(int value);
	const int length();
	void push_front(int value);
	VectorofInt &operator= (const VectorofInt& other);
	
private:
	int *vec;
	int size;
	int current;
};
