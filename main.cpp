#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

void quicksort(std::vector<int> &vec, int L, int R)
{
    int i, j, mid, piv;
    i = L;
    j = R;
    mid = L + (R - L) / 2;
    piv = vec[mid];
    
    while (i<R || j>L)
    {
        while (vec[i] < piv)
            i++;
        while (vec[j] > piv)
            j--;
        
        if (i <= j)
        {
            swap(vec, i, j);
            i++;
            j--;
        }
        else
            {
            if (i < R)
                quicksort(vec, i, R);
            if (j > L)
                quicksort(vec, L, j);
            return;
        }
    }
}


int main()
    {
//    Задача 1.
        int qwer2[30];
    int qwer[30];
        int a=0;
        int p=1;
        int n=0;
        int l=0;
    for (int i=0; i<30; i++)
        {
        qwer2[i] = rand() % 200-100;
            qwer[i]=qwer2[i];
            cout<<qwer2[i]<<" ";
        }
//     Bubble
        cout<<endl<<"Puziriki:"<<endl;
        
            for (int i=0;i<30;i++)
            {
                if (qwer[p] > qwer[p+1])
                {
                    a=qwer[p+1];
                    qwer[p+1]=qwer[p];
                    qwer[p]=a;
                    i=0;
                }
                p++;
                n++;
                if (p==29) p=0;
            }
        for (int p=0;p<30;p++){
            cout<<qwer[p]<<" ";
        }
        cout<<"\n"<<"Iteraciy: "<<n<<endl;
//     Insert
        for (int i=0;i<30;i++){
        qwer[i]=qwer2[i];
        }
        cout<<"Insert:"<<endl;
        for (int i=0;i<30;i++)
        {
            if (qwer[p-1] > qwer[p])
                {
                    a=qwer[p];
                    for (n=0;n<p;n++){
                        qwer[p-n]=qwer[p-n-1];
                    }
                    qwer[0]=a;
                    i=0;
                }
            p++;
            l++;
            if (p==30) p=1;
        }
        for (int p=0;p<30;p++){
            cout<<qwer[p]<<" ";
        }
        cout<<"\n"<<"Iteraciy: "<<l<<endl;
        
quicksort(qwer2, 0, size.qwer2() - 1);
    
    for(int i : vec1)
    {
        cout << i << endl;
    }
    
       return 0;
    }
    

