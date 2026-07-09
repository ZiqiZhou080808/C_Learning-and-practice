# C_Learning-and-practice
Pre-learn C language
## 2026.07.09 多重定义报错
- **报错内容**：找到一个或多个多重定义的符号（LNK1169/multiple definition)
- **犯错场景**：在同一个项目中创建了两个".c"文件，各自都有一个main函数。
- **原因分析**：编译器不知道程序该从哪个main开始执行，导致链接阶段冲突。
- **解决方案**：将不运行的文件从生成中排除。
