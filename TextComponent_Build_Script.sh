echo "Text Search Component CLEAN Initiated!!!\n"

"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .clean-conf

echo "Text Search Component CLEAN Successful!!!\n"

echo "Text Search Component BUILD Initiated!!!\n" 

"/usr/bin/make" -f nbproject/Makefile-Debug.mk QMAKE= SUBPROJECTS= .build-conf

echo "Text Search Component BUILD Successful!!!\n" 

echo "Executing Text Search Component Scenario 1 ==> Output in Scenario1.txt\n" 

dist/Debug/GNU-Linux-x86/textsearchcomponent  "-Path" "." -Files "*.*" -Words "<iostream>" "<vector>" "#include" "<string>" > Scenario1.txt

echo "Executing Text Search Component Scenario 2 ==> Output in Scenario2.txt\n" 

dist/Debug/GNU-Linux-x86/textsearchcomponent "/O" "/R" "-Path" "." -Files "*.*" -Words "<iostream>" "<vector>" "#include" "<string>" > Scenario2.txt 

echo "Executing Text Search Component Scenario 3 ==> Output in Scenario3.txt\n" 

dist/Debug/GNU-Linux-x86/textsearchcomponent "/R" "-Path" "." -Files "*.*" -Words "<iostream>" "<vector>" "#include" "<string>" > Scenario3.txt

echo "Executing Text Search Component Scenario 4 ==> Output in Scenario4.txt\n" 

dist/Debug/GNU-Linux-x86/textsearchcomponent "/O" "-Path" "." -Files "*.*" -Words "<iostream>" "<vector>" "#include" "<string>" > Scenario4.txt

