# Always at beginning of (at least the) project file
cmake_minimum_required(VERSION 3.16)

# set the project name and version
project(BasicFeature VERSION 1.0)

#[=[ 
    Comand arguments can be 
    bracked/verbatim        message([[this are arguments]])
    quoted                  message("this is one argument" "and another")
    unquoted                message(this\ is\ first and\ second;and\ third)
]=]

# Special characters are " \ # $

#
# Options
#

# Options are displayed in the cMake GUI
option(USE_FLAG "Use some arbitrary flag to demonstrate configuration" ON)
if(USE_FLAG) # Confitional cMake statements
    message("## USE_FLAG is defiened")
endif()

#
# Variables
#

set(var "Value")
set(VAR "VALUE") # are case sensitive
message("typical variable ${var} / cache as fallback")
message("cache variable $CACHE{var}")
message("environment variable $ENV{var}")
# note set("var x" "Value") is also possible but lowers the readablity

# Variable interpolation
message("referenced index ${var${index}}") # rsolves from inner to outer

#
# Lists
#

# Note Semicolon is separator
set (myList A list of five elements)
set (myList "A;list;of;five;elements")
# NOTE: unquoted lists are automatically anpacked

#
# Variable / scopes
#

set(someGlobal "newValue" PARENT_SCOPE)

#
# Conditionals
#

# NOTE: if(${var}) always dereferences variable / if(var) conditionally dereferences it