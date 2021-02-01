#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

void newVec(vector<int>& vec) {
    int j;
    for (int i = 0; i < 30; i++)
    {
        j = rand() % 200 - 100;
        vec.push_back(j);

    }
}

void printVec(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}


void bubbleSort(vector<int>& vec) {
    int a = 0;
    int p = 1;
    for (int i = 0; i < 30; i++)
    {
        if (vec[p] > vec[p + 1])
        {
            a = vec[p + 1];
            vec[p + 1] = vec[p];
            vec[p] = a;
            i = 0;
        }
        p++;

        if (p == 29) p = 0;


    }
}

void insertSort(vector<int>& vec) {
    int a = 0;
    int p = 1;
    for (int i = 0; i < 30; i++)
    {
        if (vec[p - 1] > vec[p])
        {
            a = vec[p];
            for (int n = 0; n < p; n++) {
                vec[p - n] = vec[p - n - 1];
            }
            vec[0] = a;
            i = 0;
        }
        p++;

        if (p == 30) p = 1;
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
