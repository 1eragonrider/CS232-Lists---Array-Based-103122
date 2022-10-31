#ifndef _Array_List
#define _Array_List

#include"ListInterface.hpp" // contract -> must include all the functions

class ArrayList : public ListInterface
{
private:
	static const int DEFAULT_CAPACITY = 100;
	int items[DEFAULT_CAPACITY]; // Array of list items
	int itemCount; // current count of list items
	int maxItems; // Maximum capacity of the list

public:
	ArrayList(); // default constructor

	// These are from the included interface file
	bool IsEmpty() const;
	int GetLength() const;
	bool Insert(int newPosition, const int& newEntry);
	bool Remove(int position);
	void Clear();
	int GetEntry(int position) const;
	void SetEntry(int position, const int& newEntry);

};

#endif // !_Array_List

