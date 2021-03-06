#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int search_value_half(int *array2, int value, int m);
int jump_search(int *array, size_t size, int value);
int linear_search2(int *array, size_t size, int value, int imin);
void  print_array(int *array, size_t l, size_t r);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search2(int *array, size_t l, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
