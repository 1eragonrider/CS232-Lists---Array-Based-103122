#include<iostream>
#include<string>
#include"ArrayList.hpp"
using namespace std;


ArrayList::ArrayList() // default constructor
{
	itemCount = 0;
	maxItems = DEFAULT_CAPACITY;
	items[maxItems];
}

// These are from the included interface file
bool ArrayList::IsEmpty() const
{
	return itemCount == 0; // returns true ONLY if the itemCount is 0
}

int ArrayList::GetLength() const
{
	return itemCount;
}

bool ArrayList::Insert(int newPosition, const int& newEntry)
{
	bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1) && (itemCount < maxItems);

	if (ableToInsert)
	{
		// make room for the new entry by shifting all entries at positions >= new postion towards the end of the array
		for (int pos = itemCount; pos >= newPosition; pos--)
		{
			items[pos] = items[pos - 1];
		}

		// insert entry
		items[newPosition - 1] = newEntry; // -1 because the user is assumed to start count at 1, not 0
		itemCount++;
	}
	return ableToInsert;
}

bool ArrayList::Remove(int position)
{
	bool ableToRemove = (position >= 0) && (position <= itemCount - 1);

	if (ableToRemove)
	{
		// remove entry by shifting all entries after position towards the beginning of the array
		for (int fromIndex = position, toIndex = fromIndex - 1; fromIndex < itemCount; fromIndex++, toIndex++)
		{
			items[toIndex] = items[fromIndex];
		}
		itemCount--;
	}
	return ableToRemove;
}

void ArrayList::Clear()
{
	itemCount = 0;
}

int ArrayList::GetEntry(int position) const
{
	position--; // make this index

	bool ableToGet = (position >= 0) && (position <= itemCount - 1);

	if (ableToGet)
	{
		return items[position];
	}
	else 
	{
		cout << "GetEntry() called with an empty list or invalid position" << endl;
	}
	return -1;
}

void ArrayList::SetEntry(int position, const int& newEntry)
{
	bool ableToSet = (position >= 0) & (position <= itemCount - 1);

	if (ableToSet)
	{
		items[position] = items[newEntry];
	}
	else
	{
		cout << "SetEntry() called with an invalid position" << endl;
	}
}