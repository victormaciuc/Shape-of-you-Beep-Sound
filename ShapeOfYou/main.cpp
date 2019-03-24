#include <Windows.h>
#include <iostream>

using namespace std;

int main()
{
	int x;
	int vect[100] = { Beep(277, 850),Beep(329, 900),Beep(277, 600),Beep(277, 850),Beep(329, 850),Beep(277, 600),Beep(277, 800),Beep(329, 850),Beep(277, 700),Beep(311, 850),Beep(277, 800),Beep(247, 900),Beep(277, 850),Beep(329, 900),Beep(277, 600),Beep(277, 850),Beep(329, 850),Beep(277, 600),Beep(277, 800),Beep(329, 850),Beep(277, 700),Beep(311, 850),Beep(277, 800),Beep(247, 900), Beep(330,550),Beep(370,550),Beep(415,550),Beep(370,550),Beep(330,550),Beep(330,550),Beep(370,550),Beep(370,900), Beep(330,550),Beep(370,550), Beep(415,550), Beep(370,550), Beep(330,550),Beep(330,550), Beep(370,550), Beep(247,960), Beep(247,550),Beep(330,550),Beep(370,550), Beep(415,550), Beep(370,550), Beep(330,550), Beep(370,550), Beep(370,900), Beep(330,550),Beep(370,550), Beep(415,550), Beep(370,550), Beep(330,550),Beep(370,550),Beep(247,960) };
	for (x = 0; x <= 70; x++)
		vect[x];
	system("pause");
	return 0;
}