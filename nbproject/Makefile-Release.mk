#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/TextFinderProject/CPPClientInterface.o \
	${OBJECTDIR}/TextFinderProject/CPPClientInterface_TextComp.o \
	${OBJECTDIR}/TextFinderProject/FileAnalyzer.o \
	${OBJECTDIR}/TextFinderProject/FileSystem.o \
	${OBJECTDIR}/TextFinderProject/InputArgumentParser.o \
	${OBJECTDIR}/TextFinderProject/TextCompUtil.o \
	${OBJECTDIR}/TextFinderProject/TextSearchComponent.o \
	${OBJECTDIR}/TextFinderProject/TextSearchFactory.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/textsearchcomponent

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/textsearchcomponent: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/textsearchcomponent ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/TextFinderProject/CPPClientInterface.o: TextFinderProject/CPPClientInterface.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/CPPClientInterface.o TextFinderProject/CPPClientInterface.cpp

${OBJECTDIR}/TextFinderProject/CPPClientInterface_TextComp.o: TextFinderProject/CPPClientInterface_TextComp.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/CPPClientInterface_TextComp.o TextFinderProject/CPPClientInterface_TextComp.cpp

${OBJECTDIR}/TextFinderProject/FileAnalyzer.o: TextFinderProject/FileAnalyzer.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/FileAnalyzer.o TextFinderProject/FileAnalyzer.cpp

${OBJECTDIR}/TextFinderProject/FileSystem.o: TextFinderProject/FileSystem.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/FileSystem.o TextFinderProject/FileSystem.cpp

${OBJECTDIR}/TextFinderProject/InputArgumentParser.o: TextFinderProject/InputArgumentParser.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/InputArgumentParser.o TextFinderProject/InputArgumentParser.cpp

${OBJECTDIR}/TextFinderProject/TextCompUtil.o: TextFinderProject/TextCompUtil.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/TextCompUtil.o TextFinderProject/TextCompUtil.cpp

${OBJECTDIR}/TextFinderProject/TextSearchComponent.o: TextFinderProject/TextSearchComponent.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/TextSearchComponent.o TextFinderProject/TextSearchComponent.cpp

${OBJECTDIR}/TextFinderProject/TextSearchFactory.o: TextFinderProject/TextSearchFactory.cpp 
	${MKDIR} -p ${OBJECTDIR}/TextFinderProject
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/TextFinderProject/TextSearchFactory.o TextFinderProject/TextSearchFactory.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/textsearchcomponent

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
