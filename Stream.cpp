#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <string> VectorSTR;
	string STR;
	int countSTR;

	cout << "¬ведите количество строк" << endl;
	cin >> countSTR;

	for (int i = 0; i < countSTR; i++) {

		setlocale(LC_ALL, "rus");
		
		cout << "¬ведите " << i + 1 << " строку" << endl;
		getline(cin, STR);
		VectorSTR.emplace_back(STR);
	}
	for (int i = 0; i < countSTR; i++) {
		cout << VectorSTR[i] << endl;
	 }


}