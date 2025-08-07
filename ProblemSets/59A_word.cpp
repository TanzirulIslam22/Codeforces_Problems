/*
//alphabate upper to lower & vice versa
#include<bits/stdc++.h>
using namespace std;

int main (){
    char U, L, ascii;
   

    cout<<"Input the upper char:"<<endl;
    cin>>U;
    ascii=U+32;
    cout<<"The lower case is:"<<ascii<<endl;


    cout<<"Input the lower char:"<<endl;
    cin>>L;
    ascii=L-32;
    cout<<"The upper case is:"<<ascii<<endl;

    return 0;
}

*/

//string upper to lower & vice versa
#include<bits/stdc++.h>
using namespace std;
 int main(){

    char S1[30];
    
    cout<<"Input the upper char:"<<endl;
    cin>>S1[30];
    for(int i=0; S1[i]!='\0'; i++)
    {
        if(S1[30]>='A'&&  S1[30]<='Z')
        {
            S1[30]=S1[30]+32;
        }
        
    }
    cout<<"The output string:"<<S1[30]<<endl;
    return 0;
 }