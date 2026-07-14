# CMake generated Testfile for 
# Source directory: /Users/glf/workspace/ai/deskflow/src/unittests/net
# Build directory: /Users/glf/workspace/ai/deskflow/build-local/src/unittests/net
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("SecureUtilsTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/net/SecureUtilsTests")
set_tests_properties("SecureUtilsTests" PROPERTIES  DEPENDS "net" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/net" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;8;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;0;")
add_test("FingerprintTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/net/FingerprintTests")
set_tests_properties("FingerprintTests" PROPERTIES  DEPENDS "net" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/net" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;16;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;0;")
add_test("FingerprintDatabaseTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/net/FingerprintDatabaseTests")
set_tests_properties("FingerprintDatabaseTests" PROPERTIES  DEPENDS "net" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/net" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;24;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/net/CMakeLists.txt;0;")
