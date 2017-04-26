#include "GeneralModule.h"

GeneralModule* GeneralModule::_instance = NULL;

GeneralModule::GeneralModule()
{
	;
}

GeneralModule* GeneralModule::Instance()
{
	if (_instance == 0) 
	{ 
		_instance = new GeneralModule(); 
	}
	return _instance;
}

void GeneralModule::Swap(int &forward, int &backword)
{
	int tempValue = forward;
	forward = backword;
	backword = tempValue;
}

void GeneralModule::ShowArray(int Array[], int ArraySize)
{
	printf("\r\n[GeneralModule] Content:\r\n\t\t");
	for(int i = 0; i < ArraySize; i++)
	{
		if(i % 5 == 0 && i != 0)
			printf("\r\n\t\t");		
		printf("%3d ", Array[i]);
	}
	printf("\r\n");
}

void GeneralModule::StartCounting()
{
	gettimeofday(&tv,NULL);
	originalMilliSecond = (unsigned long long)tv.tv_sec*1000 + tv.tv_usec/1000;
}

void GeneralModule::StopCounting()
{
	gettimeofday(&tv,NULL);
	terminalMilliSecond = (unsigned long long)tv.tv_sec*1000 + tv.tv_usec/1000;
}
