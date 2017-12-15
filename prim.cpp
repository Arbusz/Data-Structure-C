#include <iostream>
#define N 6
#define Max 100000
#define choosen 0
using namespace std;
int matrix[N][N]{
        {-1,6,1,5,Max,Max},
        {6,-1,3,Max,3,Max},
        {1,5,-1,5,6,4},
        {5,Max,5,-1,Max,6},
        {Max,3,6,Max,-1,6},
        {Max,Max,4,2,6,-1}
};
int Cho[N] = {0,};
int unCho[N]={1,2,3,4,5,6};

int Prim(){
    int i = 0;
    Cho[i] = unCho[0];
    unCho[0]=0;
    for(i=1;i<N;i++) {
        int markx = -1, marky = -1, min = Max;
        for (int k = 0; Cho[k] != 0; k++)
            for (int j = 0; j < N; j++) {
                if (unCho[j] != 0)
                    if (matrix[Cho[k] - 1][unCho[j] - 1] != -1 && matrix[Cho[k] - 1][unCho[j] - 1] != choosen &&
                        matrix[Cho[k] - 1][unCho[j] - 1] != Max && matrix[Cho[k] - 1][unCho[j] - 1] < min) {
                        min = matrix[Cho[k] - 1][unCho[j] - 1];
                        markx = Cho[k] - 1;
                        marky = unCho[j] - 1;
                    }
            }
        if(markx!=-1&&marky!=-1) {
            matrix[markx][marky] = choosen;
            Cho[i] = marky + 1;
            for (int j = 0; j < N; j++)
                if (unCho[j] == marky + 1)
                    unCho[j] = 0;
        }
    }
}


int main() {
    Prim();
//    for(int i=0;i<N;i++){
//        cout<<Cho[i];
//    }
    cout<<"Prim:"<<endl;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(matrix[i][j]==choosen)
                cout<<"("<<i+1<<","<<j+1<<")"<<endl;
}
