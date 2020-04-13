#include "BubbleSort.h"

void BubbleSort::sort()
{
	bool wasSwapped = true;
	int tempSwapArea = 0;

	// Loop until no swaps are found
	while (wasSwapped)
	{
		wasSwapped = false;
		// Loop through every item looking if next item is greater
		for (size_t i = 0; i < SortBase::_mainVector.size() - 1; i++)
		{
			if (SortBase::_mainVector[i] > SortBase::_mainVector[i + 1])
			{
				// Swap them
				tempSwapArea = SortBase::_mainVector[i + 1];
				SortBase::_mainVector[i + 1] = SortBase::_mainVector[i];
				SortBase::_mainVector[i] = tempSwapArea;
				wasSwapped = true;
			}
		}
	}
}