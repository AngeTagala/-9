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
			"�������ł��B",
			"�ԈႦ�ł��B",
			"ERROR"
		};

		cout << "        K A Z U A T E   G A M E          \n"
			<< "==========================================\n"
			<< "�P,�Q,�R�̒����琳�������𓖂ĂĂ��������B\n"
			<< "          ---------------------           \n" << endl;
		InitRand();
		int random = rand() % 3 + 1;
#if 1
		cout << "�R���s���[�^�[�F" << random << endl;
#endif // 1
		cin >> num;
		cout << "=========================================" << endl;

		cout << message[Compare2(num, random)] << endl;

		cout << "             �����܂����H              \n"
			<< "=======================================\n"
			<< "y = yes ���́@n = no�@����͂��Ă��������B\n"
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