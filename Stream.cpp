#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <string> VectorSTR;
	string STR;
	int countSTR;

	cout << "������� ���������� �����" << endl;
	cin >> countSTR;

	for (int i = 0; i < countSTR; i++) {

		setlocale(LC_ALL, "rus");
		
		cout << "������� " << i + 1 << " ������" << endl;
		getline(cin, STR);
		VectorSTR.emplace_back(STR);
	}
	for (int i = 0; i < countSTR; i++) {
		cout << VectorSTR[i] << endl;
	 }


}