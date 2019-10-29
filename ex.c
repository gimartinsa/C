#include <stdio.h>
void uniqueNubers (int vet[], int n){
     int count[n];
     int ok=0;
     int qnt=0, soma=1;


     for (int i=0; i<n-1; i++){
          for (int j=i+1; j<n; j++){ 
               if (vet[i]==vet[j]){
                   soma++;
               }
          }
  
          for (int k=0; k<qnt; k++){
               if (vet[i]==count[k]){
               ok=1;
               }
          }

         if (ok==0){
             count[qnt] = vet[i];
             qnt++;
             printf("%d ", vet[i]);
         }
         ok=0;
     }
}
int main() {
    int v[] = {1, 4, 1, 8, 3, 7, 1, 8, 4};
    uniqueNubers(v,9);
    return 0;
}
