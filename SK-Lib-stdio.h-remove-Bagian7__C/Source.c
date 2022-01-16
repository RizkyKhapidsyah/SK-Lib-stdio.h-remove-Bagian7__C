#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    int hasil;
    char fname[] = "test.txt";

    //trying to delete the file
    hasil = remove(fname);

    //displaying the message
    if (hasil == 0) {
        printf("File is successfully deleted.");
    } else {
        printf("Some error has occurred.");
    }
        
    _getch();
    return 0;
}

