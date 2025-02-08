# Basic Utilities for C++

These are simple header files that provides some basic utility functions for my C++ projects.

## Installation

Just copy the contents of the `include` folder to your projects `include` directory and include it in your source file.

```cpp
#include "include/consoleUtils.h"
```

## Usage

### Clearing the console

```cpp
consoleUtils::clear();
```

### Setting the console title

```cpp
consoleUtils::setTitle("My Console Application");
```

### Box drawing

To draw a box for your console application, you can use the `fullLine`, `printSpacer`, and `printText` functions.

#### Full line

This function will draw a full line of a specified length with a specified character.

```cpp
consoleUtils::fullLine(20, '-');
```

Output:

```bash
--------------------
```

#### Print spacer

This function will draw a spacer with a specified length.

```cpp
consoleUtils::printSpacer(20, '*;);
```

Output:

```bash
*                  *
```

#### Print text

This function will draw a line with text in the alignment specified.

The arguments for `printText` are as follows:
- `text` - The text to be printed.
- `width` - The width of the line.
- `dir` - The alignment of the text. It can be `LEFT`, `RIGHT`, or `CENTER`.
- `offset` - The offset of the text from the edge of the line. (Only works with `LEFT` and `RIGHT` alignments)
- `symbol` - The character to be used for the line.

```cpp
consoleUtils::printText("Hello, World!", 20, consoleUtils::Alignment::CENTER, 0, '*');
```

Output:

```bash
*  Hello, World!   *
```

### Example usage

```cpp
#include <iostream>
#include "include/consoleUtils.h"

using namespace std;

int main() {
    clear();
    setTitle("My Console Application");

    fullLine(20, '*');
    printSpacer(20, '*');
    printText("Hello, World!", 20, consoleUtils::Alignment::CENTER, 0, '*');
    printSpacer(20, '*');
    fullLine(20, '*');

    return 0;
}
```

Output:

```bash
********************
*                  *
*  Hello, World!   *
*                  *
********************
```


## Contributing

Contributions are welcome! Before creating an issue, please ensure that it hasn't already been reported/suggested.

## License

This repository is licensed under the [Apache 2.0 License](LICENSE).
