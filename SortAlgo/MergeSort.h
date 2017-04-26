#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "GeneralModule.h"

#ifndef _MERGESORT_H_ 
#define _MERGESORT_H_

class MergeSort
{
	public:
		static MergeSort* Instance();
		int Process(int Array[], int ArraySize);	
	protected:
		MergeSort();
	private:
		void Sort(int Array[], int low, int high);
		void Merge(int Array[], int low, int mid, int high);
		static MergeSort* _instance;
		int *Aux;
};

#endif
