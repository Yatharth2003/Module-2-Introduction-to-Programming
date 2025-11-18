    #include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("myfile.txt", "w");   

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    fputs(str, fp);   

    fclose(fp);       

    printf("Data written to file successfully.\n");

    fp = fopen("myfile.txt", "r");  

    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading from file:\n");

    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);   
    }

    fclose(fp);  

    return 0;
}