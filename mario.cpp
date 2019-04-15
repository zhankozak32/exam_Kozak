#include <iostream>
#include <iomanip>
using namespace std;
void buildStairs(int height, int choice);
void buildPyramide(int height, int choice2);
void Show(int &height, int &choice);
int main()
{

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
