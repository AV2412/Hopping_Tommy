#include<bits/stdc++.h>
using namespace std;
 

#define RUN 20
 

#define MAX1 100000
#define MAX2 1000000000
 
int main()
{    
    int n,t,i;
  
    freopen("Test.in", "w", stdout);
 
   
    srand(time(NULL));
 
    for (int j=1; j<=RUN; j++){
          t = rand()%20;
        printf("%d\n",t);
         n = rand()%MAX1;
        
        printf("%d\n",n);
        for(i=0;i<n;i++) printf("%d ",rand()%MAX2);
        printf("\n");
        
        
    }
 
    
    fclose(stdout);
    return(0);
}