#include <iostream>
using namespace std;

int * FormArr(const long long& number);
int SumOdd(int* arr);

int main()
{

system("pause");
return 0;
}
int * FormArr(const long long& number)
{
int* digits = new int[16];
long long temp = number;

for (int i = 0; i < 16; i++, temp /= 10)
digits[i] = temp % 10;

return digits;
}

int SumOdd(int * arr)
{
int sum = 0;
for (int i = 0; i < 16; i += 2)
sum += arr[i];

return sum;
}