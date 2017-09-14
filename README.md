# Data-Structure

- [c++](http://www.cplusplus.com/reference/)

## STL(Standard Template Library) 標準樣板函式庫
- **Container容器** : vector, deque, list, queue, stack, map, unordered_map
- **Algorithm演算法**: find, search, sort, merge, count, reverse, swap, max, min
- **Iterator迭代器** : ::iterator
- **輸入輸出流/字串字元處理** : stringstream, string
<br/>

(1).
容器可以分為三種：<br/>
- **序列容器：vector deque list**<br/>
  **Vector**：可從後端執行快速的插入和刪除，直接訪問任何元素<br/>
  **Deque**：從前面或後面執行快速的插入和刪除，直接訪問任何元素<br/>
  **List**：雙鍊錶，能在任何地方執行快速的插入和刪除<br/>

- **關聯容器： set multiset map multimap**<br/>
  **Set**：執行快速搜索，元素不允許重複<br/>
  **Multiset**：執行快速搜索，元素允許重複<br/>
  **Map**：一對一映射，元素不允許重複，快速的基於鍵的搜索<br/>
  **Multimap**：一對多映射，元素允許重複，快速的基於鍵的搜索<br/>

- **容器適配器： stack queue priority_queue**<br/>
  **Stack**：後進先出<br/>
  **Queue**：先進先出<br/>
  **priority_queue**：優先級最高的元素總是最先出隊<br/>

### vector

### deque
基本上與vector應用相同，但vector用了連續的記憶體位置而deque則不然，若太多東西時vector得另尋連續記憶體區塊將整個資料搬移,而deque就沒這個問題。<br/>
對iterator的存取率很高的時候，因為deque的記憶體是分開的，所以他的iterator的運算會多幾個檢查會比較慢，所以此時用vector會比較好。<br/>
deque從前後刪除都很快，而vector若從前面刪(pop_front())，則後面的東西皆要copy到前面。而從後(pop_back())面刪除vector跟deque差不多一樣快。 <br/>



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

---

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

<br/>

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

### inline

### typedef / #define

### ifdef else/ifndef else





