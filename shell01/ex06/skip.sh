#!/bin/bash

#displays every other line

ls -l | awk 'NR%2==1' 
