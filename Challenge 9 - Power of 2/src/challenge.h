#include <math.h>

int is_power_of_2(int number_to_check)
{
    int left_index = 0, right_index = number_to_check;
    double power_of_2_raised_by_left = 0, power_of_2_raised_by_right = 0;
    int round_power_of_2_raised_by_left = 0;
    int round_power_of_2_raised_by_right = number_to_check + 1;

    int is_left_less_or_equal_to_number = 1, is_right_greater_or_equal_to_number = 1;

    while (is_left_less_or_equal_to_number && is_right_greater_or_equal_to_number)
    {
        power_of_2_raised_by_left = pow(2, ++left_index);
        round_power_of_2_raised_by_left = (int)round(power_of_2_raised_by_left);
        is_left_less_or_equal_to_number = round_power_of_2_raised_by_left <= number_to_check;

        if (round_power_of_2_raised_by_left == number_to_check)
        {
            return 1;
        }

        power_of_2_raised_by_right = pow(2, --right_index);
        round_power_of_2_raised_by_right = (int)round(power_of_2_raised_by_right);

        is_right_greater_or_equal_to_number = round_power_of_2_raised_by_right >= number_to_check;

        if (round_power_of_2_raised_by_right == number_to_check)
        {
            return 1;
        }
    }

    return 0;
}