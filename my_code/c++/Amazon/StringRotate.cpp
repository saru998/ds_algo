#include<iostream>
#include<string>

using namespace std;
 
bool isSame(string str1,string str2)
{
    if(str1.length()!=str2.length())
    return 0;
    
    int len=str1.length();
    
    string antrot="",rot="";
    
    antrot=str2.substr(len-2,len)+str2.substr(0,len-2);
    rot=str2.substr(2,len)+str2.substr(0,len-2);
    
    //cout<<antrot<<endl;
    //cout<<rot<<endl;
    
    if(str1.compare(antrot)==0||str1.compare(rot)==0)
    return true;
    else
    return 
    false;
    
}

int main()
{
    string str1 = "geeks";
    string str2 = "eksge";
    
    if(isSame(str1,str2))
    cout<<"Yes";
    else
    cout<<"No";
    //int len=str1.length();
    //cout<<str1.substr(len-2,len)+str1.substr(0,len-2);   
}