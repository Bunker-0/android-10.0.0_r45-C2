// clang-format off
// Generated file (from: fully_connected_quant8_large.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_quant8_large {
// Generated fully_connected_quant8_large test
#include "generated/examples/fully_connected_quant8_large.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_quant8_large.model.cpp"
} // namespace fully_connected_quant8_large

TEST_F(GeneratedTests, fully_connected_quant8_large) {
    execute(fully_connected_quant8_large::CreateModel,
            fully_connected_quant8_large::is_ignored,
            fully_connected_quant8_large::get_examples());
}
TEST_AVAILABLE_SINCE(V1_0, fully_connected_quant8_large, fully_connected_quant8_large::CreateModel)

TEST_F(DynamicOutputShapeTest, fully_connected_quant8_large_dynamic_output_shape) {
    execute(fully_connected_quant8_large::CreateModel_dynamic_output_shape,
            fully_connected_quant8_large::is_ignored_dynamic_output_shape,
            fully_connected_quant8_large::get_examples_dynamic_output_shape());
}

