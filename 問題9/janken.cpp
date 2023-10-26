#include <iostream>
#include <cstdlib>
#include <ctime>
#include "janken.h"
using namespace std;

//void InitRand();
//int comJanken();

static void InitRand()
{
	srand((unsigned int)time(NULL));
}

static CompareResult Compare1(int num, int comJ)
{
	return
		(num == 1 && comJ == 2 || num == 2 && comJ == 3 || num == 3 && comJ == 1) ? WIN :
		(comJ == 1 && num == 2 || comJ == 2 && num == 3 || comJ == 3 && num == 1) ? LOOSE :
		(num == 1 && comJ == 1 || num == 2 && comJ == 2 || num == 3 && comJ == 3) ? TIE :
		UNKNOWN;
}

void janken()
{
	while (true)
	{
		int num = 0;
		const char* message[] = {
			"あなたの勝ちです。",
			"あなたの負けです。",
			"引き分け",
			"ERROR"
		};

		cout << "        J A N K E N   G A M E          \n"
			<< "=======================================\n"
			<< "  グー：１　、ちょき：２　、パー：３　 \n"
			<< "        ---------------------          \n" << endl;
		InitRand();
		int random = rand() % 3 + 1;
#if 1
		cout << "コンピューター：" << random << endl;
#endif // 1
		cin >> num;
		cout << "=======================================" << endl;

		cout << message[Compare1(num, random)] << endl;

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