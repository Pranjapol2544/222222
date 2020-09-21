#include <iostream>
#include <time.h>
using namespace std;
int Guess(int );
int main()
{
	int ran,round;
	srand(time(NULL));
	ran = 1 + rand() % 10;
	cout << "###Welcome to guessing number game###" << endl;
	cout << "Secret number has been chosen" << endl;

	round = Guess(ran);
	cout << "The secret number is " << ran << "" << endl;
	cout << "You made " << round << " guesses" << endl;
}
int Guess (int ran)
{
	int num = 0;
	int round = 1;
	while(true)
	{
		cout << "Guess the number (1 to 10) : ";
		cin >> num;
		if (num < ran)

			cout << "The secret number is lower" << endl;

		else if (num > ran)

			cout << "The secret number is higher" << endl;

		else
		{
			cout << "Congratulations!" << endl;
			break;
		}
		round++;
	}
	return round;
}
