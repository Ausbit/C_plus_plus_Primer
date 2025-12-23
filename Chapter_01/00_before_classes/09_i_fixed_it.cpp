/* =============
 * The Exercise:
 *      Indicate which, if any, of the following output statements are legal:
 */
// std::cout << "/*";
// std::cout << "*/";
// std::cout << /* "*/" */;
// std::cout << /* "*/" /* "/*" */;
/*
 * After you have predicted what will happen, test your answers by compiling a
 * program with each of these statements.
 * Correct any errors you encounter.
 */

/* =============
 * The Solution:
 *      I predict that the first and second lines will run without problems, and
 *      their output will be the characters that are enclosed in double quotes for each.
 *      But, the third and fourth lines will create bugs as follows:
 *          For the third line, the compiler will ignore the comment pair, and there will
 *          be nothing before the semicolon for the << output operator to send to the std::cout
 *          output stream object. The compiler will stop and report this as a syntax error. 
 *
 *          For the fourth line, two things will occur:
 */
 //             First, the /* that is not enclosed in double quotes within the comment pair
/*              will cause the compiler to raise a warning message during compilation. 
 *              Second, the comment pair will not be compiled as source code and that there
 *              will be nothing before the semicolon for the << output operator to send to the
 *              std::cout output stream objrct. The compiler will stop and report this as a syntax error.
 */
//  Actually, it was the "*/"n on the fourth line that the compiler reported as an error. The others were
//  reported with passable warnings.



#include <iostream>

int main()
{
    std::cout << "/*";
    std::cout << "*/";
    std::cout << "/* */ */";
    std::cout << "/* */ /* * */";
    std::cout << std::endl;

    return 0;
}
