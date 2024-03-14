#include <iostream>
using namespace std;

int arr[40];
int n;

void input() 
{
    while (true)
    {
        cout << "masukan banyaknya elemen array : ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 eleman.\n";
        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }

}

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl; //output setiap element array pada garis baru
    }
    cout << "jumlah pass = " << n - 1 << endl;
    cout << endl;
}

void insertionsort() 
{
    int i, j, n, temp;
    int arr[40];

    for(i= 1; i <= n-1; i++)
    {
       //step1 
        temp = arr[i]; //step2

        j = i - 1;//step3

        while (j >= 0 && arr[j] > temp)//step4
        {
            arr[j + 1] = arr[j];//step4a
            j = -1;//step4b
        }
        
        arr[j + 1] = temp;//step5

        
    }
}

int main()
{
    std::cout << "Hello World!\n";
}