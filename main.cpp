#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <windows.h>
#include <fstream>
#include "funkcje.h"
using namespace std;
//to bedzie projekt ktory bedzie open source, musi byc przydatny, co to moze byc?
int main()
{
	string message = "Welcome to my program... \nI will show you a beautiful word of Linux!\nChoose a menu option\n";
	int x=0;
	while(message[x] != '\0')
	{
		cout<<message[x];
		Sleep(25);
		x++;
	}
	Sleep(1000);

	menu();
	choice();

	return 0;
}




