/*
 * During debugging, it is very common to
 * comment out a block of code.
 *
 * Now, it is possible for the code to contain
 * nested comment pairs.
 *
 * For this reason:
 *
 *      The best way to comment a block of code
 *      is to insert single-line comments at the 
 *      beginning of each line in the section we want to ignore.
 */

// Just like this:
//  /*
//  * everything inside a single-line comment is ignored
//  * including the nested comment pairs.
//   */

#include <iostream>

int main()
{
    return 0;
}
