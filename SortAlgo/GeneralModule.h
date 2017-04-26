#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/time.h>
#include <unistd.h>

#ifndef _GENERALMODULE_H_ 
#define _GENERALMODULE_H_

class GeneralModule
{
	public:
		static GeneralModule* Instance();
		void Swap(int &forward, int &backword);
		void ShowArray(int Array[], int ArraySize);
		void StartCounting();
		void StopCounting();
	protected:
		GeneralModule();
	private:
		struct timeval tv;
		unsigned long long originalMilliSecond;
		unsigned long long terminalMilliSecond;
		static GeneralModule* _instance;
};

#endif
