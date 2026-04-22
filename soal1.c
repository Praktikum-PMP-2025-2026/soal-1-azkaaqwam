#include <stdio.h>

void SUM(int arr[],int N){
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + arr[i]; 
    }
    printf("SUM %d\n",sum);
}
void AVG(int arr[], int N){
    int sum = 0;
    float avg = 0;
    for (int i = 0; i < N; i++)
    {
        sum = (sum + arr[i]);    
    }
    avg = (float) sum/N;
    printf("AVG %.2f\n",avg);
}
void MAX(int arr[], int N){
    int max = 0;
    int idx=0;
    for (int i = 0; i < N; i++)
    {
            if (arr[i] > max) 
            {
                max = arr[i];
                idx=i;
            }
    }
    printf("MAX %d\n",max);
    printf("IDX %d\n",idx);
}
int main(){
    int N;
    int a;
    scanf("%d", &N);
    int arr[N];
    for (int k = 0 ; k < N ; k++)
    {
        scanf("%d", &arr[k]);
    }
    SUM(arr,N);
    AVG(arr,N);
    MAX(arr,N);
    

    return 0;
}
