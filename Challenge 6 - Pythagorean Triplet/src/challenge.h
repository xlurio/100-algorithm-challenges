#include <math.h>

int check_for_c_value(int expected_c_value, int *array_to_check, int array_size);

int check_for_pythagorean(int *array_to_check, int array_size) {
    int a_value = 0, b_value = 0, j = 0, expected_c_value = 0,is_there_c_value = 0;
    double sqrd_a = 0.0, sqrd_b = 0.0, sqrd_sum = 0.0;

    for (int i = 0; i < array_size - 1; i++) {
        a_value = array_to_check[i];

        for (j = i + 1; j < array_size; j++) {
            b_value = array_to_check[j];

            sqrd_a = pow(a_value, 2);
            sqrd_b = pow(b_value, 2);
            sqrd_sum = sqrd_a + sqrd_b;
            expected_c_value = (int)sqrt(sqrd_sum);

            is_there_c_value = check_for_c_value(expected_c_value, array_to_check, array_size);

            if (is_there_c_value) {
                return 1;
            }
        }
    }

    return 0;
}

int check_for_c_value(int expected_c_value, int *array_to_check, int array_size) {
    for (int i; i < array_size; i++) {
        if (array_to_check[i] == expected_c_value) {
            return 1;
        }
    }

    return 0;
}