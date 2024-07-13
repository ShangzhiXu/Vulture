  ArgElement *arg_elements_;
  int32_t axis_;
  int32_t axis_type_;
  } data_;
  int32_t data_type_;  // equals to type_id
  int32_t dims_size_;
    float f_data_;
  bool get_max_;
    int8_t i8_data_;
    int32_t i_data_;
  int32_t in_strides_[DIMENSION_4D];
  uint32_t index_;
  bool keep_dims_;
  OpParameter op_parameter_;
  int32_t out_strides_[DIMENSION_4D];
  bool out_value_;
  int32_t topk_;
