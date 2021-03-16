# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "actor_person_following: 2 messages, 0 services")

set(MSG_I_FLAGS "-Iactor_person_following:/home/mpleune/catkin_ws/src/actor_person_following/msg;-Istd_msgs:/opt/ros/kinetic/share/std_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(actor_person_following_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_custom_target(_actor_person_following_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "actor_person_following" "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" ""
)

get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_custom_target(_actor_person_following_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "actor_person_following" "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" "std_msgs/Header:actor_person_following/Detection"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/actor_person_following
)
_generate_msg_cpp(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/actor_person_following
)

### Generating Services

### Generating Module File
_generate_module_cpp(actor_person_following
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/actor_person_following
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(actor_person_following_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(actor_person_following_generate_messages actor_person_following_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_cpp _actor_person_following_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_cpp _actor_person_following_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(actor_person_following_gencpp)
add_dependencies(actor_person_following_gencpp actor_person_following_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS actor_person_following_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/actor_person_following
)
_generate_msg_eus(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/actor_person_following
)

### Generating Services

### Generating Module File
_generate_module_eus(actor_person_following
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/actor_person_following
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(actor_person_following_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(actor_person_following_generate_messages actor_person_following_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_eus _actor_person_following_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_eus _actor_person_following_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(actor_person_following_geneus)
add_dependencies(actor_person_following_geneus actor_person_following_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS actor_person_following_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/actor_person_following
)
_generate_msg_lisp(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/actor_person_following
)

### Generating Services

### Generating Module File
_generate_module_lisp(actor_person_following
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/actor_person_following
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(actor_person_following_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(actor_person_following_generate_messages actor_person_following_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_lisp _actor_person_following_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_lisp _actor_person_following_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(actor_person_following_genlisp)
add_dependencies(actor_person_following_genlisp actor_person_following_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS actor_person_following_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/actor_person_following
)
_generate_msg_nodejs(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/actor_person_following
)

### Generating Services

### Generating Module File
_generate_module_nodejs(actor_person_following
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/actor_person_following
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(actor_person_following_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(actor_person_following_generate_messages actor_person_following_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_nodejs _actor_person_following_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_nodejs _actor_person_following_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(actor_person_following_gennodejs)
add_dependencies(actor_person_following_gennodejs actor_person_following_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS actor_person_following_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  "${MSG_I_FLAGS}"
  ""
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following
)
_generate_msg_py(actor_person_following
  "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/kinetic/share/std_msgs/cmake/../msg/Header.msg;/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following
)

### Generating Services

### Generating Module File
_generate_module_py(actor_person_following
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(actor_person_following_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(actor_person_following_generate_messages actor_person_following_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detection.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_py _actor_person_following_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/mpleune/catkin_ws/src/actor_person_following/msg/Detections.msg" NAME_WE)
add_dependencies(actor_person_following_generate_messages_py _actor_person_following_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(actor_person_following_genpy)
add_dependencies(actor_person_following_genpy actor_person_following_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS actor_person_following_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/actor_person_following)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/actor_person_following
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(actor_person_following_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/actor_person_following)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/actor_person_following
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(actor_person_following_generate_messages_eus std_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/actor_person_following)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/actor_person_following
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(actor_person_following_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/actor_person_following)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/actor_person_following
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(actor_person_following_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/actor_person_following
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(actor_person_following_generate_messages_py std_msgs_generate_messages_py)
endif()
