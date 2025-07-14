#include<stdio.h>
#include<string.h>
#include<cs50.h>


// with two separate arrays logic
int main(void){
    string names[] = {"john", "sam", "alice"};
    string numbers[] = {"+91-1234567899", "+91-9876543210", "+91-1234509876"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
       if(strcmp(names[i], name) == 0){
        printf("Found %s\n",numbers[i]);
        return 0;
       }
    }
    printf("Not found\n");  
}

// with our own datatype struct
typedef struct 
{
    string name;
    string number;
}
person;

int main(void){
    
    person people[3];

    people[0].name = "Carter";
    people[0].number = "+91-1234567899";

    people[1].name = "David";
    people[1].number = "+91-1234567890";

    people[0].name = "John";
    people[0].number = "+91-1234567888";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
       if(strcmp(people[i].name, name) == 0){

        printf("Found %s\n",people[i].number);
        return 0;

       }
    }
    printf("Not found\n");  
}