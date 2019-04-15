#include <iostream>
#include <iomanip>
using namespace std;
void buildStairs(int height, int choice); //Функция которая дулает не полную перамиду
void buildPyramide(int height, int choice2); //Функция на полную пирамиду
void Show(int &height, int &choice); // Финкция которая виводит пирамиди
int main() // Основной код
{
int height, choice;
cout << "Enter height:";
while (!(cin >> height) || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Input error! Retry input" << endl;
}
cout << "Enter choice:";
while (!(cin >> choice) || (cin.peek() != '\n'))
{
cin.clear();
while (cin.get() != '\n');
cout << "Input error! Retry input" << endl;
}
switch (choice)
{
case 1:
buildStairs(height, choice);
break;
case 2:
buildPyramide(height, choice);
break;
default:
break;
}
system("pause");
return 0;
}
void buildStairs(int height, int choice)
{
for (int i = 0; i < height; i++)
{
for (int j = i; j < height - 1; j++)
cout << " ";
for (int j = 0; j <= i; j++)
cout << "*";
cout << endl;
}
}

void buildPyramide(int height, int choice2)
{
for (int i = 0; i < height; i++)
{
for (int j = i; j < height - 1; j++)
cout << " ";
for (int j = 0; j <= i; j++)
cout << "*";
cout << " ";
for (int j = 0; j <= i; j++)
cout << "*";
for (int j = i; j < height - 1; j++)
cout << " ";
cout << endl;
}
}
void Show(int &height, int &choice)
{
cout << "Enter height:";
cin >> height;
cout << "Choose 1 or 2 :";
cin >> choice;
cout << endl;
}
