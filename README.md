# Data-Structure

- [c++](http://www.cplusplus.com/reference/)

## STL(Standard Template Library) 標準樣板函式庫
- **Container容器** : vector, deque, list, queue, stack, map, unordered_map
- **Algorithm演算法**: find, search, sort, merge, count, reverse, swap, max, min
- **Iterator迭代器** : ::iterator
- **輸入輸出流/字串字元處理** : stringstream, string

### vector

### deque

### list

### queue

### stack

### map

### unordered_map

---

### find

### search

### sort

### merge

### count

### reverse

### swap

### max/min

---

### iterator

---


### StringStream

### string

#### int to string
```C++
include <iostream>

stringstream ss;
int number  = 123456;
ss << number; //把int型態變數寫入到stringstream

cout << "int to string" <<endl;
string convert_str;
ss >>  convert_str;  //透過串流運算子寫到string類別即可

cout << "number:" << number <<endl;
cout << "convert to str type:" << convert_str <<endl;
cout << "string to int" <<endl;
```
<br/>

#### string to int
```C++
include <iostream>
stringstream ss;

string numberStr = "654321";
int num;
ss << numberStr; 
ss >> num;

cout << "str type:" << numberStr <<endl;
cout << "convert to num:" << num <<endl;
```

含有非空格字符，那麼每次 **>>** 操作就會提取連在一起的非空格字符，若有空格字符則自動分段非空格字符串輸出。<br/>
若streamstring已無任何分段字符串，則輸出為空("") <br/>
<br/>

**StringStream 是一個專門用來處理讀取或寫入到String的類別。<br/>**
**最常見的使用方法是拿StringStream來做字串的分割（空白切割）或int與String類別的之間的轉換。<br/>**
- [streamstring](https://dotblogs.com.tw/v6610688/2013/11/08/cplusplus_stringstream_int_and_string_convert_and_clear)

---

### atoi & itoa

---

# only use c++ to create: 

### linkedlist queue stack

### sort search

### binary tree



---

# others

### class

### override

### template

### virtual








