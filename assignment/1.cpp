#include <bits/stdc++.h>
using namespace std;
 

void removeDuplicates(char S[]){
     
   int n = strlen(S);
 

   if (n < 2)
     return;
    
   
   int j = 0;
 
   
   for (int i=1; i<n; i++)
   {
       
       
       if (S[j] != S[i])
       {
           j++;
           S[j] = S[i];
       }    
   }  
 
   
   j++;
   S[j] = '\0';    
}
  

int main() {
      
    char S1[] = "aabaaabbaddaba";
    removeDuplicates(S1);
    cout << S1 << endl;
      
    char S2[] = "aabcca";
    removeDuplicates(S2);
    cout << S2 << endl;
      
    return 0;
}