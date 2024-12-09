# vscode-setup
## 1. How to setup vscode
- **Windows:** Follow the instructions at https://code.visualstudio.com/docs/cpp/config-mingw
- **Mac:** Follow the instructions at https://code.visualstudio.com/docs/cpp/config-clang-mac


## 2. Some tricks to fix common vscode issues
- Make sure you open a folder using vscode
- delete the .vscode folder and the executable (.exe in windows in your current folder) if vscode fails to compile
- make sure you selected g++ as the compiler option
- When compile and run your code, use the arrow button on the upper right side of the IDE. You can also select the option of debug or run for that button
- If using a mac, don't include bits/stdc++.h. Instead include the following libraries
```c++
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <climits>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <cassert>
#include <unordered_map>
#include <bitset>
``` 