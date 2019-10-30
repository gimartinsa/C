#include <stdio.h>
void VectorA (int v1[], int n1, int v2[], int n2, int v3[]){
      int ind1=0, ind2=0, ind3=0;

      while ((ind1 < n1) && (ind2<n2)){
             v3[ind3] = v1[ind1];
             v3[ind3+1] = v2[ind2];
             ind3+=2;
             ind1++;
             ind2++;
      }
      while (ind1<n1){
             v3[ind3] = v1[ind1];
             ind1++;
             ind3++;
      }
      while (ind2<n2){
             v3[ind3] = v2[ind2];
             ind2++;
             ind3++;

      }
      for (int i=0; i<n2+n1; i++){
           printf("%d ", v3[i]);
      }
}
int main (){
    int v1 [] = {1,2,3};
    int v2 [] = {4,5,6};
    int v3 [7];
    VectorA (v1, 3, v2, 4, v3);
    return 0;

}
