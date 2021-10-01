#include <iostream>
#include "solution.h"

using namespace std;

void main() {
	setlocale(LC_ALL, "Rus");
	
	int chislo = 1 ;
	cin >> chislo;
	if (chislo == 0) {
		cout << "Ноль";
		return;
	}
	if (chislo < 0) {
		cout << "минус ";
		chislo = -chislo;
	}
	int razryady = 0;
	//функция, которая определяет количество разрядов в числе//
	if (chislo == 0) {
		razryady = 1;
	}
	int temp = chislo;
	while (temp != 0) {
		temp /= 10;
		razryady += 1;
	}
	int divisor = 1;
	for (int i = 1; i < razryady; i += 1) {
		divisor *= 10;
	}
	if (razryady == 7 || razryady == 8) {
		if (razryady == 8) {
			cout << "десять миллионов ";
			razryady -= 2;
			divisor /= 100;
		}
		if (razryady == 7) {
			switch (chislo / divisor % 10) {
			case 9: 
				cout << "девять миллионов ";
				divisor /= 10;
				break;
			case 8:
				cout << "восемь миллионов ";
				divisor /= 10;
				break;
			case 7:
				cout << "семь миллионов ";
				divisor /= 10;
				break;
			case 6:
				cout << "шесть миллионов ";
				divisor /= 10;
				break;
			case 5:
				cout << "пять миллионов ";
				divisor /= 10;
				break;
			case 4:
				cout << "четыре миллиона ";
				divisor /= 10;
				break;
			case 3:
				cout << "три миллиона ";
				divisor /= 10;
				break;
			case 2:
				cout << "два миллиона ";
				divisor /= 10;
				break;
			case 1:
				cout << "один миллион ";
				divisor /= 10;
				break;
			}
			razryady -= 1;
		}
	}
	if (razryady == 6) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девятьсот ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 8:
			cout << "восемьсот ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 7:
			cout << "семьсот ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 6:
			cout << "шестьсот ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 5:
			cout << "пятьсот ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 4:
			cout << "четыреста ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 3:
			cout << "триста ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 2:
			cout << "двести ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 1:
			cout << "сто ";
			divisor /= 10;
			if (chislo / divisor / 10 % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		}
		razryady -= 1;
	}
	if (razryady == 5) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девяносто ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 8:
			cout << "восемьдесят ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 7:
			cout << "семьдесят ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 6:
			cout << "шестьдесят ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 5:
			cout << "пятьдесят ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 4:
			cout << "сорок ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 3:
			cout << "тридцать ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 2:
			cout << "двадцать ";
			divisor /= 10;
			if (chislo / divisor % 10 == 0) {
				cout << "тысяч ";
			}
			break;
		case 1:
			divisor /= 10;
			razryady -= 1;
			switch (chislo / divisor % 10) {
			case 9:
				cout << "девятнадцать тысяч ";
				divisor /= 10;
				break;
			case 8:
				cout << "восемнадцать тысяч ";
				divisor /= 10;
				break;
			case 7:
				cout << "семнадцать тысяч ";
				divisor /= 10;
				break;
			case 6:
				cout << "шестнадцать тысяч ";
				divisor /= 10;
				break;
			case 5:
				cout << "пятнадцать тысяч ";
				divisor /= 10;
				break;
			case 4:
				cout << "четырнадцать тысяч ";
				divisor /= 10;
				break;
			case 3:
				cout << "тринадцать тысяч ";
				divisor /= 10;
				break;
			case 2:
				cout << "двенадцать тысяч ";
				divisor /= 10;
				break;
			case 1:
				cout << "одиннадцать тысяч ";
				divisor /= 10;
				break;
			case 0:
				cout << "десять тысяч ";
				divisor /= 10;
				break;
			}
			break;
		default:
			divisor /= 10;
			break;
		}
		razryady -= 1;
	}
	if (razryady == 4) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девять тысяч ";
			divisor /= 10;
			break;
		case 8:
			cout << "восемь тысяч ";
			divisor /= 10;
			break;
		case 7:
			cout << "семь тысяч ";
			divisor /= 10;
			break;
		case 6:
			cout << "шесть тысяч ";
			divisor /= 10;
			break;
		case 5:
			cout << "пять тысяч ";
			divisor /= 10;
			break;
		case 4:
			cout << "четыре тысячи ";
			divisor /= 10;
			break;
		case 3:
			cout << "три тысячи ";
			divisor /= 10;
			break;
		case 2:
			cout << "две тысячи ";
			divisor /= 10;
			break;
		case 1:
			cout << "одна тысяча ";
			divisor /= 10;
			break;
		default:
			divisor /= 10;
			razryady -= 1;
			break;
		}
		razryady -= 1;
	} 
	if (razryady == 3) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девятьсот ";
			divisor /= 10;
			break;
		case 8:
			cout << "восемьсот ";
			divisor /= 10;
			break;
		case 7:
			cout << "семьсот ";
			divisor /= 10;
			break;
		case 6:
			cout << "шестьсот ";
			divisor /= 10;
			break;
		case 5:
			cout << "пятьсот ";
			divisor /= 10;
			break;
		case 4:
			cout << "четыреста ";
			divisor /= 10;
			break;
		case 3:
			cout << "триста ";
			divisor /= 10;
			break;
		case 2:
			cout << "двести ";
			divisor /= 10;
			break;
		case 1:
			cout << "сто ";
			divisor /= 10;
			break;
		default:
			divisor /= 10;
			break;
		}
		razryady -= 1;
	}
	if (razryady == 2) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девяносто ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 8:
			cout << "восемьдесят ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 7:
			cout << "семьдесят ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 6:
			cout << "шестьдесят ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 5:
			cout << "пятьдесят ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 4:
			cout << "сорок ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 3:
			cout << "тридцать ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 2:
			cout << "двадцать ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 1:
			divisor /= 10;
			switch (chislo / divisor % 10) {
			case 9:
				cout << "девятнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 8:
				cout << "восемнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 7:
				cout << "семнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 6:
				cout << "шестнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 5:
				cout << "пятнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 4:
				cout << "четырнадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 3:
				cout << "тринадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 2:
				cout << "двенадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 1:
				cout << "одиннадцать ";
				divisor /= 100;
				razryady -= 2;
				break;
			case 0:
				cout << "десять ";
				divisor /= 100;
				razryady -= 2;
				break;
			}
		}
	} if (razryady == 1) {
		switch (chislo / divisor % 10) {
		case 9:
			cout << "девять ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 8:
			cout << "восемь ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 7:
			cout << "семь ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 6:
			cout << "шесть ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 5:
			cout << "пять ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 4:
			cout << "четыре ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 3:
			cout << "три ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 2:
			cout << "два ";
			divisor /= 10;
			razryady -= 1;
			break;
		case 1:
			cout << "один ";
			divisor /= 10;
			razryady -= 1;
			break;
		}
	} razryady -= 1;
}
