/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 2 - Data Manipulation and External Files
 *   Hari dan Tanggal    : Rabu, 22 April 2026
 *   Nama (NIM)          : 13224061
 *   Nama File           : soal1.c
 *   Deskripsi           : Mencari nilai idx sum min dan avg dengan menggunakan array
 * 
 */

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
    int max = arr[0];
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
