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

static class TestDescription_suite_MyTestSuite_testEmptyInsert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptyInsert() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 9, "testEmptyInsert" ) {}
 void runTest() { suite_MyTestSuite.testEmptyInsert(); }
} testDescription_suite_MyTestSuite_testEmptyInsert;

static class TestDescription_suite_MyTestSuite_testemptyFind : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testemptyFind() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 19, "testemptyFind" ) {}
 void runTest() { suite_MyTestSuite.testemptyFind(); }
} testDescription_suite_MyTestSuite_testemptyFind;

static class TestDescription_suite_MyTestSuite_testemptyEdit : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testemptyEdit() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 25, "testemptyEdit" ) {}
 void runTest() { suite_MyTestSuite.testemptyEdit(); }
} testDescription_suite_MyTestSuite_testemptyEdit;

static class TestDescription_suite_MyTestSuite_testemptyDelete_tree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testemptyDelete_tree() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 31, "testemptyDelete_tree" ) {}
 void runTest() { suite_MyTestSuite.testemptyDelete_tree(); }
} testDescription_suite_MyTestSuite_testemptyDelete_tree;

static class TestDescription_suite_MyTestSuite_testEmptymax_height : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptymax_height() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 39, "testEmptymax_height" ) {}
 void runTest() { suite_MyTestSuite.testEmptymax_height(); }
} testDescription_suite_MyTestSuite_testEmptymax_height;

static class TestDescription_suite_MyTestSuite_testEmptymin_height : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptymin_height() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 47, "testEmptymin_height" ) {}
 void runTest() { suite_MyTestSuite.testEmptymin_height(); }
} testDescription_suite_MyTestSuite_testEmptymin_height;

static class TestDescription_suite_MyTestSuite_testEmptySize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptySize() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 55, "testEmptySize" ) {}
 void runTest() { suite_MyTestSuite.testEmptySize(); }
} testDescription_suite_MyTestSuite_testEmptySize;

static class TestDescription_suite_MyTestSuite_testEmptyis_balanced : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptyis_balanced() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 63, "testEmptyis_balanced" ) {}
 void runTest() { suite_MyTestSuite.testEmptyis_balanced(); }
} testDescription_suite_MyTestSuite_testEmptyis_balanced;

static class TestDescription_suite_MyTestSuite_testEmptyRemove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEmptyRemove() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 70, "testEmptyRemove" ) {}
 void runTest() { suite_MyTestSuite.testEmptyRemove(); }
} testDescription_suite_MyTestSuite_testEmptyRemove;

static class TestDescription_suite_MyTestSuite_testInsertlevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInsertlevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 80, "testInsertlevel1" ) {}
 void runTest() { suite_MyTestSuite.testInsertlevel1(); }
} testDescription_suite_MyTestSuite_testInsertlevel1;

static class TestDescription_suite_MyTestSuite_testFindlevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testFindlevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 90, "testFindlevel1" ) {}
 void runTest() { suite_MyTestSuite.testFindlevel1(); }
} testDescription_suite_MyTestSuite_testFindlevel1;

static class TestDescription_suite_MyTestSuite_testEditlevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEditlevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 100, "testEditlevel1" ) {}
 void runTest() { suite_MyTestSuite.testEditlevel1(); }
} testDescription_suite_MyTestSuite_testEditlevel1;

static class TestDescription_suite_MyTestSuite_testDeleteTreelevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDeleteTreelevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 113, "testDeleteTreelevel1" ) {}
 void runTest() { suite_MyTestSuite.testDeleteTreelevel1(); }
} testDescription_suite_MyTestSuite_testDeleteTreelevel1;

static class TestDescription_suite_MyTestSuite_testMaxHeightLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMaxHeightLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 122, "testMaxHeightLevel1" ) {}
 void runTest() { suite_MyTestSuite.testMaxHeightLevel1(); }
} testDescription_suite_MyTestSuite_testMaxHeightLevel1;

