#!/bin/bash
# variables w user input
path=$1
X=$2
Y=$3

echo "Input path: "
read path

# CREATE PATH IF DOESNT EXIST
if [ ! -d $path ]; then
    mkdir -p $path
    echo "No Path found. $path created for you!"
fi

# x folders
echo "Enter X between 1 and 20, and press ENTER: "
read X
if [ $X -le 0 ] || [ $X -gt 20 ]; then
    echo "Invalid number!"
    exit 1
fi

# y files
echo "Enter Y between 1 and 20, and press ENTER: "
read Y
if [ $Y -le 0 ] || [ $Y -gt 20 ]; then
    echo "Invalid number!"
    exit 1
fi

# create x number of folders
for ((i = 1; i <= X; i++)); do
    folder=$path/folder$i
    mkdir -p $folder
    # y number of files
    for ((j = 1; j <= Y; j++)); do
        file=$folder/file$j.txt
        touch $file
    done
done

echo "Success! $X Folders with $Y txt files each have been created at $path!"


