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
CMAKE_SOURCE_DIR = /home/robotics/Team12/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robotics/Team12/build

# Utility rule file for sdk_sagittarius_arm_gencfg.

# Include the progress variables for this target.
include sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/progress.make

sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm/cfg/SDKSagittariusArmConfig.py


/home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h: /home/robotics/Team12/src/sagittarius_arm_ros/sdk_sagittarius_arm/cfg/SDKSagittariusArm.cfg
/home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.py.template
/home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/robotics/Team12/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dynamic reconfigure files from cfg/SDKSagittariusArm.cfg: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h /home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm/cfg/SDKSagittariusArmConfig.py"
	cd /home/robotics/Team12/build/sagittarius_arm_ros/sdk_sagittarius_arm && ../../catkin_generated/env_cached.sh /home/robotics/Team12/build/sagittarius_arm_ros/sdk_sagittarius_arm/setup_custom_pythonpath.sh /home/robotics/Team12/src/sagittarius_arm_ros/sdk_sagittarius_arm/cfg/SDKSagittariusArm.cfg /opt/ros/noetic/share/dynamic_reconfigure/cmake/.. /home/robotics/Team12/devel/share/sdk_sagittarius_arm /home/robotics/Team12/devel/include/sdk_sagittarius_arm /home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm

/home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.dox: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.dox

/home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig-usage.dox: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig-usage.dox

/home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm/cfg/SDKSagittariusArmConfig.py: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm/cfg/SDKSagittariusArmConfig.py

/home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.wikidoc: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.wikidoc

sdk_sagittarius_arm_gencfg: sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg
sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/include/sdk_sagittarius_arm/SDKSagittariusArmConfig.h
sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.dox
sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig-usage.dox
sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/lib/python3/dist-packages/sdk_sagittarius_arm/cfg/SDKSagittariusArmConfig.py
sdk_sagittarius_arm_gencfg: /home/robotics/Team12/devel/share/sdk_sagittarius_arm/docs/SDKSagittariusArmConfig.wikidoc
sdk_sagittarius_arm_gencfg: sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/build.make

.PHONY : sdk_sagittarius_arm_gencfg

# Rule to build all files generated by this target.
sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/build: sdk_sagittarius_arm_gencfg

.PHONY : sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/build

sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/clean:
	cd /home/robotics/Team12/build/sagittarius_arm_ros/sdk_sagittarius_arm && $(CMAKE_COMMAND) -P CMakeFiles/sdk_sagittarius_arm_gencfg.dir/cmake_clean.cmake
.PHONY : sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/clean

sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/depend:
	cd /home/robotics/Team12/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robotics/Team12/src /home/robotics/Team12/src/sagittarius_arm_ros/sdk_sagittarius_arm /home/robotics/Team12/build /home/robotics/Team12/build/sagittarius_arm_ros/sdk_sagittarius_arm /home/robotics/Team12/build/sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : sagittarius_arm_ros/sdk_sagittarius_arm/CMakeFiles/sdk_sagittarius_arm_gencfg.dir/depend

