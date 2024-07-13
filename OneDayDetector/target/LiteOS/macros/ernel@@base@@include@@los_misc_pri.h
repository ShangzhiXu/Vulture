#define SORT_ELEM_ADDR(sortParam, index) \
    ((sortParam)->buf + ((index) * (sortParam)->ctrlBlockSize) + (sortParam)->sortElemOff)
