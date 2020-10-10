<h1 align="center">Programming I lab practices</h1>
<p align="center"><img src="https://img.shields.io/github/license/rixsilverith/university-setup?style=flat-square"/></p>

> In this repo you'll find all of my laboratory practices from the Programming I course taken on the first semester of my degree in Computer Science and Engineering.

All of the practices of this course under the **src** folder are written using **C** language, and the corresponding lecture notes for this course can be found [here]().

## Compilation
As these practices are written in C you'll need the corresponding compiler for this language. In Linux can be easily setup by installing the `gcc` package with the package manager of your distribution.

In order to work with these little programs in a more comfortable way make use of the `gccr` script.
```bash
./gccr <filename>
```
This script will first clean the **src** directory from any file other than `.c` files to avoid having too much clutter, then it will compile the targeted source file using the `gcc` compiler, and finally it will automatically run that source file.

> Some things to notice when running the `gccr` script:
- `<filename>` should not include the `.c` extension. Otherwise, an error will show.
- The `gccr` script should be run from the root of this project, not inside the **src** folder.

## License
This source files are under the MIT license. Check [LICENSE](LICENSE) for more information.
