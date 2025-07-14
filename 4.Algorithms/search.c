#include<stdio.h>
#include<string.h>


/*

Linear search for integers

*/
int main(void){
    int numbers[] = {20,50,10,5,100,1,50};

    int n=scanf("%d",n);

    for (int i = 0; i < 7; i++)
    {
        if(numbers[i] == 0){
            printf("Found:\n");
        }
    }
    printf("Not found:\n");
    return 1;
    
}


// linear search for strings

int main(void){
    string strings[] = {"battle", "boot", "ship", "iron", "gold"};

    string s=get_string("String: ");

    for (int i = 0; i < 5; i++)
    {
        // compares two strings and if same returns zero
        if(strcmp(strings[i],s) == 0){
            printf("Found:\n");
        }
    }
    printf("Not found:\n");
    return 1;
    
}
