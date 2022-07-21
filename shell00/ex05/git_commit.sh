#!/bin/bash

#muestra en pantalla los ids de los ultimos 5 commits del repositorio

git log -5 --pretty="%H"
