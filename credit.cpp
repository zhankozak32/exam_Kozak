#include <iostream>
using namespace std;

<<<<<<< HEAD
void AlgorithmLuhn(long long& number);
bool IsCorrect(const long long& number);

=======
>>>>>>> a7637c831563da4092a0d8dcba0fdbf3db6c4d76
int main()
{

system("pause");
return 0;
}
<<<<<<< HEAD

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
=======
>>>>>>> a7637c831563da4092a0d8dcba0fdbf3db6c4d76
