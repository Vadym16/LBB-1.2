#include <iostream>
#include <ctime>

using namespace std;



int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ukr");

    int N, T1, T2, T2i, L_mini = -1, min = 100;
    int arr[100];
    int* parr = arr;
    cout << "Введіть T1 : "; cin >> T1;
    cout << "Введіть T2 : "; cin >> T2;
    cout << "Введіть розмір масиву: "; cin >> N;
    cout << "Заповніть масив: " << endl;
    for (int i = 0; i < N; i++) {
        cin >> *(parr + i);
    }
    for (int i = 0; i < N; i++) {
        if (*(parr + i) == T2) {
            T2i = i;
            break;
        }
    }

    for (int i = T2i; i < N; i++) {
        if (*(parr + i) < T1) {
            L_mini = i;
        }
    }

    cout << "Індекс останього елемента меншого за T1 який знаходиться правіше T2: " << L_mini+1;

}