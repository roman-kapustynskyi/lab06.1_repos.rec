#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>

using namespace std;

void Create(int mas[], int n, int i) {

    if (i < n) {
        mas[i] = rand() % 61 - 35;
        Create(mas, n, i + 1);
    }
}
void Print(int mas[], int n, int i) {

    if (i < n) {
        cout << setw(4) << mas[i];
        Print(mas, n, i + 1);
    }
}
int Count(int mas[], int n, int i) {
    if (i >= n) return 0;


    if (mas[i] > 0 || mas[i] % 2 != 0)
        return 1 + Count(mas, n, i + 1);
    else
        return Count(mas, n, i + 1);
}
int Sum(int mas[], int n, int i) {
    if (i >= n)
    {
        return 0;
    }
    if (mas[i] > 0 || mas[i] % 2 != 0)
    {
        return mas[i] + Sum(mas, n, i + 1);
    }
    else
    {
        return Sum(mas, n, i + 1);
    }

}
void Zero(int mas[], int n, int i) {
    if (i < n) {
        if (mas[i] > 0 || mas[i] % 2 != 0) {
            mas[i] = 0;
        }
        Zero(mas, n, i + 1);
    }
}


int main()
{
    srand((unsigned)time(0));
    const int n = 27;
    int c[n];
    Create(c, n, 0);
    cout << "c = ";
    Print(c, n, 0);
    cout << endl;

    int count = Count(c, n, 0);
    int sum = Sum(c, n, 0);

    cout << "Count = " << count << endl;
    cout << "Sum = " << sum << endl;

    Zero(c, n, 0);

    cout << "Modified c = ";
    Print(c, n, 0);
    cout << endl;

    return 0;
}