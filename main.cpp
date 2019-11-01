#include <iostream>
#include <stdlib.h>
#include <array>

using namespace std;

int main(){
    int n;
    int inicio[]={0,1,2,3,3,5,5,6,8,8,12};
    int fin[]={6,4,13,5,8,7,9,10,11,12,14};
    int L[11]={0,0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i<11;i++){
        for (int j=0; j< i ; j++){
            if(fin[j]<inicio[i] && L[i]<L[j]){
                L[i] = L[j];
            }
        }
        L[i]++;
    }
    cout<<L[10];

    return 0;
}
