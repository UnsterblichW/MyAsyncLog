
<!-- TOC -->
- [MyAsyncLog简介](#myasynclog简介)
  - [功能概述](#功能概述)
  - [性能](#性能)
- [安装和使用](#安装和使用)
<!-- TOC -->

# MyAsyncLog简介
[![License](https://img.shields.io/badge/License-MIT-green)](https://github.com/ACking-you/MyAsyncLog/blob/master/LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Cross--platformable-blue)](https://img.shields.io/badge/Platform-Cross--platformable-blue)
[![Language](https://img.shields.io/badge/Language-C%2B%2B11%20or%20above-red)](https://en.cppreference.com/w/cpp/compiler_support/11)

`MyAsyncLog` 是一个简单易用的日志库，支持C++11及以上版本，支持多平台（Linux、Windows)，接口易用而且性能不错。

## 功能概述
1. API简单，便于使用，在安装了项目之后可以通过调用类的静态方法或者宏定义来输出日志，可见几个简单示例[examples](https://github.com/UnsterblichW/MyAsyncLog/blob/main/examples)
2. 依赖了`fmt`库，使得这个日志库的格式化输出很简单，也易于阅读。
3. 支持用户自定义格式化方式。用户可以自定义`formatter`来实现自己所需的日志输出格式，本库也提供了4个默认的格式化，详见[formatter](https://github.com/UnsterblichW/MyAsyncLog/blob/main/include/malog/formatter.h)
4. 支持用户自定义配置，可配置选项有
   * 滚动日志文件大小，
   * 异步刷入日志间隔时间，
   * 日志输出的最终目的地，
   * 日志打印的级别，
   * 日志信息格式化的方式，
   * 可读取json配置文件后，自定义修改某些参数。
5. 本项目使用CMake配置项目，且支持通过CMake自动拉取所需的依赖项目，对用户来说可以实现极其方便的安装和引入。

## 性能
* 异步输出一条日志的延迟只需 `120ns`，是 spdlog 至少4倍的性能。
对于benchmark，可以参考[tests/bench_start.cc](https://github.com/UnsterblichW/MyAsyncLog/blob/master/tests/bench_start.cc)

# 安装和使用
以下两种方式任选其一即可
* Method 1：用cmake中的 `FetchContent` 模块将本项目引入目标工程中
  1. 先引入，CMake代码如下：
        ```cmake
        include(FetchContent)
        FetchContent_Declare(
                MyAsyncLog
                GIT_REPOSITORY https://github.com/ACking-you/MyAsyncLog.git
                GIT_TAG origin/fetch
                GIT_SHALLOW TRUE)
        FetchContent_MakeAvailable(MyAsyncLog)
        ```
  2. 再链接 `malog`即可
        ```cmake
        target_link_libraries(target  malog)
        ```
* Method 2：下载源码，加入项目子模块
    1. 将该项目添加到子项目中：
        ```cmake
        add_subdirectory(MyAsyncLog)
        ```
    2. 在需要使用该库的目标中链接 `malog` 即可。
        ```cmake
        target_link_libraries(target  malog)
        ```
