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
CMAKE_SOURCE_DIR = /home/erfan/m300_ws/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/erfan/m300_ws/build

# Include any dependencies generated for this target.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/depend.make

# Include the progress variables for this target.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/progress.make

# Include the compile flags for this target's objects.
include dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/flags.make

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/flags.make
dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o: /home/erfan/m300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/mobile_device_node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/erfan/m300_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o"
	cd /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o -c /home/erfan/m300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/mobile_device_node.cpp

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.i"
	cd /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/erfan/m300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/mobile_device_node.cpp > CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.i

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.s"
	cd /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/erfan/m300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/mobile_device_node.cpp -o CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.s

# Object files for target mobile_device_node
mobile_device_node_OBJECTS = \
"CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o"

# External object files for target mobile_device_node
mobile_device_node_EXTERNAL_OBJECTS =

/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/mobile_device_node.cpp.o
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/build.make
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /home/erfan/m300_ws/devel/lib/libdji_osdk_ros.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libmessage_filters.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libroscpp.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librostime.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libcpp_common.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libmessage_filters.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libroscpp.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_chrono.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libroscpp_serialization.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libxmlrpcpp.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole_log4cxx.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librosconsole_backend_interface.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/liblog4cxx.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_regex.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/librostime.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /opt/ros/noetic/lib/libcpp_common.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libboost_thread.so.1.71.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so.0.4
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libavcodec.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libavformat.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libavutil.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libswscale.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libtheora.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libz.so
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_stitching.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_aruco.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_bgsegm.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_bioinspired.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_ccalib.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_dnn_objdetect.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_dnn_superres.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_dpm.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_highgui.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_face.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_freetype.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_fuzzy.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_hdf.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_hfs.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_img_hash.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_line_descriptor.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_quality.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_reg.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_rgbd.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_saliency.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_shape.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_stereo.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_structured_light.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_phase_unwrapping.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_superres.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_optflow.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_surface_matching.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_tracking.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_datasets.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_plot.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_text.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_dnn.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_ml.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_videostab.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_videoio.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_viz.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_ximgproc.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_video.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_xobjdetect.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_imgcodecs.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_objdetect.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_calib3d.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_features2d.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_flann.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_xphoto.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_photo.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_imgproc.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: /usr/lib/x86_64-linux-gnu/libopencv_core.so.4.2.0
/home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node: dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/erfan/m300_ws/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable /home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node"
	cd /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mobile_device_node.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/build: /home/erfan/m300_ws/devel/lib/dji_osdk_ros/mobile_device_node

.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/build

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/clean:
	cd /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples && $(CMAKE_COMMAND) -P CMakeFiles/mobile_device_node.dir/cmake_clean.cmake
.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/clean

dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/depend:
	cd /home/erfan/m300_ws/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/erfan/m300_ws/src /home/erfan/m300_ws/src/dji_osdk_ros_cv4/src/dji_osdk_ros/samples /home/erfan/m300_ws/build /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples /home/erfan/m300_ws/build/dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : dji_osdk_ros_cv4/src/dji_osdk_ros/samples/CMakeFiles/mobile_device_node.dir/depend

