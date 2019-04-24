#include <iostream>
using namespace std;

int * FormArr(const long long& number);
int SumOdd(int* arr);
void AlgorithmLuhn(long long& number);
bool IsCorrect(const long long& number);
int SumEven(int* arr);

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

void AlgorithmLuhn(long long& number)
{
int* digits = FormArr(number);

int sum = 0;
sum += SumEven(digits);
sum += SumOdd(digits);

IsValid(sum);
}

bool IsCorrect(const long long& number)
{
if (number / 10E14 < 1 || number / 10E14 > 9 || !cin)
{
cin.clear();
while (cin.get() != '\n')
continue;
return false;
}

return true;
}

int SumEven(int * arr)
{
int sum = 0;
for (int i = 1; i < 16; i += 2)
{
if (arr[i] * 2 < 10)
sum += arr[i] * 2;
else
{
sum += (arr[i] * 2) % 10;
sum += (arr[i] * 2) / 10;
}
}

return sum;
}