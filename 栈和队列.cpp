#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "queue.h"
#include <stdlib.h>
using namespace std;

int main()
{
	Queue* q = queue_init();
	Type val;

	int num = 0;
	do
	{
		cin >> val;
		queue_push(q, val);
		num++;
	} while (getchar()!= '\n');

	for (int i = 0; i < num; i++)
	{
		cout << queue_pop(q) << '\t';
	}



	return 0;
}
