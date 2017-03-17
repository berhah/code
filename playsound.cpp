#include <iostream>
using namespace std
#include <Windows.h>
#include <MMSystem.h>

int main()
{
	PlaySound(TEXT("ding.wav"), NULL, SND_SYNC);


	system("pause");
	return 0;
}