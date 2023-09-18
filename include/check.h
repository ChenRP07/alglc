/* ====================================================
 *   Copyright (C) 2023  All rights reserved.
 *
 *   Author        : crp
 *   Email         : chenrp07@gmail.com
 *   File Name     : check.h
 *   Last Modified : 2023-09-18 21:38
 *   Describe      : 
 *
 * ====================================================
 */

#include <istream>
#include <memory>
#include <ostream>

namespace alglc {
namespace check {

/*
 * @brief: CheckAnswer is the class to check the solution answer is the same as the standard answer.
 * */
class CheckAnswer {
 public:
    /*
     * @brief: Default constructor.
     * */
    CheckAnswer();

    /*
     * @brief: Constructor with standard answer and solution answer.
     * @param: std::unique_ptr<std::istream> _standard_answer standard answer.
     * @param: std::unique_ptr<std::ostream> _solution_answer solution answer.
     * */
    CheckAnswer(std::unique_ptr<std::istream> _standard_answer,
                std::unique_ptr<std::ostream> _solution_answer);

    /*
     * @brief: Destructor.
     * */
    ~CheckAnswer();

    /*
     * @brief: Check and return the result.
     * @return: bool
     * */
    bool Check();

    /*
     * @brief: Set standard answer.
     * @param: std::unique_ptr<std::istream> _standard_answer standard answer.
     * @return: void
     * */
    void SetStandardAnswer(std::unique_ptr<std::istream> _standard_answer);

    /*
     * @brief: Set solution answer.
     * @param: std::unique_ptr<std::ostream> _solution_answer solution answer.
     * @return: void
     * */
    void SetSolutionAnswer(std::unique_ptr<std::ostream> _solution_answer);

 private:
    // standard answer
    std::unique_ptr<std::istream> standard_answer_;
    // solution answer
    std::unique_ptr<std::ostream> solution_answer_;
};
}    // namespace check
}    // namespace alglc
