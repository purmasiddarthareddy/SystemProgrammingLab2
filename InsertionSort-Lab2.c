#include <stdio.h>
#include <stdlib.h>                     
#include <time.h>          

int main()
{
    double arr[100], temp;
    int i, j, n,elementLoc;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    srand48((unsigned int)(time(NULL)));      
    for (i = 0; i < n; i++)
    	 arr[i] = drand48();                
        printf("Unsorted Array of size %d\n",n);                       
        for (i = 0; i < n; i++)
        	printf("%.2f ", arr[i]);
	for (i=1; i<n; i++){
	    elementLoc = i;
	    while (elementLoc > 0 && arr[elementLoc-1] > arr[elementLoc]){
	    temp = arr[elementLoc];
					arr[elementLoc] = arr[elementLoc-1];
					arr[elementLoc-1] = temp;
					elementLoc--;
	}
    }
    printf("\n Sorted Array of size %d \n", n);
    for (i = 0; i<n; i++)
        printf("%.2f ", arr[i]);
    return 0;
}
