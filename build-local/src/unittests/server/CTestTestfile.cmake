# CMake generated Testfile for 
# Source directory: /Users/glf/workspace/ai/deskflow/src/unittests/server
# Build directory: /Users/glf/workspace/ai/deskflow/build-local/src/unittests/server
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("ServerConfigTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/server/ServerConfigTests")
set_tests_properties("ServerConfigTests" PROPERTIES  DEPENDS "server" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/server" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/server/CMakeLists.txt;8;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/server/CMakeLists.txt;0;")
add_test("ServerTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/server/ServerTests")
set_tests_properties("ServerTests" PROPERTIES  DEPENDS "server" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/server" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/server/CMakeLists.txt;16;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/server/CMakeLists.txt;0;")
