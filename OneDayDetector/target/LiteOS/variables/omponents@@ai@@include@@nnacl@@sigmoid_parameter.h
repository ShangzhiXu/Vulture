  double alpha_;
  int64_t axis_;
  int element_num;
  int64_t in_offset_[PRELU_OFFSET_MAX_SIZE];
  const int *in_shape_;
  int input_dim_;
  int64_t offset_[PRELU_OFFSET_MAX_SIZE];
  OpParameter op_parameter_;
  const int *out_shape_;
  SigmoidQuantArg quant_arg;
  int thread_count_;
