#include <iostream>

using namespace std;

class Critter
{
public:

	Critter(){
		HungerLevel = 50;
		ActiveLevel = 50;
	}
	
    int getHungerLevel(){
        return HungerLevel;
    }

    void passTime(){
        HungerLevel++;

        if(HungerLevel > 50){
            cout << "Питомец голодный";
        }
        if(ActiveLevel < 10){
            cout << "Питомец хочет спать";
        }
    }

    int getActiveLevel(){
        return ActiveLevel;

    }

    void sleep(int HoursSleep){
        ActiveLevel = ActiveLevel + HoursSleep;
    }

    void feed(int Hunger){
        HungerLevel = HungerLevel - Hunger;
    }

    void play(int Active){
        ActiveLevel = ActiveLevel - Active;
    }

    void ShowData(){
        cout << "Уровень голода = " << HungerLevel << endl;
        cout << "Уровень активности = " << ActiveLevel << endl;
    }


private:

    int HungerLevel;
    int ActiveLevel;
};

int main(){
	
	 cout << "Приветствуем в тамагочи" << endl;
	
	while(1){
		
    Critter fox;

    cout << "Введите номер желаемого действия" << endl;
    cout << "1 - вывести уровень голода и активности питомца" << endl;
    cout << "2 - покормить питомца" << endl;
    cout << "3 - поиграть с питомцем" << endl;
    cout << "4 - уложить питомца спать" << endl;

    int Number;
    cin >> Number;
    switch(Number){
        case 1: {
            fox.ShowData();
            break;
        }
        case 2: {
            cout << "Будем кормить питомца" << endl;
            cout << "Введите количество печенюшек" << endl;
            int  Cookie = 0;
            cin >> Cookie;
            fox.feed(Cookie);
            break;

        }
        case 3: {
            cout << "Будем играть с питомцем" << endl;
            cout << "Введите количество упражнений" << endl;
            int  Activity = 0;
            cin >> Activity;
            fox.play(Activity);
            break;
        }
        case 4: {
            cout << "Будем укладывать питомца спать" << endl;
            cout << "Введите количество часов сна" << endl;
            int  Hours = 0;
            cin >> Hours;
            fox.sleep(Hours);
            break;
        }
    }
}
}
