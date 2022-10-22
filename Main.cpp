#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
/* Завдання 1. Написати програму, яка виводить на екран 
лінію заданим символом, вертикальну або горизонтальну, причому лінія може виводитися швидко, нормально 
і повільно. Спілкування з користувачем організувати через меню.
*/

int main()
{
	char arr[5];
	char i; 
	int speed = 0; 1; -1; 
	 
	cout << "Enter speed (-1, 0, 1) -> "; 
	cin >> speed; 

	cout << "Enter symbol-> ";
	cin >> i;

	if (speed == 1) {
		for (char i = 0; i < 5; i++)
		{
			for (char j = 0; j < 5; j++)
			{
				cout << arr[i] << endl;
				std::chrono::seconds dura(2);
				std::this_thread::sleep_for(dura);
			}
		}
	}
	if (speed == 0)
	{
		for (char i = 0; i < 5; i++)
		{
			for (char j = 0; j < 1; j++)
			{
				cout << arr[i] << '\t';
				std::chrono::seconds dura(1);
				std::this_thread::sleep_for(dura);
			}
		}
		cout << endl; 
	}

	else 
		for (char i = 0; i < 5; i++)
		{
			for (char j = 0; j < 3; j++)
			{
				cout << arr[i] << '\t';
			}
		}

	

	return 0;
}
