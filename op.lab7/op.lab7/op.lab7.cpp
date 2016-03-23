#include <iostream>
#include <cstdlib>
using namespace std;


void inputMas(int *, char *, int, int);
void outputMas(int *, int);
void max(int *, int);
void min(int *, int);


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
	max(number, n);
	min(number, n);
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

void max(int *mas, int length)
{
	int max_el = mas[0];
	int num_max = 0;
	for (int i = 0; i < length; i++)
		if (mas[i] > max_el) { max_el = mas[i]; num_max = i; }
	cout << "MAX:" << max_el << "  " << (char)num_max << endl;
}


void min(int *mas, int length)
{
	int min_el = mas[0];
	int num_min = 0;
	for (int i = 0; i < length; i++)
		if (mas[i] != 0){
			if (mas[i] < min_el) { min_el = mas[i]; num_min = i; }
		}
	cout << "MIN:" << min_el << "  " << (char)num_min << endl;
}

