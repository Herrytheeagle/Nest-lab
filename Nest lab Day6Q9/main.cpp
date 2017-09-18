#include <iostream>

using namespace std;

void Merge(int *a, int *L, int *R, int p, int q)
{
    int i, j=0, k=0;
    for(i=0; i<p+q; i++)
    {
        if(j==p)                       //When array L is empty
        {
            *(a+i) = *(R+k);
            k++;
        }
        else if(k==q)                  //When array R is empty
        {
            *(a+i) = *(L+j);
            j++;
        }
        else if(*(L+j) < *(R+k))  //When element in L is smaller than element in R
        {
            *(a+i) = *(L+j);
            j++;
        }
        else   //When element in R is smaller or equal to element in L
        {
            *(a+i) = *(R+k);
            k++;
        }
    }
}

void MergeSort(int *a, int len)
{
    int i, j;
    if(len > 1)
    {
        int p = len/2 + len%2;      //length of first array
        int q = len/2;              //length of second array
        int L[p];                   //first array
        int R[q];                   //second array
        for(i=0; i<p; i++)
        {
            L[i] = *(a+i);      //inserting elements in first array
        }
        for(i=0; i<q; i++)
        {
            R[i] = *(a+p+i);    //inserting elements in second array
        }
        MergeSort(&L[0], p);
        MergeSort(&R[0], q);
        Merge(a, &L[0], &R[0], p, q);   //Merge arrays L and R into A
    }
    else
    {
        return;        //if array only have one element just return
    }
}

int main()
{
    int i, n;
    int a[100000];
    cout<<"Enter numbers to sort. When you are done, enter -1\n";
    i=0;
    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else
        {
            a[i] = n;
            i++;
        }
    }
    int len = i;
    MergeSort(&a[0], len);
    for(i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
