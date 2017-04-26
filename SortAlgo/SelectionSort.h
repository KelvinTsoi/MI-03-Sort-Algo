#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "GeneralModule.h"

#ifndef _SELECTIONSORT_H_ 
#define _SELECTIONSORT_H_

class SelectionSort
{
	public:
		static SelectionSort* Instance();
		int Process(int Array[], int ArraySize);	
	protected:
		SelectionSort();
	private:
		static SelectionSort* _instance;
};

#endif
