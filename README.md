![C/C++ CI](https://github.com/sergev/Googletest-Actions-Demo/workflows/C/C++%20CI/badge.svg)

Here you can find a demo of a C++ application with an automated testing using Github Actions service.

Anytime you want to start a new project in C++, feel free to use this code as a skeleton.
Copy the contents to your repository and build your code upon it.

File demo.cpp contains a solution for the Leetcode two-sum problem.

File demo_test.cpp has a few tests to make sure the solution is correct.

To test the code from command line, run:

    make test

After every commit, visit the Actions tab and review the results of automated testing.

Links:

 * https://github.com/google/googletest/blob/master/googletest/docs/primer.md
 * https://docs.github.com/en/actions

Source files:

 * demo.hpp - declaration of twoSum() routine
 * demo.cpp - implementation of twoSum() routine
 * demo_test.cpp - tests for twoSum() routine, using Googletest
 * gtest/gtest.h - header file of Googletest framework
 * gtest/gtest-all.cpp - fused sources of Googletest framework, created by script https://github.com/google/googletest/blob/master/googletest/scripts/fuse_gtest_files.py
