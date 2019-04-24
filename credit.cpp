#include <iostream>
using namespace std;

void AlgorithmLuhn(long long& number);
bool IsCorrect(const long long& number);

int main()
{

system("pause");
return 0;
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