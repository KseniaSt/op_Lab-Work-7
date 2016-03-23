#include <iostream>
#include <cstdlib>
using namespace std;


void inputMas(int *, char *, int, int);
void outputMas(int *, int);

int main()
{
	
	char str[100];
	const int n = 256;
	int number [n] = {0};

	cout << "Enter string: ";
	gets_s(str);
	cout << endl;

	int length = strlen(str);

	inputMas(number, str, n, length);
	outputMas(number, n);

	system("pause");
		return 0;
}

void inputMas (int *num, char * sym, int k_num, int k_sym)
{
	for (int i = 0; i < k_sym; i++)
		num[(int)sym[i]]++;
}

void outputMas(int *mas, int length)
{
	cout << "----------------------------------\n ASCII-code  Symbol   Quanitity  \n----------------------------------" << endl;
		for (int j = 0; j < length; j++)
		{
			if (mas[j] != 0) {
				printf("%7.d%10.c%10.d", j, (char)j, mas[j]);
				cout << endl;
			}
		}
	cout << "----------------------------------" << endl;

	
}

