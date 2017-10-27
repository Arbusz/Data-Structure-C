#include <iostream>

using namespace std;

void Search(string pat, string txt){
    int lenT = txt.length();
    int lenP = pat.length();

    for(int i=0;i<lenT-lenP;i++){
        int j;
        for(j=0;j<lenP;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==lenP)
            cout<<"Pattern found at index"<<i<<endl;
        else cout<<"Match dead."<<endl;
    }
}

int main(){
    string txt="AABBABCBABABA";
    string pat="ABAB";
    Search(pat, txt);
    return 0;
}