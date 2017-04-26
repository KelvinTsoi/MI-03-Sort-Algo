#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertSort.h"
#include "MergeSort.h"
#include "FastSort.h"

#include <unistd.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define ARRAY_SIZE	50

#if 1
const int stArr[ARRAY_SIZE] = {32, 65, 23, 110, 43,
							   82, 106, 33, 51, 9,
							   22, 0, 18, 952, -5,
							   61, 24, 7, 14, 55,
							   13, 30, -3, 27, 81,
							   12, 5, 16, 29, 44,
							   41, 106, 111, 911, 361,
							   2, 112, 120, 74, 90,
							   290, 233, 199, 4, 11,
							   826, 114, 620, 8, 6
							   };
#endif

int main(int argc, char** argv)
{
	int *tpArr = new int[ARRAY_SIZE];
	memcpy(tpArr, stArr, sizeof(int)*ARRAY_SIZE);

	#if 1
	GeneralModule::Instance()->ShowArray(tpArr, ARRAY_SIZE);
	FastSort::Instance()->Process(tpArr, ARRAY_SIZE);
	GeneralModule::Instance()->ShowArray(tpArr, ARRAY_SIZE);
	delete[] tpArr;
	#endif

	return 0;
}
