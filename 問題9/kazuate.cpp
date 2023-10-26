#include <iostream>
#include <cstdlib>
#include <ctime>
#include "kazuate.h"
using namespace std;

//void InitRand();
//int comJanken();

static void InitRand()
{
	srand((unsigned int)time(NULL));
}

static GuessedResult Compare2(int num, int comj)
{
	return
		(num == comj) ? RIGHT :
		(num != comj) ? WRONG :
		UNKNOWN;
}

void kazuate()
{
	while (true)
	{
		int num = 0;
		const char* message[] =
		{
			"正しいです。",
			"間違えです。",
			"ERROR"
		};

		cout << "        K A Z U A T E   G A M E          \n"
			<< "==========================================\n"
			<< "１,２,３の中から正しい数を当ててください。\n"
			<< "          ---------------------           \n" << endl;
		InitRand();
		int random = rand() % 3 + 1;
#if 1
		cout << "コンピューター：" << random << endl;
#endif // 1
		cin >> num;
		cout << "=========================================" << endl;

		cout << message[Compare2(num, random)] << endl;

		cout << "             続けますか？              \n"
			<< "=======================================\n"
			<< "y = yes 又は　n = no　を入力してください。\n"
			<< "        ---------------------          \n" << endl;

		char cont = 0;

		cin >> cont;

		cout << "=======================================" << endl;

		if (cont == 'y')
		{
			continue;
		}
		else
		{
			break;
		}

	}
}