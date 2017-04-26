#include "MergeSort.h"

MergeSort* MergeSort::_instance = NULL;

MergeSort::MergeSort()
{
	;
}

MergeSort* MergeSort::Instance()
{
	if (_instance == 0) 
	{ 
		_instance = new MergeSort(); 
	}
	return _instance;
}

int MergeSort::Process(int Array[], int ArraySize)
{
	Aux = new int[ArraySize];
	Sort(Array, 0, ArraySize - 1);
	return 0;
}

void MergeSort::Sort(int Array[], int low, int high)
{
	if(low >= high)	
		return;
	int mid = low + (high - low) / 2;
	Sort(Array, low, mid);
	Sort(Array, mid+1, high);
	Merge(Array, low, mid, high);
}

void MergeSort::Merge(int Array[], int low, int mid, int high)
{
	int i = low;
	int j = mid + 1;

    for (int k = low; k <= high; k++)
    {
        Aux[k] = Array[k];
    }
	
	for(int k = low; k <= high; k++)
	{
		if(i > mid)
		{
			Array[k] = Aux[j++];
		}
		else if(j > high)
		{
			Array[k] = Aux[i++];
		}
		else if(Aux[i] < Aux[j])
		{
			Array[k] = Aux[i++];
		}
		else
		{
			Array[k] = Aux[j++];
		}
	}
}
