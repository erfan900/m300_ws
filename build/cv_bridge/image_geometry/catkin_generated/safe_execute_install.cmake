execute_process(COMMAND "/home/erfan/m300_ws/build/cv_bridge/image_geometry/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/erfan/m300_ws/build/cv_bridge/image_geometry/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
