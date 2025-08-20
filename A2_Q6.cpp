#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < elements1; i++) {
        transposed[i][0] = matrix1[i][1]; // col becomes row
        transposed[i][1] = matrix1[i][0]; // row becomes col
        transposed[i][2] = matrix1[i][2]; // value remains same
    }
for (int i = 0; i < trans_elements - 1; i++) {
        for (int j = 0; j < trans_elements - i - 1; j++) {
            if (transposed[j][0] > transposed[j + 1][0] || 
                (transposed[j][0] == transposed[j + 1][0] && transposed[j][1] > transposed[j + 1][1])) {
                // Swap elements
                int temp0 = transposed[j][0], temp1 = transposed[j][1], temp2 = transposed[j][2];
                transposed[j][0] = transposed[j + 1][0];
                transposed[j][1] = transposed[j + 1][1];
                transposed[j][2] = transposed[j + 1][2];
                transposed[j + 1][0] = temp0;
                transposed[j + 1][1] = temp1;
                transposed[j + 1][2] = temp2;
            }
        }
    }


for (int i = 0; i < elements1; i++) {
        sum[i][0] = matrix1[i][0];
        sum[i][1] = matrix1[i][1];
        sum[i][2] = matrix1[i][2];
    }
    sum_elements = elements1;
    
    // Add elements from second matrix
    for (int i = 0; i < elements2; i++) {
        bool found = false;
        
        // Check if element position already exists in sum
        for (int j = 0; j < sum_elements; j++) {
            if (sum[j][0] == matrix2[i][0] && sum[j][1] == matrix2[i][1]) {
                sum[j][2] += matrix2[i][2]; // Add values
                if (sum[j][2] == 0) {
                    
                    for (int k = j; k < sum_elements - 1; k++) {
                        sum[k][0] = sum[k + 1][0];
                        sum[k][1] = sum[k + 1][1];
                        sum[k][2] = sum[k + 1][2];
                    }
                    sum_elements--;
                }
                found = true;
                break;
            }
        }
        
        
        if (!found) {
            sum[sum_elements][0] = matrix2[i][0];
            sum[sum_elements][1] = matrix2[i][1];
            sum[sum_elements][2] = matrix2[i][2];
            sum_elements++;
        }
    }
    
    
    
    // Sort sum matrix by row, then by column
    for (int i = 0; i < sum_elements - 1; i++) {
        for (int j = 0; j < sum_elements - i - 1; j++) {
            if (sum[j][0] > sum[j + 1][0] || 
                (sum[j][0] == sum[j + 1][0] && sum[j][1] > sum[j + 1][1])) {
                // Swap elements
                int temp0 = sum[j][0], temp1 = sum[j][1], temp2 = sum[j][2];
                sum[j][0] = sum[j + 1][0];
                sum[j][1] = sum[j + 1][1];
                sum[j][2] = sum[j + 1][2];
                sum[j + 1][0] = temp0;
                sum[j + 1][1] = temp1;
                sum[j + 1][2] = temp2;
            }
        }
    }


return 1;
}



