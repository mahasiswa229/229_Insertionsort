//#include <iostream>

void insertionsort() 
{
    int i, j, n, temp;
    int arr[20];

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