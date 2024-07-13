  int64_t after_axis_size;
  int axis_;
  int64_t count_unit_;
  int input_num_;
  const int **input_shapes_;
  OpParameter op_parameter_;
  const int *output_shapes_;
  ConcatQuantArg quant_arg_;
  int thread_count_;
