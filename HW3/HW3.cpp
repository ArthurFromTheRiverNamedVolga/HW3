// HW3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iostream>
#include <regex>
#include<math.h>
#include<fstream>
#include<ctype.h>
#include<sstream>
#include<string>
using namespace std;

void main1()
{
	setlocale(LC_ALL, "Ru");
	
   long double m,s, p, n ,r;
	cout << "введите s p n ";
	cin >> s >> p >> n;
	r = p / 100;
	m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
	if (r == 0)
	{
		cout << "Выплата равна  " << s / n / 12;
	}
	else
		cout << "Выплата равна  " << m;
}
void main2()//введено ограничение ввода отридцательных чисел . введена реуглировка точности до 7 знаков 
{ double S, m, p, r, x, y, w;
  int n;
  
  cout<< "Введите S,m и n : " << endl;
  cin>> S >> m >> n;
  if (n <= 0)
	  cout << "error n<0";
  else 
  {
	  for (double z = 0; z <= 1000000000; z += 0.0001)
	  {
		  p = z / 100;
		  r = p / 100;
		  x = pow((1 + r), n);
		  y = S * r;
		  w = (x * y) / (12 * (x - 1));
		  if (w >= m)
		  {
			  
			  cout.precision(7);
			  cout << fixed;
			  cout << "Процентная ставка равна: " << round(p*100)/ 100 << endl;
			  break;
		  }
	  }
      }
}
void main3()
{
	//работа с файлами
	
		setlocale(LC_ALL, "Ru");
		//FSREAM
		//IFSTREAM
		//OFSTREAM
		string path = "C:/Users/Lance and Lord Arthu/Desktop/myFile.txt";

		ifstream fout;
		fout.open(path);
		if
			(!fout.is_open())
		{
			cout << "error" << endl;
		}
		else
		{
			cout << "is open" << endl;

			char ch;
			while (fout.get(ch))
			{
				cout << ch;
			}

		}
		fout.close();


	
}
void main4()//поправка вывода-теперьвыводит числа
{

	
	
		ifstream file("C:/Users/Lance and Lord Arthu/Desktop/fileyo.txt" );//открыли файл для чтения
		int b;//буфер промежуточного хранения
		int fl = 0;
		do
		{
			if (file >> b)
			{
				cout << b << " ";
				fl++;
			}
			else
			{
				file.clear();
				file.ignore(1, ' ');
			}
		} while (!file.eof());
		file.close();
		if (fl == 0) {
			cout << "В файле не было цифр" << endl;
		}
	
		
	



}
void main5(){

	
		char symbols[30];
		int charcount[256]{};
		int n;

		for (int i = 0; i < 30; i++)// ввод массива и определение совпадений по символам
		{
			cin >> symbols[i];
			charcount[(int)symbols[i]]++;
		}
		cout << endl;
		for (int i = 0; i < 256; i++)// сортировка по коду символа
		{
			n = charcount[i];
			for (int j = 0; j < n; j++)
			{
				cout << char(i);
			}
		}
		cout << endl;
	
}

void main()

{
	setlocale(LC_ALL, "ru");
	cout << endl;
	cout << "Выберите номер задания : 1(заём) 2(ссуда) 3(файл) 4 (Выборка чисел из текста)  5 (Сортировка по алфавиту)";
	int num;
	cin >> num;
	if (num == 1)
	{
		cout << endl;
		main1();

	}

	else if (num == 2)
	{
		cout << endl;
		main2();

	}
	else if (num == 3)
	{
		cout << endl;
		main3();

	}
	else if (num == 4)
	{
		cout << endl;
		main4();

	}
	else if (num == 5)
	{
		cout << endl;
		main5();

	}
	else
	{
		cout << "Не правильно набран номер , ошибка №32нк7тсн7цупашним783т4пнцщ7епцпммуцнпмаи7е4це97мн4е89р7н489рмен3489о8943е8мтн89е35н3е0986не7она3неми9т67ме8936н5738епта8нетм3986пе5ат389н6те5м36е5пм6п5мнтн6мп6767ь" << endl << "подробнее на сайте :www.slavaarstocke.ru";
	}
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
