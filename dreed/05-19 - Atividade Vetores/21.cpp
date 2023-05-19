#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    double vetor[N];
     for(int i = 0; i < N; i++){
        cin >> vetor[i];
    }

    int M; 
    cin >> M;
    int sequencia[M];
    for(int i = 0; i < M; i++){
        cin >> sequencia[i];
    }
    for (int i = 0; i < M; i++){
        int indice = sequencia[i];
        vetor[indice] /= 2;
    }
    for (int i = 0; i < N; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;

}