static class TestDescription_suite_MyTestSuite_testMinHeightLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinHeightLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 132, "testMinHeightLevel1" ) {}
 void runTest() { suite_MyTestSuite.testMinHeightLevel1(); }
} testDescription_suite_MyTestSuite_testMinHeightLevel1;

static class TestDescription_suite_MyTestSuite_testSizeLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSizeLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 143, "testSizeLevel1" ) {}
 void runTest() { suite_MyTestSuite.testSizeLevel1(); }
} testDescription_suite_MyTestSuite_testSizeLevel1;

static class TestDescription_suite_MyTestSuite_testBalancedLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testBalancedLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 153, "testBalancedLevel1" ) {}
 void runTest() { suite_MyTestSuite.testBalancedLevel1(); }
} testDescription_suite_MyTestSuite_testBalancedLevel1;

static class TestDescription_suite_MyTestSuite_testRemoveLevel1 : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemoveLevel1() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 162, "testRemoveLevel1" ) {}
 void runTest() { suite_MyTestSuite.testRemoveLevel1(); }
} testDescription_suite_MyTestSuite_testRemoveLevel1;

static class TestDescription_suite_MyTestSuite_testInsert : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testInsert() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 179, "testInsert" ) {}
 void runTest() { suite_MyTestSuite.testInsert(); }
} testDescription_suite_MyTestSuite_testInsert;

static class TestDescription_suite_MyTestSuite_testFind : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testFind() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 212, "testFind" ) {}
 void runTest() { suite_MyTestSuite.testFind(); }
} testDescription_suite_MyTestSuite_testFind;

static class TestDescription_suite_MyTestSuite_testDeleteTree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testDeleteTree() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 236, "testDeleteTree" ) {}
 void runTest() { suite_MyTestSuite.testDeleteTree(); }
} testDescription_suite_MyTestSuite_testDeleteTree;

static class TestDescription_suite_MyTestSuite_testMaxHeight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMaxHeight() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 252, "testMaxHeight" ) {}
 void runTest() { suite_MyTestSuite.testMaxHeight(); }
} testDescription_suite_MyTestSuite_testMaxHeight;

static class TestDescription_suite_MyTestSuite_testMinYeight : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testMinYeight() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 275, "testMinYeight" ) {}
 void runTest() { suite_MyTestSuite.testMinYeight(); }
} testDescription_suite_MyTestSuite_testMinYeight;

static class TestDescription_suite_MyTestSuite_testSize : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSize() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 296, "testSize" ) {}
 void runTest() { suite_MyTestSuite.testSize(); }
} testDescription_suite_MyTestSuite_testSize;

static class TestDescription_suite_MyTestSuite_testRemove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemove() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 319, "testRemove" ) {}
 void runTest() { suite_MyTestSuite.testRemove(); }
} testDescription_suite_MyTestSuite_testRemove;

static class TestDescription_suite_MyTestSuite_testFindThrow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testFindThrow() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 339, "testFindThrow" ) {}
 void runTest() { suite_MyTestSuite.testFindThrow(); }
} testDescription_suite_MyTestSuite_testFindThrow;

static class TestDescription_suite_MyTestSuite_testEditThrow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEditThrow() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 350, "testEditThrow" ) {}
 void runTest() { suite_MyTestSuite.testEditThrow(); }
} testDescription_suite_MyTestSuite_testEditThrow;

static class TestDescription_suite_MyTestSuite_testRemoveThrow : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemoveThrow() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 361, "testRemoveThrow" ) {}
 void runTest() { suite_MyTestSuite.testRemoveThrow(); }
} testDescription_suite_MyTestSuite_testRemoveThrow;

static class TestDescription_suite_MyTestSuite_testRemoveBug : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testRemoveBug() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 374, "testRemoveBug" ) {}
 void runTest() { suite_MyTestSuite.testRemoveBug(); }
} testDescription_suite_MyTestSuite_testRemoveBug;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
