// Multi-thread 001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void my_example1();
void my_example2();
void my_example3();
void my_example4();

int main() {
	my_example1();
	my_example2();
	my_example3();
	my_example4();

	printf("\n======= Program Ended ===========\n");
	printf("Press any key to exit\n");
	_getch();
    return 0;
}

