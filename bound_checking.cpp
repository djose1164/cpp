/*
3-2. Add a read_from and a write_to function to Listing 3-6. These functions
should read or write to upper or lower as appropriate. Perform bounds checking
to prevent buffer overflows.
*/

#include <cstdio>

void read_from(const char *arr)
{
    printf("%s\n", arr);
}

void write_to(char *arr, const char ch, unsigned index, size_t len)
{
    if (index < len)
        arr[index] = ch;
    else
        fprintf(stderr, "Error at %s().\nlen: %zu\n", __func__, len);
}

int main(int argc, char const *argv[])
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";

    read_from(lower);
    write_to(lower, 'n', 2, sizeof lower / sizeof lower[0]);
    read_from(lower);
    puts("*-*-*-*-*-*");
    read_from(upper);
    write_to(upper, 'P', 4, sizeof upper/sizeof *upper);
    read_from(upper);
    return 0;
}
