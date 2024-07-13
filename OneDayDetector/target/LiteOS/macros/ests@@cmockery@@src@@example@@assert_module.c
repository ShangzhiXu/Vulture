#define assert(expression) \
    mock_assert((int)(expression), #expression, __FILE__, __LINE__);
