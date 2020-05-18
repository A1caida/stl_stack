#include <stack>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	stack<int> owo;
	//poezd uwu;
	int ch=0;
	while (ch!= 5)
	{
		cout << "Введите номер выбора : " << endl;
		cout << "1)Заполнить.  " << endl;
		cout << "2)Заполнить c файла.  " << endl;
		cout << "3)Вывести.  " << endl;
		cout << "4)Выйти из программы.  " << endl;
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			double tempp;
			cout << "Номер поезда: "; cin >> tempp;
			int* temp = new int[10];
			double a=0, b=0;
			for (int i = 0; i < 10; i++)
			{
				temp[i] = rand() % 2 + 1;
				if (temp[i] == 1)
				{
					a++;
				}
				else
				{
					b++;
				}
			}
			tempp = tempp + (a / 10); tempp = tempp * 10; tempp = tempp + (b / 10); tempp = tempp * 10;
			
			owo.push(tempp);

			delete[] temp;
			
		}; break;
		case 2:
		{
			double tempp;
			ifstream file; string a;
			int b = 0; int c = 0; int error = 0;
			file.open("C:\\Users\\A1caida\\Desktop\\owo.txt", ios::out);
			if (!file) { cout << "Файла не существует." << endl; break; }
			cout << "Номер поезда: "; cin >> tempp;
			while (getline(file, a, ' '))
			{
				if (a == "1") { b++; }
				else  if (a == "2") { c++; }
				else { error++; }
			}
			tempp = tempp + (b / 10); tempp = tempp * 10; tempp = tempp + (c / 10); tempp = tempp * 10;

			cout << "Найдено " << error << " ошибок." << endl;
		}; break;
		case 3:
		{
			//owo.top();
			if (owo.empty()==true)
			{
				cout<<"Поездов нет."<<endl;
			}
			else
			{
				cout << "Номер поезда\t1-ый тип\t2-ой тип"<<endl;
				while (owo.empty() != true)
				{
					double a, b, num;
					b = owo.top() % 10; owo.top() = owo.top() / 10; a = owo.top() % 10; owo.top() = owo.top() / 10;
					cout << owo.top() <<"\t\t" <<a <<"\t\t" <<b<<endl;
					owo.pop();
				}
			}
			
			
		}

		default:
			break;
		}
	}

	

}

