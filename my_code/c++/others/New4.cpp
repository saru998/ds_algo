#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    int *b;
    string *c,result;
    int prime[30]={67, 71, 73, 79, 83, 89,97, 101, 103, 107, 109, 113};
    
    //a=1;
    cin>>a;
    b=new int[a];
    c=new string[a] ;
    int temp;
    temp=0;
    
    while(temp<a)
    {
        if(temp==0)
        {
            //b[temp]=282;
            cin>>b[temp];
            //c[temp]="bSxneXSCSMyvlMUCntAcMbTvUnmSZqNrQYQjCtGCtruoOwASWbvLRQCoKGayBKZGNtkSoRFUoLLtxcXdvLSZnYtLsKvDqxNowPaoByolyzPCMrMhLONuMXxQQYiAVZnyWtwHiuMVXQaGIKnzpoCtCUwDIWRTTVHtXlhHVVZqgXOzjdkbKuomBqBMfewXdAkWjyYXWOtgDaFvhbzsHZfldetSpreQcCHDVtaZyNnZVUyDppjoipVVEFExTHcBQoXrQLYVaCcAZDAVFnOyhgqUftjLMT";
            cin>>c[temp];
            
        }
        if(temp==1)
        {
            //b[temp]=265;
            //c[temp]="KIUvAjkfmQhDjTVaqAwxTIEYGnWgbNnhIZkmpsALUJHrxiXjJtbkIwXXQqMXSbhovwlyjcNfLQTzhYDoPxFpMrvpqpFUzptDXbRuDUSOeESwpDATDfxkwpJMhQuFsFCIJaxccawXUpbwlZSBQIJdmmqvTVQEGVIcqMFmknYjzyXYnGbOadSitPHbcXLiBlSElYmNNGvnDvfnKWcmaODTBwSwVUBFaUpoRuUQfTPnHdgZetnfpXzKTMvrrJjDBrswAwtOTztbA";
            cin>>b[temp];
            cin>>c[temp];
        }
        if(temp==2)
        {
            //b[temp]=278;
            //c[temp]="itFJVRsKAEwTDpaYWHjLZTxhCfQRIIeaAySrvcjSmFEApZTdSwfoCBbDxHeFgACmBGRpxJqRLKPOwKThiBWxDokmDZCwOlCuPpfaLCUMrRKBZbOIgZOJYYsWBovRohQJzfsCCUcLdpwbNWBdYdqgFNnHOhpvbWcdZeakgtzJVqdCkbBRmYbSMFrUQRnnSwSZUlqiGnxjIVyGFWxBogWiikhmwUkDDPicZjAzUSRyOVpishgsbzsllUlbpFGGbTMkQwnumjyYGwrfFaLOarbRte";
            cin>>b[temp]>>c[temp];
        }
        temp++;
    }
    
    //cout<<endl<<"hi"<<endl;
    for(int k=0;k<a;k++)
    {
        for(int i=0;i<b[k];i++)
            {
               for(int j=0;j<12;j++)
               {
                  
                   if(c[k][i]==prime[j])
                   {
                       break;
                   }
                   else if(c[k][i]<prime[j])
                   {
                        if(abs(c[k][i]-prime[j-1])<abs(c[k][i]-prime[j]))
                        {
                            c[k][i]=char(prime[j-1]);
                            break;
                        }
                        else if(abs(c[k][i]-prime[j-1])==abs(c[k][i]-prime[j]))
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
                   else
                   if(c[k][i]>prime[11])
                        c[k][i]=prime[11];
                   
               }
               
            }
            
            cout<<c[k]<<endl;
            //result+=c[k];
            //result+="\n";

    }

    //int m=0;
    //string l="qSkqYqOeYkqqGqSSSYqYgkYmCGaqIOOSCqYmOISqgmqmqSCeYGeaSCSkYGgGCkqqqmCGqqGOCqqYSCYOaqSSSqkqeSkCgmISOCeSSmqqYOqYmqOGSIgqGgCGCIOIqSqOqeOOggYmIaGgqGGaaYOOOCgmOqOmGSqOmgqgkYOqgeSYmYqSeCkIOqkOOOIqGSOSGegICISCqmqGeaaGkeCqIqSqOYISgGSaGOqaeaGqOSOqqkYOIIGaIYSYYqmCqqgkCaImqkYGqaOeGqmqGgqqqGOmYCOIgkqGkkSGgqkaaqemmqkSSSYqYmqOqeSCCeCGqSmmIeqmqSqgIOqCYgICYIYkCgaIkIYISOqYGmYIgqSqOIqCqaIYOegkqSOkqSqqeqYqkkkSmqmqmCCkqeOSSgaOYIgOCqqmCIqSOqqOmaCqqqICOameOqemmOgSIIIeqeCqOqqOqgmSmSqGqSCSCISIqmOIkCaqgmSSmIOYYqgISYkOSqSYqaGOSYYOqegekmqSGOaaIkqqIIGqSqIImSqCeqgeOOYYkIqSIqqeOqaSgGIYaqSmaqOIIqGOCkSqeeCOqgSgCmqCGSSSqCgmIkqYkaOmGkYIICqqCqOgaqqYkeqOCOICmmSOeSgmeImqqqqIGaqYOqkqSSmgaOCSIIOCegYqkkqqYeqSqYYkaqSkOqIeOSkIYmCkYSeqqqgeqqYamqqkkCqSqCqmCYGgOqSGOYYmgqSSgqISSOeqqSOqkmGqIYOSISISkSgIqOGCgYqkqgqmqaSOgqmGqqqagCaqekCmqSYaYgSqOOqOYgeGgqCYGIkekqakaCSqGqqgIqIgqqYImgGqSkIGqgkCgOOqeOkGekeISmkkqqaqkgaOqqqYOmSgqSqCqOCSGaCOCeeYOOGSgmgYmSqeSSqkYSeIeqqYSIqgqaIOaOYqCqYmCOqqCqkCqqeqmeGqOqeqmaqaSOqGmkSmOqYOgGIaOgIYaISCgkGGaOOCggqqaOaOqYSCqOqqGkqaSSCqgqCemqIqCYkggkSOOeSgkgCSkqmqggmqqeqOqqaqqeCIeqkgkGSmIeGGqSmgOSYeCkSqeCgGSYImOOSSCIYqOqSSqSkGeCgqqqIqOICqgmSgqSGGSSIaqmaeaaOSOqeYSgqYOqYkqIIqOOSgqYqeCqSgqmSGqmOIkYkSeggmIqGakqgaqakYSIOakCSqYeCCqOCqqSCgCqmSqeSmGmmIYaCmCqCaSgOCmeqIeOYgqCGOYqSaOCeSegGkSSkSCCqeYqCSCqqCaYYGeSqqggOOCqqkYeOOCSIYSeqkOSICgqaSCSYgqYCCIaYImCqIGCqOGmYIOmSqIkIYOCOOqGgqaIYgSqeOqIqqIYYeqqkCCGSGYCmSOYGkgmCOOmGqqqqGIeqgqkaqqImkqOSkqqYqYCSkmmOOqmSCgemqkmOYIgeqakqOCgIqCYOYCCgqeIYOeOgOYOmYIqaqSCSeaSGSYqSqqSkqIIYgqakqYSqqqYeqqqSYmqSqqqaGSGSYkgICCgqOGYaeqOSOGYYOgYOqqkICmYSqCOCqYmkqOkqqqIIaYeOkYqaYkOSmSeeqqkSSSkOISgGYqegSSSqqqkqYOkqGqIOaGOSmkaGCeOSCCkCeeqqCgCqmOSCCmYOgYYImkGYqCqCOmammGImGkYqSYOmCeYqIkqOSmkkqYIqqqqIICgCCqGSYGqYIIqOqOmIImmqSqYmCOqqSkCSIOqGSqqYSmIqqCqqYSqCmIagYmCYkqqqOIqSYqSmkSYGqOICqqqqkqmqqCmqqSeSqqOYmqmOYqSCqCYCCqIOkmqqgGqIqmSkkYOIYIYmkqYSkkqSOOqSmOISqGYCOYOqSqmaCCqIYqkmqmICgIOkeqkgaqmOOkqmqOgaYqOSaSqmeYSCSOqqkOSCmqCaOaSqSmmSYqOqOYOkCqGCqqqmOqCSYaqISOCmIGaqCIYGOqkSmSGSmIIqqaYeqISYmYqIqIqCqqOmqOamCqmkqqOCOqOgIOOqOYqOOYgCSYmqYqqGgqOSYOaGIImqqmCqCSqCIYSSSSGqYkgGSSYqgYOqkekaIqmmCqCOeeqYeCkYkqYYYOqgCaGqgaqqGYekeeqSqqeOaCGCSqaYqOmYSSqCqqkmgqSSCGCqSGaCOmYqOIYSaCaCYCCSGmOqggqSeqkIOS";    
    //while(m<1000)
    //{
    //    if(result[m]!=l[m])
    //    cout<<"mismatch"<<m<<":"<<l[m]<<":"<<result[m]<<endl;
    //    m++;
    //}
    //if("kmSqSmeeISSOqgSYCIaIGCqSGqkqqISIgSqCkmgqSkqmkYCSgmIqqOmYCqaqkkagqmqqOqOqqqSIIqqIGkqgYOqgYmCGkgOCqqqSmqqOqCqqGeGqSYSmgIqmeqCgCOSgeIgOOCCeqGqIgCmqqgqOSCYYggkamCeIISqCkkemOgCkSSaqCqqSICYGmYgaOmgIYkmqqCISIGqqgYkIqakIqYYOqOYSagmqqkqkaOeIOSqgYCmOqGqOqqqqqGSqqqCYaSqCSSOeCSqqCCSCeqkqqIOgOqGqGCIIaqaaaqYSqaqkYSCOIIemmqqSSOCGSIaqOGmkmYkqqYYmGaOaeSgqOGaaYIgCkSCkYmOOGqmCqemIYamaOCSCqSqSSCGaSqmSqSOeSOmGegYeqmeqYqISOqqqIkCCqqqCqqOSqqaCgqGISSqICCqSCqaYYGkIYSqgCeOSIIeaCqSqqakSmGCCqYSeSqemCCaCqGeGgCCmCGSqqIqSIIOOqISggCYqCmkmCYCqOkCqOqeaICSOqSICYaOIgYOIYYqYCmqSmgOIqeqCCSaIeqqaOYCeYeqgGOmGOgqqaYaeYeakgqqISqeCkaCSmYaSOGqSOSmmSqSYSkqgGmqkISqGGYqCmgYggkgmqSkCCOgaYkCqSSSqOSqgqggqaqqkkSkaqGGGaSOkOqmqmkqYGqqeGaIOaqaSqe"=="kmSqSmeeISSOqgSYCIaIGCqSGqkqqISIgSqCkmgqSkqmkYCSgmIqqOmYCqaqkkagqmqqOqOqqqSIIqqIGkqgYOqgYmCGkgOCqqqSmqqOqCqqGeGqSYSmgIqmeqCgCOSgeIgOOCCeqGqIgCmqqgqOSCYYggkamCeIISqCkkemOgCkSSaqCqqSICYGmYgaOmgIYkmqqCISIGqqgYkIqakIqYYOqOYSagmqqkqkaOeIOSqgYCmOqGqOqqqqqGSqqqCYaSqCSSOeCSqqCCSCeqkqqIOgOqGqGCIIaqaaaqYSqaqkYSCOIIemmqqSSOCGSIaqOGmkmYkqqYYmGaOaeSgqOGaaYIgCkSCkYmOOGqmCqemIYamaOCSCqSqSSCGaSqmSqSOeSOmGegYeqmeqYqISOqqqIkCCqqqCqqOSqqaCgqGISSqICCqSCqaYYGkIYSqgCeOSIIeaCqSqqakSmGCCqYSeSqemCCaCqGeGgCCmCGSqqIqSIIOOqISggCYqCmkmCYCqOkCqOqeaICSOqSICYaOIgYOIYYqYCmqSmgOIqeqCCSaIeqqaOYCeYeqgGOmGOgqqaYaeYeakgqqISqeCkaCSmYaSOGqSOSmmSqSYSkqgGmqkISqGGYqCmgYggkgmqSkCCOgaYkCqSSSqOSqgqggqaqqkkSkaqGGGaSOkOqmqmkqYGqqeGaIOaqaSqe")
    //cout<<"bhai ho gya";
//cout<<result;
}
