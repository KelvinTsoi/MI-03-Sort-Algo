#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "GeneralModule.h"

#ifndef _INSERTSORT_H_ 
#define _INSERTSORT_H_

class InsertSort
{
	public:
		static InsertSort* Instance();
		int Process(int Array[], int ArraySize);	
	protected:
		InsertSort();
	private:
		static InsertSort* _instance;
};

#endif
