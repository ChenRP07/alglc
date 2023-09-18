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

#include <istream>
#include <memory>
#include <string>

namespace alglc {
namespace base {

/*
 * @brief: InputBase is the base class of all input data class. 
 *         Use its extension to load input data and transfer to solution class.
 * */
class InputBase {
    /*
     * @brief: Load input data from file or stdin
     * @param: std::istream& input stream
     * @return: void
     * */
    virtual void LoadInput(const std::istream&) = 0;
};

/*
 * @brief: SolutionBase is the base class of all solution class.
 *         Use its extension to solve the problem.
 * */
class SolutionBase {
 public:
    /*
     * @brief: Default constructor.
     * */
    SolutionBase();

    /*
     * @brief: Constructor with input data.
     * @param: std::unique_ptr<InputBase> _input input data.
     * */
    explicit SolutionBase(std::unique_ptr<InputBase> _input);

    /*
     * @brief: Destructor.
     * */
    ~SolutionBase();

    /*
     * @brief: Set input data.
     * @param: std::unique_ptr<InputBase> _input input data.
     * @return: void
     * */
    void SetInput(std::unique_ptr<InputBase> _input);

    /*
     * @brief: Run the solution. Output result to output stream _output.
     * @param: std::ostream& output stream.
     * @return: void
     * */
    virtual void Run(const std::ostream& _output) = 0;

 private:
    // Input data, will be transfer to Solution.
    std::unique_ptr<InputBase> input_;
};
}    // namespace base
}    // namespace alglc

#endif
