// clang-format off
// Generated file (from: relu6_float_2_relaxed.mod.py). Do not edit
void CreateModel(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 26, 40, 2});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type0);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RELU6, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

void CreateModel_dynamic_output_shape(Model *model) {
  OperandType type0(Type::TENSOR_FLOAT32, {2, 26, 40, 2});
  OperandType type1(Type::TENSOR_FLOAT32, {0, 0, 0, 0});
  // Phase 1, operands
  auto input = model->addOperand(&type0);
  auto output = model->addOperand(&type1);
  // Phase 2, operations
  model->addOperation(ANEURALNETWORKS_RELU6, {input}, {output});
  // Phase 3, inputs and outputs
  model->identifyInputsAndOutputs(
    {input},
    {output});
  // Phase 4: set relaxed execution
  model->relaxComputationFloat32toFloat16(true);
  assert(model->isValid());
}

inline bool is_ignored_dynamic_output_shape(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

