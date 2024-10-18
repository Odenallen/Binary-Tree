/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "tests.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "tests.h", 5, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testInsertlevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInsertlevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 8, "testInsertlevel1" ) {}
 void runTest() { suite_MyTestSuite.testInsertlevel1(); }
} testDescription_suite_MyTestSuite_testInsertlevel1;

static class TestDescription_suite_MyTestSuite_testInsert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInsert() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 18, "testInsert" ) {}
 void runTest() { suite_MyTestSuite.testInsert(); }
} testDescription_suite_MyTestSuite_testInsert;

static class TestDescription_suite_MyTestSuite_testFindlevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testFindlevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 48, "testFindlevel1" ) {}
 void runTest() { suite_MyTestSuite.testFindlevel1(); }
} testDescription_suite_MyTestSuite_testFindlevel1;

static class TestDescription_suite_MyTestSuite_testFind : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testFind() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 57, "testFind" ) {}
 void runTest() { suite_MyTestSuite.testFind(); }
} testDescription_suite_MyTestSuite_testFind;

static class TestDescription_suite_MyTestSuite_testEdit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEdit() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 75, "testEdit" ) {}
 void runTest() { suite_MyTestSuite.testEdit(); }
} testDescription_suite_MyTestSuite_testEdit;

static class TestDescription_suite_MyTestSuite_testDeleteTreelevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDeleteTreelevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 86, "testDeleteTreelevel1" ) {}
 void runTest() { suite_MyTestSuite.testDeleteTreelevel1(); }
} testDescription_suite_MyTestSuite_testDeleteTreelevel1;

static class TestDescription_suite_MyTestSuite_testDeleteTree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDeleteTree() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 95, "testDeleteTree" ) {}
 void runTest() { suite_MyTestSuite.testDeleteTree(); }
} testDescription_suite_MyTestSuite_testDeleteTree;

static class TestDescription_suite_MyTestSuite_testMaxHeightLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMaxHeightLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 106, "testMaxHeightLevel1" ) {}
 void runTest() { suite_MyTestSuite.testMaxHeightLevel1(); }
} testDescription_suite_MyTestSuite_testMaxHeightLevel1;

static class TestDescription_suite_MyTestSuite_testMaxHeight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMaxHeight() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 116, "testMaxHeight" ) {}
 void runTest() { suite_MyTestSuite.testMaxHeight(); }
} testDescription_suite_MyTestSuite_testMaxHeight;

static class TestDescription_suite_MyTestSuite_testMinHeightLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinHeightLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 136, "testMinHeightLevel1" ) {}
 void runTest() { suite_MyTestSuite.testMinHeightLevel1(); }
} testDescription_suite_MyTestSuite_testMinHeightLevel1;

static class TestDescription_suite_MyTestSuite_testMinYeight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinYeight() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 146, "testMinYeight" ) {}
 void runTest() { suite_MyTestSuite.testMinYeight(); }
} testDescription_suite_MyTestSuite_testMinYeight;

static class TestDescription_suite_MyTestSuite_testSizeLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSizeLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 164, "testSizeLevel1" ) {}
 void runTest() { suite_MyTestSuite.testSizeLevel1(); }
} testDescription_suite_MyTestSuite_testSizeLevel1;

static class TestDescription_suite_MyTestSuite_testSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSize() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 173, "testSize" ) {}
 void runTest() { suite_MyTestSuite.testSize(); }
} testDescription_suite_MyTestSuite_testSize;

static class TestDescription_suite_MyTestSuite_testBalanced : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBalanced() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 191, "testBalanced" ) {}
 void runTest() { suite_MyTestSuite.testBalanced(); }
} testDescription_suite_MyTestSuite_testBalanced;

static class TestDescription_suite_MyTestSuite_testRemoveLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemoveLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 199, "testRemoveLevel1" ) {}
 void runTest() { suite_MyTestSuite.testRemoveLevel1(); }
} testDescription_suite_MyTestSuite_testRemoveLevel1;

static class TestDescription_suite_MyTestSuite_testRemove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemove() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 207, "testRemove" ) {}
 void runTest() { suite_MyTestSuite.testRemove(); }
} testDescription_suite_MyTestSuite_testRemove;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
