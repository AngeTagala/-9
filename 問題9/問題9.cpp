#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*一般的なじゃんけんゲーム,数当てゲームを作成しなさい。
２つのゲームの仕様は任せます。提出はgithubにて共有してください。

ただし、以下の条件を満たすこと。

■ファイル構成は以下のようにする。必要であれば以下以外にもcpp, hは追加してよい。
main.cpp ... main関数がある、必要な処理は下記から呼び出す。
janken.cpp ... じゃんけんの処理全般
janken.h ... じゃんけんのヘッダファイル
kazuate.cpp ... 数当てゲームの処理全般
kazuate.h ...  数当てゲームのヘッダファイル

■プログラミングルール
文字列の表記は必要であれば文字列の配列を使用すること。*/

void janken();
void kazuate();


int main()
{
	int pickNum = 0;

	cout << "K A Z U A T E  &  J A N K E N   G A M E\n"
		<< "=======================================\n"
		<< "               MENU                    \n"
		<< "        -------------------            \n"
		<< "      KAZUATE .............. 1         \n"
		<< "      JANKEN ............... 2         \n"
		<< "=======================================" << endl;

	cin >> pickNum;

	system("cls");

	if (pickNum == 1)
	{
		kazuate();
	}
	else
	{
		janken();
	}
	return 0;
}
