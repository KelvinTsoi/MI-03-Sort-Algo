#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "GeneralModule.h"

#ifndef _FASTSORT_H_
#define _FASTSORT_H_

class FastSort
{
	public:
		static FastSort* Instance();
		int Process(int Array[], int ArraySize);
	protected:
		FastSort();
	private:
	    int Partition(int Array[], int low, int high);
        void Sort(int Array[], int low, int high);
		static FastSort* _instance;
};

#endif
