#include <iostream>
using namespace std;

int Strcmp(const string S,const string T){

    int i=0;
    while(S[i++]==T[i++]){
        if(S[i]=='\0'&&T[i]=='\0')
            return 0;
    }
    return (S[i]-T[i]);

}
int main(){
    string S,T;
    cout<<"please input S"<<endl;
    cin>>S;
    cout<<"please input T"<<endl;
    cin>>T;
    int m = Strcmp(S,T);
    if(m==0)
        cout<<"Equal."<<endl;
    else
        cout<<"Not equal."<<endl;
    return 0;
}
