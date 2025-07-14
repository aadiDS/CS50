

/*
selection sort: kept looking for the smallest element everytime, compares adjacent value and puts the smallest at left part

*/

/*
Bubble sort: it compares adjacent elements and shifts the larger to right part which contains larger elments
*/

/*
Recurion: function calling itself with a base condition.

*/

#include<stdio.h>

void draw(int n);

int main(void){
    int height = get_int("Height: ");
    draw(height); 
}

void draw(int n){
     if(n<=0) return;

     draw(n-1);

    for (int  j = 0; j < count; j++)
     {
         print("#");
     }
       print("\n");
    
}

/*
Merge sort:sort left half, sort right half and then merge sorted halves
time complexity: O(n log n)

1.recursively sort left half till zero elements
2. then recursively sort right half 
3. merge the sorted both halves by comparing both elements
*/
