#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    cout << "Введите размер массива :" << endl;
    int size;
    cin >> size;
    vector <int> arr(size);

    cout << "1 - ввод с клавиатуры\n2 - рандомный ввод" << endl;
    int x;
    cin >> x;

    if (x == 1)
    {
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    if (x == 2)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = 10 - rand() % 20;
            cout << arr[i] << endl;
        }
    }
    int min = arr[0], min1 = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min1 = i;
        }
    }
    cout << " Минимальный элемент массива равен " << min << endl;

    int sum = 0;
    for (int i = 0; i < min1; i++)
    {
        sum += arr[i];
    }
    cout << "Сумма равняется  " << sum << endl;

    system("pause");
    return 0;
}