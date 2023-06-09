# OpenMP tutorial

## Enable OpenMP support on MacOS M1/M2

First, install `gcc` by `homebrew`

```bash
brew install gcc
```

then, install `libomp`

```bash
brew install libomp
```

At the completion of the installation, add these lines to the bottom of the `.zshrc`(default bash profile for mac) or `.bashrc` file to make OpenMP available.

```text
export LDFLAGS="-L/opt/homebrew/opt/libomp/lib"
export CPPFLAGS="-I/opt/homebrew/opt/libomp/include"
```

Finally, in the C++ toolchain, make `gcc` installed by `homebrew` as the C/C++ compiler.

## OpenMP tutorials

### OpenMP reduction example

```cpp
#pragma omp parallel for reduction( + : sum )
for (auto i = 1; i<1000000; ++i) 
{
    sum += i;
}
```

### OpenMP if condition

```cpp
 #pragma omp parallel for reduction( + : sum ) if(conditions) default(none)
    for (auto i = 1; i<1000000; ++i) {
        sum += log(i);
    }
```

this program will be excuted in multi-threaded mode only if the `conditions` are evaluated to `true`.
