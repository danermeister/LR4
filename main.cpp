#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

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
        
//      Quick
        /*
        n=0;
        p=0;
        int j=29;
        for (int i=0; i<600;i++){
            p++;
            if (p==29) p=0;
            if (qwer2[p]>=qwer2[j])

        n++;
        }
        
        for (int p=0;p<30;p++){
            cout<<qwer2[p]<<" ";}
        cout<<endl<<n<<endl;
        */
       return 0;
    }
    

