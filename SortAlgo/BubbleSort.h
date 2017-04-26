#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "GeneralModule.h"

#ifndef _BUBBLESORT_H_ 
#define _BUBBLESORT_H_

class BubbleSort
{
	public:
		static BubbleSort* Instance();
		int Floating(int Array[], int ArraySize);	
		int Diving(int Array[], int ArraySize);
	protected:
		BubbleSort();
	private:
		static BubbleSort* _instance;
};

#endif
