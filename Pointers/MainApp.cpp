#include <iostream>

using namespace std;

void increment(double* d)
{
	*d += 0.01;
	cout << "Address of d: " << d << "  in function " << endl; // for q3
}

void main_q2()
{
	double d = 3.14;
	cout << "Initial value of d: " << d<<endl;
	increment(&d); // pass the address of d using the address of operator '&'
	cout << "final value of d: " << d << endl;
}

void main_q3()
{
	double d = 3.14;
	cout << "Initial value of d: " << d << endl;
	cout << "Address of d :" << &d << endl;
	increment(&d); // pass the address of d using the address of operator '&'
	cout << "final value of d: " << d << endl;
}

double divide(const int* d1, const int* d2)
{
	return *d1 / (float) * d2; // typecast avoids integer division problem.
}

void main_q4()
{
	int x = 7, y = 2;

	cout << x << " / " << y << " = " << divide(&x, &y) << endl;
}

double sum_5a(const double* arr, const int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double sum_5b(const double* arr, const int size)
{
	double sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += *arr;
		arr++;
	}
	return sum;
}
void main_q5()
{
	double arr[5] = {1.2,3.4,5.6,7.8,9.6};
	cout << "Sum using array notation: " << sum_5a(arr, 5) << endl;
	cout << "Sum using pointer notation: " << sum_5b(arr, 5) << endl;
}

void doubleElements(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		*arr = *arr * 2;
		arr++;
	}
}
int strcmp(const char* s1, const char* s2)
{
	while (*s1!='\0'&& *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return *s1 < *s2 ? -1 : (*s1 - *s2) == 0 ? 0 : 1;
}
void main_q7()
{
	char str1[] = "Are these the same ? ";
	char str2[] = "Are these the sane ? ";
	int result = strcmp(str1, str2);
	cout << "Result: " << result << endl;

	char str12[] = "Are these the same ?";
	char str22[] = "Are these the same ?  or not";
	result = strcmp(str12, str22);
	cout << "Result 2: " << result << endl;

	char str13[] = "Are these the same ?";
	char str23[] = "Are these the same ?";
	result = strcmp(str13, str23);
	cout << "Result 3: " << result << endl;

	char str14[] = "Are these the same ?";
	char str24[] = "Bare these the same ?";
	result = strcmp(str14, str24);
	cout << "Result 4: " << result << endl;
}
void display(int* arr, int size)
{
	cout << "[";
	for (int i = 0; i < size; i++)
	{
		if (i != 0)
		{
			cout << ", ";
		}
		cout << *arr;
		arr++;
	}
	cout << "]"<<endl;
}

void main_q6()
{
	int arr[10];
	for (int i = 1; i <= 10; i++)
	{
		arr[i-1] = i;
	}
	cout << "Initial Array";
	display(arr, 10);
	doubleElements(arr, 10);
	cout << "Array after doubleElements"; 
	display(arr, 10);

}
int main()
{
	//main_q2();
	//main_q3();

	//main_q4();
	//main_q5();
	//main_q6();
	main_q7();
	return 0;
}