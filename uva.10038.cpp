#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int dif_array[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            dif_array[i] = abs(array[i + 1] - array[i]);
        }
        
         for(int x=0; x<(n-1); x++) {
            for(int y=x+1; y<(n-1); y++)
            {
                if( dif_array[y] > dif_array[x])
                {
                    int temp =  dif_array[x];
                     dif_array[x] =  dif_array[y];
                    dif_array[y] = temp;
                }
            }
         }
         /*
         for(int i=0;i<n-1;i++)
         printf("%d ",dif_array[i]);
         */
        
         
         int flag=1, k;
        for (int i = n-1,k=0; i >=1; k++,i--)
        {
            if (dif_array[k] != i)
            {
               flag=0;
              
                break;
            }
            //cout<<flag<<endl;
        }
       
        if (flag)
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
        
    }

    return 0;
}