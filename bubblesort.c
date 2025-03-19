
#include <stdio.h>

int buscaLinear(int *v, int n, int x){
    int i;
    for (i=0;i<n;i++){
        if(v[i]==x){
            return i;
        }
    }
    return -1;
}

int buscaLinearRecursiva(int *v, int n, int x, int l){
    if (l == n){
        return -1;
    }
    else if (v[l] == x){
        return l;
    }
    else{
        return buscaLinearRecursiva(v, n, x, l+1);
    }

}

int buscaBinaria(int *v, int n, int x){
    int r = n-1;
    int l = 0;
    int m = (l+r)/2; 
    while(l<=r && v[m]!=x){
        if (x < v[m]){
            r = m-1;
        }
        else if (x > v[m]){
            l = m+1;
        }
        m = (l+r)/2;
    }
    if (v[m] == x) return m;
    else return -1;
}

int buscaBinariaReq(int *v, int l, int r, int x){
    int m = (l+r)/2;
    if (l > r) return -1;
    if (v[m] == x) return m;
    if(v[m] < x) return buscaBinariaReq(v,l, m-1, x);
    else return buscaBinariaReq(v,m+1,r,x);
    
}

int main() {
    int numeros[10] = {1, 2 ,3, 4, 5, 6, 10, 16, 20, 30};
    int x;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("o resultado deu: %d", buscaBinariaReq(numeros, 0, 9, x));
    return 0;
}