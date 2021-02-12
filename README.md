# libpmem v1.0.0 by Pol4bear

**To report bugs and other problems please create new issue on [GitHub](https://github.com/pol4bear/libpmem/issues/new) or send an e-mail to [admin@pol4.dev](mailto:admin.pol4.dev)**

The [document directory](https://github.com/pol4bear/libpmem/tree/master/doc) has README files of quickstart and library info.

# Preview

```shell
 # ./vector_test 
-------- Vector Test --------
[pmem] new(4) → 0x55cc14faceb0
added 1
[pmem] new(8) → 0x55cc14fad2e0
[pmem] delete(0x55cc14faceb0)
added 2
[pmem] new(16) → 0x55cc14faceb0
[pmem] delete(0x55cc14fad2e0)
added 3
added 4
[pmem] new(32) → 0x55cc14fad300
[pmem] delete(0x55cc14faceb0)
```

# Requirements

- Cmake 3.1.9 or higher
- libstdc++
- C/C++ Compiler

# Supported Platforms

- Linux
- Windows
- macOS
