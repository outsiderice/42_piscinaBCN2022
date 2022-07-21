#!/bin/bash

#counts regular files and directories in current directory and subdirectories.

find . | wc -l | sed 's/ //g' 
