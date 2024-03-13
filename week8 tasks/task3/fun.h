#ifndef SUM_ARRAY_H_
#define SUM_ARRAY_H_ 
#define ARRAY_SUM(arr, len) ({ \
    int sum = 0; \
    for (int i = 0; i < (len); i++) { \
        sum += (arr)[i]; \
    } \
    sum; \
})
#endif
