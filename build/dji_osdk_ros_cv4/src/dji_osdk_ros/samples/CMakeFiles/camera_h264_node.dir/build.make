# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/qin/M300_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qin/M300_ws/build

# Include any dependencies generated for this target.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/depend.make

# Include the progress variables for this target.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/progress.make

# Include the compile flags for this target's objects.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/flags.make

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/flags.make
dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o: /home/qin/M300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/camera_h264_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qin/M300_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o"
	cd /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o -c /home/qin/M300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/camera_h264_node.cpp

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.i"
	cd /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qin/M300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/camera_h264_node.cpp > CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.i

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.s"
	cd /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qin/M300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/camera_h264_node.cpp -o CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.s

# Object files for target camera_h264_node
camera_h264_node_OBJECTS = \
"CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o"

# External object files for target camera_h264_node
camera_h264_node_EXTERNAL_OBJECTS =

/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/camera_h264_node.cpp.o
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/build.make
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /home/qin/M300_ws/devel/lib/libdji_osdk_ros.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libmessage_filters.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libroscpp.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_chrono.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_regex.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librostime.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_date_time.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libcpp_common.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_system.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_thread.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libmessage_filters.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libroscpp.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libpthread.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_chrono.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_filesystem.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/liblog4cxx.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_regex.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/librostime.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_date_time.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /opt/ros/noetic/lib/libcpp_common.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_system.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libboost_thread.so.1.71.0
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libconsole_bridge.so.0.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libusb-1.0.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libavcodec.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libavformat.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libavutil.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libswscale.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libtheora.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libz.so
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_gapi.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_highgui.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_ml.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_objdetect.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_photo.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_stitching.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_video.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_calib3d.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_dnn.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_features2d.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_flann.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_videoio.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: /usr/lib/aarch64-linux-gnu/libopencv_core.so.4.5.4
/home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qin/M300_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node"
	cd /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/camera_h264_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/build: /home/qin/M300_ws/devel/lib/dji_osdk_ros/camera_h264_node

.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/build

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/clean:
	cd /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && $(CMAKE_COMMAND) -P CMakeFiles/camera_h264_node.dir/cmake_clean.cmake
.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/clean

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/depend:
	cd /home/qin/M300_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qin/M300_ws/src /home/qin/M300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples /home/qin/M300_ws/build /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples /home/qin/M300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/camera_h264_node.dir/depend

