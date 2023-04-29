# Basic commands

df -h

ifconfig

sudo yum update 


# CMAKE BASICS 
```
cmake [options] -S <path-to-source> -B <path-to-build>
```
path-to-source - should have CMakeLists.txt

path-to-build - is usually under build folder.

```
cmake
cd build
cmake -s ../ -B . 
cd ..
CMakeLists.txt
```


# Google Unit Test 
Example: https://www.eriksmistad.no/getting-started-with-google-test-on-ubuntu/ 

wget https://github.com/google/googletest/archive/release-1.8.0.tar.gz

tar xzf release-1.8.0.tar.gz

cd googletest-release-1.8.0

```
mkdir build && cd build
cmake ..
make -j
``` 

Now, copy the headers to a directory where compilers can find them:
sudo cp -r ../googletest/include /usr/local/include

copy static libraries: 
sudo cp -r ./googlemock/gtest/libgtest*.a /usr/local/lib/

Additionally, you can also add googlemock library (C++ framework for mocking objects):
sudo cp -r ./googlemock/libgmock*.a /usr/local/lib/


