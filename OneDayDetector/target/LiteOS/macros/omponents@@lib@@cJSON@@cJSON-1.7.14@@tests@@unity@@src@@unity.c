#define UNITY_FLOAT_OR_DOUBLE_WITHIN(delta, expected, actual, diff)                       \
    if (isinf(expected) && isinf(actual) && ((expected < 0) == (actual < 0))) return 1;   \
    if (UNITY_NAN_CHECK) return 1;                                                        \
    diff = actual - expected;                                                             \
    if (diff < 0) diff = -diff;                                                           \
    if (delta < 0) delta = -delta;                                                        \
    return !(isnan(diff) || isinf(diff) || (diff > delta))
  #define UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(expected, actual) \
  {                                                               \
    UnityPrint(UnityStrExpected);                                 \
    UnityPrintFloat(expected);                                    \
    UnityPrint(UnityStrWas);                                      \
    UnityPrintFloat(actual); }
  #define UNITY_PRINT_EXPECTED_AND_ACTUAL_FLOAT(expected, actual) \
    UnityPrint(UnityStrDelta)
#define UnityPrintPointlessAndBail()       \
{                                          \
    UnityTestResultsFailBegin(lineNumber); \
    UnityPrint(UnityStrPointless);         \
    UnityAddMsgIfSpecified(msg);           \
    UNITY_FAIL_AND_BAIL; }
