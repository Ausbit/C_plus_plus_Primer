/* =============
 * The Exercise:
 *      Explain whether the following program fragment is legal.
 *
 *      std::cout << "The sum of " << v1;
 *                << " and " << v2;
 *                << " is " << v1 + v2 << std::endl;
 *
 *      If the program is legal, what does it do?
 *      If the program is not legal:
 *          1. Why?
 *          2. How would you fix it?
 */

/* =============
 * The Solution:
 *      1. The program is not legal because semicolons have been
 *         used to break a single output statement that was written
 *         on multiple lines into three incomplete statements, and this
 *         has created bugs due to syntax and semantic errors on multiple lines.
 *
 *      2. I would fix this bug by deleting the semicolons after
 *         the variables v1 and v2 on the first and second lines respectively.
 *         And i will leave the last semicolon after std::endl on the third line.
 *         This indicates to the compiler that it is a single multi-line statement. 
 *
 *         Like this:
 *
 *              std::cout << "The sum of " << v1
 *                        << " and " << v2
 *                        << " is " << v1 + v2 << std::endl;
 */


#include <iostream>

int main()
{
    int v1 = 9,
        v2 = 19;

    std::cout << "The sum of " << v1
              << " and " << v2
              << " is " << v1 + v2 << std::endl;

    return 0;
}
