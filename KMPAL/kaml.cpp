////
//// Created by arbus on 2017/10/25.
////
//
//#include <iostream>
//using namespace std;
//
//void getNext(string pat, int next[]){
//    int q,k;
//    int m = pat.size();
//    next[0]=0;
//    for(q=1,k=0;q<m;++q){
//        while(k>0&&pat[q]!=pat[k])
//            k=next[k-1];
//        if(pat[q]==pat[k])
//            k++;
//        next[q]=k;
//    }
//}
//int kmp(const string &txt,const string &pat, int next[]){
//    int lenT=txt.size(),lenP=pat.size();
//    int i,q;
//    getNext(pat,next);
//    for(i=0,q=0;i<lenT;++i){
//        while(q>0 && pat[q]!=txt[i])
//            q=next[q-1];
//        if(pat[q]==txt[i])
//            q++;
//        if(q==lenT)
//        { cout<<"Pattern found at index"<<(i-lenP+1);
//        q=next[q-1];
//        }
//    }
//
//}
//
//int main(){
//    string T="ababaabbabab";
//    string P="abbab";
//    int next[20]={0};
//    kmp(T,P,next);
//    for(int i=0;i<P.length();++i){
//        cout<<next[i];
//    }
//    return 0;
//}
#include "vector"
#include "string"
#include <iostream>

using namespace std;

//计算模式P的部分匹配值，保存在next数组中
void getNext(const string &P, vector<int> &next)
{
    int q,k;//k记录所有前缀的对称值
    int m = P.size();//模式字符串的长度
    next[0] = 0;//首字符的对称值肯定为0
    for (q = 1, k = 0; q < m; ++q)//计算每一个位置的对称值
    {
        //k总是用来记录上一个前缀的最大对称值
        while (k > 0 && P[q] != P[k])
            k = next[k - 1];//k将循环递减，值得注意的是next[k]<k总是成立
        if (P[q] == P[k])
            k++;//增加k的唯一方法
        next[q] = k;//获取最终值
    }
}


void KmpMatch(const string &T, const string &P, vector<int> &next)
{
    int n, m;
    n = T.size();
    m = P.size();
    getNext(P, next);
    for (int i = 0, q = 0; i < n; ++i)
    {
        while (q > 0 && P[q] != T[i])
            q = next[q - 1];
        if (P[q] == T[i])
            q++;
        if (q == m)
        {
            cout << "Index:" << (i - m + 1) << endl;
            q = next[q - 1];//寻找下一个匹配
        }
    }
}

int main()
{
    //system("color 0A");
    vector<int> next(20,0);//保存待搜索字符串的部分匹配表（所有前缀函数的对称值）
    string T = "aabbababcabacababca";//文本
    string P = "ababca";//待搜索字符串
    cout <<"text:"<< T << endl;
    cout <<"pattern:"<< P << endl;
    KmpMatch(T, P, next);
    cout << "Next array:"<< endl;
    for (int i = 0; i < P.size(); i++)
        cout<< next[i];
    cout << endl;
    system("pause");
    return 0;
}