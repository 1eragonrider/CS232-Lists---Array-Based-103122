#ifndef _LIST_INTERFACE
#define _LIST_INTERFACE

class ListInterface
{
public:
	/*
	Determine whether this list is empty
	@return true if the list is empty; otherwise return false
	*/
	virtual bool IsEmpty() const = 0;

	/*
	Gets the curret number of entries in the list
	@return the integer number of entries currently in the list
	*/
	virtual int GetLength() const = 0;

	/*
	Inserts an entry into this list at a given position
	@pre none
	@post if 1 <= position <= GetLength() + 1 and the insertion is successful, new Entry is at the given position in the list, other entries are renumbered accordingly, and the returned value is true
	@param newPosition - This list position at which to insert newEntry
	@param newEntry - the entry to insert in the list
	@return - true if insertion is successful, or false if not
	*/
	virtual bool Insert(int newPosition, const int& newEntry) = 0;

	/*
	Removes the entry at a given position from the list
	@pre None
	@post if 1 <= position <= GetLength() + 1 and the removal is successful, the entry at the given position in the list is removed, the  items are renumbered accordingly, and the returned value is true
	@param position - the list position of the entry to remove
	@return - true if the removal is successful
	*/
	virtual bool Remove(int position) = 0;

	/*
	Removes all entries from the list
	@post list contains no entries and the count of items is 0 
	*/
	virtual void Clear() = 0;

	/*
	Gets the entry at the given position in the list
	@pre 1 <= position <= GetLength() + 1
	@post the desired entry has been returned
	@param position - The list position of the desired entry
	@return The entry at the given position
	*/
	virtual int GetEntry(int position) const = 0;

	/*
	Replaces the entry at the given position in the list
	@pre 1 <= position <= GetLength() + 1
	@post The entry at the given position is the newEntry
	@param position - The list position of the entry to replace
	@param newEntry - The replacement entry
	*/
	virtual void SetEntry(int position, const int& newEntry) = 0;
	
};

#endif // !_LIST_INTERFACE
