// #include <stdio.h>

// int main() {
//     int data[] = {10, 20, 30, 40, 50};
//     FILE *file = fopen("binary.bin", "wb");
//     if (file != NULL) {
//         fwrite(data, sizeof(int), sizeof(data)/sizeof(int), file);
//         fclose(file);
//         printf("Data written to binary file successfully.\n");
//     } else {
//         printf("Failed to open the file.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int data[5];
//     FILE *file = fopen("binary.bin", "rb");
//     if (file != NULL) {
//         fread(data, sizeof(int), sizeof(data)/sizeof(int), file);
//         fclose(file);
//         printf("Read data from binary file:\n");
//         for (int i = 0; i < sizeof(data)/sizeof(int); i++) {
//             printf("%d ", data[i]);
//         }
//         printf("\n");
//     } else {
//         printf("Failed to open the file.\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     FILE *file = fopen("text.txt", "r");
//     if (file != NULL) {
//         fseek(file, 0, SEEK_END);
//         long fileSize = ftell(file);
//         printf("Size of the file: %ld bytes\n", fileSize);
//         fclose(file);
//     } else {
//         printf("Failed to open the file.\n");
//     }

//     return 0;
// }