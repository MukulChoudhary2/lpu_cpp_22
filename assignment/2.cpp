#include<iostream>
using namespace std;
 
int maxSubArraySum(int a[], int size)
{
   int maxfar = a[0];
   int currmax = a[0];
 
   for (int i = 1; i < size; i++)
   {
        currmax = max(a[i], currmax+a[i]);
        maxfar = max(maxfar, currmax);
   }
   return maxfar;
}
 
int main()
{
   int a[] =  {1,2,3,-2,5};
   int n = sizeof(a)/sizeof(a[0]);
   int maxsum = maxSubArraySum(a, n);
   cout << "Maximum contiguous sum is " << maxsum<<endl;


   int b[] =  {2, 3, -4, -1, 2, 5};
   int n2 = sizeof(b)/sizeof(b[0]);
   int maxsum1 = maxSubArraySum(b, n2);
   cout << "Maximum contiguous sum is " << maxsum1;
   return 0;
}