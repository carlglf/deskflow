# CMake generated Testfile for 
# Source directory: /Users/glf/workspace/ai/deskflow/src/unittests/gui
# Build directory: /Users/glf/workspace/ai/deskflow/build-local/src/unittests/gui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("LoggerTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/gui/LoggerTests")
set_tests_properties("LoggerTests" PROPERTIES  DEPENDS "gui" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/gui" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/gui/CMakeLists.txt;7;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/gui/CMakeLists.txt;0;")
add_test("KeySequenceTests" "/Users/glf/workspace/ai/deskflow/build-local/src/unittests/gui/KeySequenceTests")
set_tests_properties("KeySequenceTests" PROPERTIES  DEPENDS "gui" WORKING_DIRECTORY "/Users/glf/workspace/ai/deskflow/build-local/src/lib/gui" _BACKTRACE_TRIPLES "/Users/glf/workspace/ai/deskflow/src/unittests/CMakeLists.txt;41;add_test;/Users/glf/workspace/ai/deskflow/src/unittests/gui/CMakeLists.txt;14;create_test;/Users/glf/workspace/ai/deskflow/src/unittests/gui/CMakeLists.txt;0;")
subdirs("config")
subdirs("core")
