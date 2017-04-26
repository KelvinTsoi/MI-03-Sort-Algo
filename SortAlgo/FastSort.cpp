#include "FastSort.h"

FastSort* FastSort::_instance = NULL;

FastSort::FastSort()
{
	;
}

FastSort* FastSort::Instance()
{
	if (_instance == 0)
	{
		_instance = new FastSort();
	}
	return _instance;
}

int FastSort::Process(int Array[], int ArraySize)
{
    Sort(Array, 0, ArraySize - 1);
    return 0;
}

int FastSort::Partition(int Array[], int low, int high)
{
    int i = low;
    int j = high + 1;
    while(true)
    {
        while(Array[++i] < Array[low])
        {
            if(i == high)
                break;
        }

        while(Array[--j] > Array[low])
        {
            if(j == low)
                break;
        }

        if(i >= j)
            break;

        GeneralModule::Instance()->Swap(Array[i], Array[j]);
    }

    GeneralModule::Instance()->Swap(Array[low], Array[j]);

    return j;
}

void FastSort::Sort(int Array[], int low, int high)
{
    if (low >= high)
        return;

    int index = Partition(Array, low, high);

    Sort(Array, low, index - 1);
    Sort(Array, index + 1, high);
}
