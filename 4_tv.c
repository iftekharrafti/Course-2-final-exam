#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int sum = 0;
    int other = 0;
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1; j < n; j++){
            if(ar[i] > ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }   
    }
    for(int i = 0; i < m; i++){
        if(ar[i] < 0){
            ar[i] *= -1;
            sum += ar[i];
        }
    }
    printf("%d ", sum);
    return 0;
}


// if (ar[i] < 0 && m >= other)
//         {
//             other++;
//             ar[i] *= -1;
//             sum += ar[i];
//         }