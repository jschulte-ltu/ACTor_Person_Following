# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "perception_msgs: 4 messages, 0 services")

set(MSG_I_FLAGS "-Iperception_msgs:/home/actor1/ACTor_Person_Following/src/perception_msgs/msg;-Istd_msgs:/opt/ros/noetic/share/std_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/noetic/share/sensor_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/noetic/share/geometry_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(perception_msgs_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_custom_target(_perception_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "perception_msgs" "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" "geometry_msgs/Quaternion:std_msgs/Header:geometry_msgs/Point:perception_msgs/PointInImage:geometry_msgs/PoseWithCovariance:geometry_msgs/Pose:perception_msgs/LabeledPointInImage"
)

get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_custom_target(_perception_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "perception_msgs" "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" "geometry_msgs/Quaternion:std_msgs/Header:geometry_msgs/Point:perception_msgs/PointInImage:geometry_msgs/PoseWithCovariance:perception_msgs/Marker:geometry_msgs/Pose:perception_msgs/LabeledPointInImage"
)

get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_custom_target(_perception_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "perception_msgs" "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" ""
)

get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_custom_target(_perception_msgs_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "perception_msgs" "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" "perception_msgs/PointInImage"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
)
_generate_msg_cpp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
)
_generate_msg_cpp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
)
_generate_msg_cpp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  "${MSG_I_FLAGS}"
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
)

### Generating Services

### Generating Module File
_generate_module_cpp(perception_msgs
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(perception_msgs_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(perception_msgs_generate_messages perception_msgs_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_cpp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_cpp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_cpp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_cpp _perception_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(perception_msgs_gencpp)
add_dependencies(perception_msgs_gencpp perception_msgs_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS perception_msgs_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
)
_generate_msg_eus(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
)
_generate_msg_eus(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
)
_generate_msg_eus(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  "${MSG_I_FLAGS}"
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
)

### Generating Services

### Generating Module File
_generate_module_eus(perception_msgs
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(perception_msgs_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(perception_msgs_generate_messages perception_msgs_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_eus _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_eus _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_eus _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_eus _perception_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(perception_msgs_geneus)
add_dependencies(perception_msgs_geneus perception_msgs_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS perception_msgs_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
)
_generate_msg_lisp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
)
_generate_msg_lisp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
)
_generate_msg_lisp(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  "${MSG_I_FLAGS}"
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
)

### Generating Services

### Generating Module File
_generate_module_lisp(perception_msgs
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(perception_msgs_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(perception_msgs_generate_messages perception_msgs_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_lisp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_lisp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_lisp _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_lisp _perception_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(perception_msgs_genlisp)
add_dependencies(perception_msgs_genlisp perception_msgs_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS perception_msgs_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
)
_generate_msg_nodejs(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
)
_generate_msg_nodejs(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
)
_generate_msg_nodejs(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  "${MSG_I_FLAGS}"
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
)

### Generating Services

### Generating Module File
_generate_module_nodejs(perception_msgs
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(perception_msgs_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(perception_msgs_generate_messages perception_msgs_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_nodejs _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_nodejs _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_nodejs _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_nodejs _perception_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(perception_msgs_gennodejs)
add_dependencies(perception_msgs_gennodejs perception_msgs_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS perception_msgs_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
)
_generate_msg_py(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/noetic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Point.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/PoseWithCovariance.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg;/opt/ros/noetic/share/geometry_msgs/cmake/../msg/Pose.msg;/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
)
_generate_msg_py(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
)
_generate_msg_py(perception_msgs
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg"
  "${MSG_I_FLAGS}"
  "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
)

### Generating Services

### Generating Module File
_generate_module_py(perception_msgs
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(perception_msgs_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(perception_msgs_generate_messages perception_msgs_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/Marker.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_py _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/MarkerList.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_py _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/PointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_py _perception_msgs_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/actor1/ACTor_Person_Following/src/perception_msgs/msg/LabeledPointInImage.msg" NAME_WE)
add_dependencies(perception_msgs_generate_messages_py _perception_msgs_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(perception_msgs_genpy)
add_dependencies(perception_msgs_genpy perception_msgs_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS perception_msgs_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/perception_msgs
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(perception_msgs_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET sensor_msgs_generate_messages_cpp)
  add_dependencies(perception_msgs_generate_messages_cpp sensor_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(perception_msgs_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/perception_msgs
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(perception_msgs_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET sensor_msgs_generate_messages_eus)
  add_dependencies(perception_msgs_generate_messages_eus sensor_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(perception_msgs_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/perception_msgs
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(perception_msgs_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET sensor_msgs_generate_messages_lisp)
  add_dependencies(perception_msgs_generate_messages_lisp sensor_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(perception_msgs_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/perception_msgs
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(perception_msgs_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET sensor_msgs_generate_messages_nodejs)
  add_dependencies(perception_msgs_generate_messages_nodejs sensor_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(perception_msgs_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs)
  install(CODE "execute_process(COMMAND \"/usr/bin/python3\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/perception_msgs
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(perception_msgs_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET sensor_msgs_generate_messages_py)
  add_dependencies(perception_msgs_generate_messages_py sensor_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(perception_msgs_generate_messages_py geometry_msgs_generate_messages_py)
endif()
