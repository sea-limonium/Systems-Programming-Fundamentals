#!/bin/bash
#prompt for DIR
echo -n "Enter existing directory: "
read DIR
#create foldrs
mkdir "$DIR/a" "$DIR/b" "$DIR/c"

#quotations considering spaces in DIR
echo AK2643 > "$DIR/a/userName.txt"
echo Interstellar > "$DIR/a/myFavMovie.txt"

#move to c
mv "$DIR/a" "$DIR/c"
mv "$DIR/b" "$DIR/c"