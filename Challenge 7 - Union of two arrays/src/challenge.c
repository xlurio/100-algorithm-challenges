#include "challenge.h"

int main(void)
{
    int array_for_test1[] = {6, 2};
    int array_for_test2[] = {85, 25, 1, 32, 54, 6};
    struct Union *first_union = (struct Union *)malloc(sizeof(struct Union));
    first_union = doUnion(array_for_test1, 2, array_for_test2, 6);

    return 0;
}