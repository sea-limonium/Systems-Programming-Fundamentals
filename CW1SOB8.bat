@echo off

rem Create a folder called “myBatchScript”.
mkdir myBatchScript

rem Create a .txt file called “results.txt”.
echo. > results.txt

rem Write the following to the “results.txt” file:
echo Knock, knock. >> results.txt
echo (Who’s there?) >> results.txt
echo Recursion. >> results.txt
echo (Recursion who?) >> results.txt
echo Knock Knock... >> results.txt

rem Copy the “results.txt” file to the “myBatchScript” folder.
copy results.txt myBatchScript\

rem Delete the original “results.txt” file.
del results.txt

rem Print the message “Task Complete!”
echo Task Complete!

pause