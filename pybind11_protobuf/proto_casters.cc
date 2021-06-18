// Copyright (c) 2020 The Pybind Development Team. All rights reserved.
//
// All rights reserved. Use of this source code is governed by a
// BSD-style license that can be found in the LICENSE file.

#include "pybind11_protobuf/proto_casters.h"

void pybind11_proto_casters_collision() {
  // This symbol intentionally defined in both fast_cpp_proto_casters.cc
  // and proto_casters.cc to detect potential ODR violations in libraries.

  // Avoid mixing fast_cpp_proto_casters.h and proto_casters.h in the same
  // build target; this violates the ODR rule for type_caster<::google::protobuf::Message>
  // as well as other potential types, and can lead to hard to diagnose bugs,
  // crashes, and other mysterious bad behavior.

  // See https://github.com/pybind/pybind11/issues/2695 for more details.
}