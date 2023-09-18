/* ====================================================
 *   Copyright (C) 2023  All rights reserved.
 *
 *   Author        : crp
 *   Email         : chenrp07@gmail.com
 *   File Name     : base.h
 *   Last Modified : 2023-09-18 16:17
 *   Describe      : 
 *
 * ====================================================
 */

#ifndef _ALGLC_BASE_H_
#define _ALGLC_BASE_H_

#include <memory>
#include <string>

namespace alglc {

class InputBase {};

class SolutionBase {
 public:
    SolutionBase();
    ~SolutionBase();
    virtual void Run() = 0;
    virtual void LoadInput(std::string) = 0;

 private:
    std::unique_ptr<InputBase> input_;
};
}    // namespace alglc

#endif
