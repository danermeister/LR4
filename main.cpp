#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

void newVec(vector<int>& vec) {
    int k;
    srand(time(nullptr));
    for (int i = 0; i < 30; ++i) {
         k = rand() % 21 - 10;
         vec.push_back(k);
    }
}

void printVec(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}


void bubbleSort(vector<int>& vec)
{
    int a = 0;
    for (int i = 0; i < vec.size(); i++) {
        for (int i = 0; i < vec.size() - 1; i++) 
        {

            if (vec[a] > vec[a + 1])
            {
                swap(vec[a], vec[a + 1]);
                a++;
            }
            else a++;

        }
        a = 0;
    }
}

void insertSort(vector<int>& vec)
{
    for (int i = 0; i < 30 - 1; i++) 
    {
        int j = i + 1;
        int key = vec[j];
        while (i >= 0 && vec[i] > key) 
        {
            vec[i + 1] = vec[i];
            i--;
        }
            vec[i + 1] = key;
    }
}

void quickSort(vector<int>& vec, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = vec[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (vec[i] < pivot)
            i++;
        while (vec[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(vec, low, j);
    if (i < high)
        quickSort(vec, i, high);
}




int main()
{
    vector<int> qwer1;
    vector<int> qwer2;
    vector<int> qwer3;

    cout << "Bubble sort:" << endl;
    newVec(qwer1);
    printVec(qwer1);
    bubbleSort(qwer1);
    printVec(qwer1);

    cout << "Insert sort:" << endl;
    newVec(qwer2);
    printVec(qwer2);
    insertSort(qwer2);
    printVec(qwer2);

    cout << "Quick sort:" << endl;
    newVec(qwer3);
    printVec(qwer3);
    insertSort(qwer3);
    printVec(qwer3);


    return 0;
}
