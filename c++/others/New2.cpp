#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,temp;
    int *b;
    string *c;
    
    int prime[30]={67, 71, 73, 79, 83, 89,97, 101, 103, 107, 109, 113};
    
    a=2;
    b=new int[a];
    c=new string[a];
    temp=0;
    
    while(temp<a)
    {
        if(temp==0)
        {
            b[temp]=375;
            c[temp]="AvfmaLgLRpQadLyThsxVzkUqbFOdxfbLGdpBWOwmAnflENlYFbdhNHerHVtZkaPLgMtNQovVHpwGfHJdXXWAhYrhwXKPxtnpxCIsaXVAkcxTpVprFNeOVcnSEsgIvfqXPRSUASSDCvAGrFJCDbzGLFhrMYWALElChmurLrEeQttIWctyhQXzZUVAYuCIZecBJbXMxlMHFbZxJRTSZJmZAwCggGabVsovqBrdmmbCTaIHDfUunLFntfGzodKqoAKwCassKMDybethRaQgegsOawfNCNrIAkECEKpbwElhvWtlZBEZqJQpEkzpiSjrqZZIHbszUxwuWreXkxFKxSAiKoemIqETGVxcCjweKhbyXxhVKCbNTQBKgHD";
        }
        if(temp==1)
        {
            b[temp]=20;
            c[temp]="AWGrOwUcFWnghtAyvxSb";
        }
        temp++;
    }
    
    for (int k=0;k<temp;temp++)
    {
        for(int i=0;i<=b[k];i++)
            {
               for(int j=0;j<12;j++)
               {
                   if(c[k][i]<prime[j])
                   {
                        if(abs(c[k][i]-prime[j-1])==abs(c[k][i]-prime[j]))
                        {
                            c[k][i]=char(prime[j-1]);
                            
                            break;
                        }
                        else
                        {
                            c[k][i]=char(prime[j]);
                            
                            break; 
                        }
                   }
                   
               }
       
       
            }
    }
    
    
    

//if(c=="CqemaIgISqOaeIqSgqqSqkSqaGOeqeaIGeqCYOqmCmekCOkYGaegOGeqGSqYkaOIgOqOOmqSGqqGeGIeYYYCgYqgqYIOqqmqqCIqaYSCkaqSqSqqGOeOSamSCqgIqeqYOSSSCSSCCqCGqGICCaqGIGgqOYYCICkCgmqqIqCeOqqIYaqqgOYqYSSCYqCIYeaCIaYOqkOGGaYqISSSYImYCqCggGaaSqmqqCqemmaCSaIGCeSqmIGmqeGqmeIqmCIqCaqqIOCqaeqgSaOgegqOaqeOCOqICkCCCIqaqCkgqYqkYCCYqIOqCkqqgSkqqYYIGaqqSqqqYqeYkqGIqSCgImemIqCSGSqaCkqeIgaqYqgSICaOSOCIgGC
//CYGqOqSaGYmggqCqqqSa")
cout<<"done";
    



}

