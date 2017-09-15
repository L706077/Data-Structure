# Data-Structure

- [c++](http://www.cplusplus.com/reference/)
- [1](http://blog.csdn.net/longshengguoji/article/details/8550235)
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
|  **方法**  |
| ------ |
|vector::vector|
|vector::~vector|
|**member functions:**|
|vector::assign|
|vector::at|
|vector::back|
|vector::begin|
|vector::capacity|
|vector::cbegin|
|vector::cend|
|vector::clear|
|vector::crbegin|
|vector::crend|
|vector::data|
|vector::emplace|
|vector::emplace_back|
|vector::empty|
|vector::end|
|vector::erase|
|vector::front|
|vector::get_allocator|
|vector::insert|
|vector::max_size|
|vector::operator=|
|vector::operator[]|
|vector::pop_back|
|vector::push_back|
|vector::rbegin|
|vector::rend|
|vector::reserve|
|vector::resize|
|vector::shrink_to_fit|
|vector::size|
|vector::swap|
|**non-member overloads:**|
|relational operators (vector)|
|swap (vector)|

相較於deque少了push_front/ pop_front，但多了reverse()。


### deque
基本上與vector應用相同，但vector用了連續的記憶體位置而deque則不然，若太多東西時vector得另尋連續記憶體區塊將整個資料搬移,而deque就沒這個問題。<br/>
對iterator的存取率很高的時候，因為deque的記憶體是分開的，所以他的iterator的運算會多幾個檢查會比較慢，所以此時用vector會比較好。<br/>
deque從前後刪除都很快，而vector若從前面刪(pop_front())，則後面的東西皆要copy到前面。而從後(pop_back())面刪除vector跟deque差不多一樣快。 <br/>


|   **用法**    |     **說明** |
| --------- | --------- |
| c.assign(beg,end)  |  將[beg; end)區間中的數據賦值給c。 | 
| c.assign(n,elem)  |  將n個elem的拷貝賦值給c。 |
| c.at(idx)  |  傳回索引idx所指的數據，如果idx越界，拋出out_of_range。|
| c.back()  |  傳回最後一個數據，不檢查這個數據是否存在。|
| c.begin()  |  傳回迭代器重的可一個數據。|
| c.end()  |  指向迭代器中的最後一個數據地址。|
| c.clear()  |  移除容器中所有數據。|
| deque<Elem> c  |  創建一個空的deque。|
| deque<Elem> c1(c2)  |  複製一個deque。|
| deque<Elem> c(n)  |  創建一個deque，含有n個數據，數據均已缺省構造產生。|
| deque<Elem> c(n, elem)  |  創建一個含有n個elem拷貝的deque。|
| deque<Elem> c(beg,end)  |  創建一個以[beg;end)區間的deque。|
| c.~deque<Elem>()  |  銷毀所有數據，釋放內存。|
| c.empty()  |  判斷容器是否為空。|
| c.erase(pos)  |  刪除pos位置的數據，傳回下一個數據的位置。|
| c.erase(beg,end)  |  刪除[beg,end)區間的數據，傳回下一個數據的位置。|
| c.front()  |  傳回地一個數據。|
| get_allocator  |  使用構造函數返回一個拷貝。|
| c.insert(pos,elem)  |  在pos位置插入一個elem拷貝，傳回新數據位置。|
| c.insert(pos,n,elem)   |  在pos位置插入>n個elem數據。無返回值。|
| c.insert(pos,beg,end)  |  在pos位置插入在[beg,end)區間的數據。無返回值。|
| c.max_size()  |  返回容器中最大數據的數量。|
| c.pop_back()  |  刪除最後一個數據。|
| c.pop_front() |  刪除頭部數據。|
| c.push_back(elem)  |  在尾部加入一個數據。|
| c.push_front(elem)  |  在頭部插入一個數據。|
| c.rbegin()  |  傳回一個逆向隊列的第一個數據。|
| c.rend()  |  傳回一個逆向隊列的最後一個數據的下一個位置。|
| c.resize(num)  |  重新指定隊列的長度。|
| c.size()  |  返回容器中實際數據的個數。|
| swap(c1, c2)  |  將c1和c2元素互換。|


### list
|  **方法**  |
| ------ |
|list::list|
|list::~list|
|**member functions:**|
|list::assign|
|list::back|
|list::begin|
|list::cbegin|
|list::cend|
|list::clear|
|list::crbegin|
|list::crend|
|list::emplace|
|list::emplace_back|
|list::emplace_front|
|list::empty|
|list::end|
|list::erase|
|list::front|
|list::get_allocator|
|list::insert|
|list::max_size|
|list::merge|
|list::operator=|
|list::pop_back|
|list::pop_front|
|list::push_back|
|list::push_front|
|list::rbegin|
|list::remove|
|list::remove_if|
|list::rend|
|list::resize|
|list::reverse|
|list::size|
|list::sort|
|list::splice|
|list::swap|
|list::unique|
|**non-member overloads:**|
|relational operators (list)|
|swap (list)|
<br/>


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
- [linkedlist](http://www.geeksforgeeks.org/reverse-a-linked-list/)



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





