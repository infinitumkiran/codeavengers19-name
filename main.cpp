#include<bits/stdc++.h>
#include<strings.h>
#include <math.h>
#pragma GCC optimize ("O3")
using namespace std;
int main(){ 
  int s,l,m,i,p,q,length1;
    char a[100000],b[100000];
    scanf("%d",&p);
    
    for(q=0;q<p;q++)
    {
        cin>>length1;
        int c[26]={0},d[26]={0};
  
        scanf("%s",a);
        scanf("%s",b);
        
        int length2=strlen(b);
        for(i=0;i<length1;i++)
         c[a[i]-'`']++;
         for(i=0;i<length2;i++)
          d[b[i]-'`']++;
          i--;
        int min=10000;
        int e[26]={0};
        for(int j=0;j<26;j++)
          {
            if((c[j]>0)&&(d[j]>0))
            {
              e[j]=d[j]/(c[j]);
            if((min>e[j])&&(min!=0))
            {
              min=e[j];
            }
            }
           }
            cout<<min<<endl;
    }
 return 0;   
}