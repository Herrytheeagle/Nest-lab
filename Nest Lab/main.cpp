#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

// my self defined "sizeofArray" macro
# define my_sizeof(type) ((char *)(&type+1)-(char*)(&type))

int main()
{
           //X = An item in the array..LET arr[4] be the given "item x"
           //A = arr i.e Array name
           //M = Any index in the array
             //N = size i.e the Length of the Array
    // NEST Lab BOOTCAMP DAY2, QUESTION 3.

    int  arr[] = {11, 21, 3, 74, 15, 60,82,12};
    int size = my_sizeof(arr)/my_sizeof(arr[0]);

    cout << "Number of elements in arr[] is "
         << size<<endl;

         string D = "Interest point";

         int x;
         int x2;
         int x3;

            //first condition to determine the interest point
                        arr[3] = arr[3] >= arr[3-1] && arr[3] >= arr[3+1];
                                 x = arr[3];
          if(size = x){

                     cout<<".Index "<<arr[3]<<" is said to be an "<< D <<endl;

          }

           // second condition to determine the interest point
         arr[0] = 0 == 0 && arr[0] >= arr[1];
                 x2=arr[0];

           if(size = x2){

                   cout<<"..Index "<<arr[0]<<" is said to be an "<< D <<endl;

          }

                        // third condition to determine the interest point
                                   arr[5] = 5 == (size-1) && arr[5] >= arr[5-1];
                                           x3 = arr[5];

               if(size = x3){

                   cout<<"...Index "<<arr[5]<<" is said to be an "<< D <<endl;

          }

    return 0;
}
