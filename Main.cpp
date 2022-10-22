#include <iostream>
#include<time.h>
#include <windows.h>

using namespace std;
 /* Завдання 3. В одновимірному масиві, що складається з 
N дійсних чисел, обчислити:
■ Суму від'ємних елементів;
■ Добуток елементів, що розташовані між min і max 
елементами;
■ Добуток елементів з парними номерами;
■ Суму елементів, що розташовані між першим і останнім від'ємними елементами.
 */

void randarr(float* arr, int n) {

    for (int i = 0; i < n; i++) 
        arr[i] = rand() % 10 - 10;

}

void printarr(float* arr, int n) {

    for (int i = 0; i < n; i++)
      cout << arr[i] << " ";
}

void sumnegative(float* arr, int n) {

    float sumneg = 0;

    for (int i = 0; i < n; i++) 
        if (arr[i] < 0)
            sumneg += arr[i];
    
    cout << "Сума вiд'ємних елементiв = " << sumneg << endl;

}



void summ2(float* arr, int n) {

    int max = 0, min = 0, p = 1;

    for (int i = 1; i < n; i++) {

        if (arr[i] < arr[min])

            min = i;

        if (arr[i] > arr[max])

            max = i;

    }

    for (int i = max + 1; i < min; i++)

        p *= arr[i];

    cout << "Сума елементiв мiж min та max = " << p << endl;

}

void sumnegtoneg(float* arr, int n) {

    int sum = 0, acc = 0;

    bool started = false;

    for (int i = 0; i < n; i++) {

        if (arr[i] < 0) {

            if (!started) {

                acc = 0;

                started = true;

            }

            else {

                sum += acc;

                acc = arr[i];

            }

        }

        else

            acc += arr[i];

    }

    cout << " Сумa елементiв, що розташованi мiж першим i останнiм вiд'ємними елементами-> " << sum << endl;

}

int main() {

    srand(time(NULL));

    setlocale(LC_ALL, "Ukrainian");

    int n;

    cout << "Введiть кiлькiсть елементiв масиву: ";

    cin >> n;

    float* arr = new float[n];

    randarr(arr, n);

    cout << "Масив:" << endl;

    printarr(arr, n);

    sumnegative(arr, n);

    summ2(arr, n);

    sumnegtoneg(arr, n);

    delete[] arr;

    return 0;

}