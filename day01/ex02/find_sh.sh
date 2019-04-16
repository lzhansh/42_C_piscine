find . -type f -name '*.sh' -exec basename {} \; | sed -e 's/\.sh$//'
