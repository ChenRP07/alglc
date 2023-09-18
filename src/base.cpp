/* ====================================================
 *   Copyright (C) 2023  All rights reserved.
 *
 *   Author        : crp
 *   Email         : chenrp07@gmail.com
 *   File Name     : alglc.cpp
 *   Last Modified : 2023-09-18 20:54
 *   Describe      : 
 *
 * ====================================================
 */

#include "include/base.h"

namespace alglc {
namespace base {

SolutionBase::SolutionBase() : input_(nullptr) {}

SolutionBase::SolutionBase(std::unique_ptr<InputBase> _input)
    : input_(std::move(_input)) {}

SolutionBase::~SolutionBase() {}

void SolutionBase::SetInput(std::unique_ptr<InputBase> _input) {
    input_ = std::move(_input);
}

}    // namespace base
}    // namespace alglc
