/* ====================================================
 *   Copyright (C) 2023  All rights reserved.
 *
 *   Author        : crp
 *   Email         : chenrp07@gmail.com
 *   File Name     : check.cpp
 *   Last Modified : 2023-09-18 21:45
 *   Describe      : 
 *
 * ====================================================
 */

#include "include/check.h"

namespace alglc {
namespace check {

CheckAnswer::CheckAnswer()
    : standard_answer_(nullptr), solution_answer_(nullptr) {}

CheckAnswer::CheckAnswer(std::unique_ptr<std::istream> _standard_answer,
                         std::unique_ptr<std::ostream> _solution_answer)
    : standard_answer_(std::move(_standard_answer)),
      solution_answer_(std::move(_solution_answer)) {}

CheckAnswer::~CheckAnswer() {}

void CheckAnswer::SetSolutionAnswer(
    std::unique_ptr<std::ostream> _solution_answer) {
    this->solution_answer_ = std::move(_solution_answer);
}

void CheckAnswer::SetStandardAnswer(
    std::unique_ptr<std::istream> _stanard_answer) {
    this->standard_answer_ = std::move(_stanard_answer);
}

bool CheckAnswer::Check() {
    return true;
}

}    // namespace check
}    // namespace alglc
