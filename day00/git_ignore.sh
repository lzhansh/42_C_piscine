#!/bin/sh
git status -s --ignored | grep '!! ' | tr -d '!! '
