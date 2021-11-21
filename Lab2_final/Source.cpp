#include "ClassVector_template.h"
#include <iostream>
#include <string>
#include <cstring>
#include <climits>

void PrintMenu()
{
	std::cout << "1 - add up vectors\n2 - subtract vectors\n3 - multiply vectors\n4 - change first vector\n5 - change second vector\n0 - exit" << std::endl;
}

void PrintVectorMenu()
{
	std::cout << "\n1 - Change element\n2 - multiply by number\n3 - divide by number\n0 - back";
}

template <typename T>
void WorkingWithVectors(vector<T>& first, vector<T>& second)
{
	bool check = true;
	while (check)
	{
		system("cls");
		std::cout << first << std::endl;
		std::cout << second << std::endl;
		PrintMenu();
		int option = -1;
		std::cout << "Choose an option by number: ";
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> sum;
			try
			{
				sum = first + second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << sum << std::endl;
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> dif;
			try
			{
				dif = first - second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << dif << std::endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			T result;
			try
			{
				result = first * second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << result << std::endl;
			system("pause");
			break;
		}
		case 4:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << first << std::endl;
				PrintVectorMenu();
				int option1;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option1;
				switch (option1)
				{
				case 1:
				{
					size_t index;
					T value;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter a new value: ";
					std::cin >> value;
					try
					{
						first[index - 1] = value;
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					first *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					first /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 5:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << second << std::endl;
				PrintVectorMenu();
				int option2;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option2;
				switch (option2)
				{
				case 1:
				{
					size_t index;
					T value;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter a new value: ";
					std::cin >> value;
					try
					{
						second[index - 1] = value;
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					second *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					second /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 0:
		{
			check = false;
			break;
		}
		}
	}
}

template <typename T>
void WorkingWithComplexDouble(vector<T>& first, vector<T>& second)
{
	bool check = true;
	while (check)
	{
		system("cls");
		std::cout << first << std::endl;
		std::cout << second << std::endl;
		PrintMenu();
		int option = -1;
		std::cout << "Choose an option by number: ";
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> sum;
			try
			{
				sum = first + second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << sum << std::endl;
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> dif;
			try
			{
				dif = first - second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << dif << std::endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			std::complex<double> result;
			try
			{
				result = first * second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << result << std::endl;
			system("pause");
			break;
		}
		case 4:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << first << std::endl;
				PrintVectorMenu();
				int option1;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option1;
				switch (option1)
				{
				case 1:
				{
					size_t index;
					double real, imag;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter real value: ";
					std::cin >> real;
					std::cout << "Enter imaginary value: ";
					std::cin >> imag;
					try
					{
						first[index - 1] = std::complex<double>(real,imag);
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					first *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					first /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 5:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << second << std::endl;
				PrintVectorMenu();
				int option2;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option2;
				switch (option2)
				{
				case 1:
				{
					size_t index;
					double real, imag;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter real value: ";
					std::cin >> real;
					std::cout << "Enter imaginary value: ";
					std::cin >> imag;
					try
					{
						second[index - 1] = std::complex<double>(real, imag);
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					second *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					second /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 0:
		{
			check = false;
			break;
		}
		}
	}
}

template <typename T>
void WorkingWithComplexFloat(vector<T>& first, vector<T>& second)
{
	bool check = true;
	while (check)
	{
		system("cls");
		std::cout << first << std::endl;
		std::cout << second << std::endl;
		PrintMenu();
		int option = -1;
		std::cout << "Choose an option by number: ";
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> sum;
			try
			{
				sum = first + second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << sum << std::endl;
			system("pause");
			break;
		}
		case 2:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			vector<T> dif;
			try
			{
				dif = first - second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << dif << std::endl;
			system("pause");
			break;
		}
		case 3:
		{
			system("cls");
			std::cout << "The result:\n" << std::endl;
			std::complex<float> result;
			try
			{
				result = first * second;
			}
			catch (const char* error)
			{
				std::cout << error << std::endl;
			}
			std::cout << result << std::endl;
			system("pause");
			break;
		}
		case 4:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << first << std::endl;
				PrintVectorMenu();
				int option1;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option1;
				switch (option1)
				{
				case 1:
				{
					size_t index;
					float real, imag;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter real value: ";
					std::cin >> real;
					std::cout << "Enter imaginary value: ";
					std::cin >> imag;
					try
					{
						first[index - 1] = std::complex<float>(real, imag);
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					first *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					first /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 5:
		{
			bool flag = true;
			while (flag)
			{
				system("cls");
				std::cout << second << std::endl;
				PrintVectorMenu();
				int option2;
				std::cout << "\nChoose an option by number: ";
				std::cin >> option2;
				switch (option2)
				{
				case 1:
				{
					size_t index;
					float real, imag;
					std::cout << "Which element: ";
					std::cin >> index;
					std::cout << "Enter real value: ";
					std::cin >> real;
					std::cout << "Enter imaginary value: ";
					std::cin >> imag;
					try
					{
						second[index - 1] = std::complex<float>(real, imag);
					}
					catch (const char* err)
					{
						std::cout << err << std::endl;
						system("pause");
					}
					break;
				}
				case 2:
				{
					T value;
					std::cout << "Enter a multiplier: ";
					std::cin >> value;
					second *= value;
					break;
				}
				case 3:
				{
					T value;
					std::cout << "Enter a divisor: ";
					std::cin >> value;
					second /= value;
					break;
				}
				case 0:
				{
					flag = false;
					break;
				}
				}
			}
			break;
		}
		case 0:
		{
			check = false;
			break;
		}
		}
	}
}

int main()
{
	vector<int> first_int(2);
	vector<int> second_int(2);
	vector<double> first_double(2);
	vector<double> second_double(2);
	vector<float> first_float(2);
	vector<float> second_float(2);
	vector<std::complex<double>> first_cdouble(2);
	vector<std::complex<double>> second_cdouble(2);
	vector<std::complex<float>> first_cfloat(2);
	vector<std::complex<float>> second_cfloat(2);
	while (true)
	{
		system("cls");
		std::cout << "Choose a type:\n1 - int\n2 - double\n3 - float\n4 - complex double\n5 - complex float\n0 - exit\n" << std::endl;
		int option = -1;
		std::cin >> option;
		switch (option)
		{
		case 1:
		{
			WorkingWithVectors(first_int, second_int);
			break;
		}
		case 2:
		{
			WorkingWithVectors(first_double, second_double);
			break;
		}
		case 3:
		{
			WorkingWithVectors(first_float, second_float);
			break;
		}
		case 4:
		{
			WorkingWithComplexDouble(first_cdouble, second_cdouble);
			break;
		}
		case 5:
		{
			WorkingWithComplexFloat(first_cfloat, second_cfloat);
			break;
		}
		case 0:
		{
			return 0;
		}
		}
	}
}