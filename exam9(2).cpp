#include <iostream>

using namespace std;

void Search(string pat, string txt){
    int lenT = txt.length();
    int lenP = pat.length();
    int index = -1;
    for(int i=0;i<lenT-lenP;i++){
        int j;
        for(j=0;j<lenP;j++){
            if(txt[i+j]!=pat[j])
                break;
        }
        if(j==lenP)
            index=i;
    }
    if(index!=-1)
        cout<<"Pattern found at index"<<index<<endl;
    else cout<<"Match dead."<<endl;
}

int main(){
    string txt="AABBABCBABABA";
    string pat="ABAB";
    Search(pat, txt);
    return 0;
}
