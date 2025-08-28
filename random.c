#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h" //need this so the files can communcate with each other

/*Function to return the word
create a list with all the letters in the alphabet 
run a for loop that runs the same time as size so that we get enough letters
for loop generates a new number each time that is in the range of 0 and 25 and the nr will correspond to the index of the letters
join all the letters together and return them*/
char *rand_string(char *s, int size){
    int index; // declaring index

    char letters[] = "abcdefghijklmnopqrstuvwxyz"; //list

    for (size_t i = 0; i < size; ++i){
        index = (rand() % 26); // get the index of the new letter
        s[i] = letters[index]; // at this given index i we set a new letter value
    }

    s[size] = '\0'; // set the last index as the null terminator
    
    return s;
}
