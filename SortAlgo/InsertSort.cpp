#include "InsertSort.h"

InsertSort* InsertSort::_instance = NULL;

InsertSort::InsertSort()
{
	;
}

InsertSort* InsertSort::Instance()
{
	if (_instance == 0) 
	{ 
		_instance = new InsertSort(); 
	}
	return _instance;
}

int InsertSort::Process(int Array[], int ArraySize)
{
	int sortedElement = 0;
	int extractedElementPosition = 0;
	
	for(int i = 1; i < ArraySize; i++) 
	{
		extractedElementPosition = i;
		sortedElement = i - 1;
		
		for(int j = sortedElement; j >= 0; j--)
		{
			if(Array[j] > Array[extractedElementPosition])
			{
				GeneralModule::Instance()->Swap(Array[j], Array[extractedElementPosition]);
				extractedElementPosition = j;
			}
		}
	}
	return 0;
}
