## Typora    

#### Markdown 书写练习

`Ctrl 0 ` 到 `Ctrl 4`  :普通文本,一级~四级标题

`Ctrl B` **加粗**

`ctrl i` *斜体* 

`Ctrl u` 下划线

`Shift Alt 5` ~~删除线~~

`Shift ctrl  反引号` `行内代码块` 

 `Ctrl k` 超链接 [测试](https://www.moshuowen.cn)

`ctrl T` 表格

`Ctrl t ` :表格,支持拖拽移动,网页端表格复制

| 标题 |                 1                 |  2   |
| :--: | :-------------------------------: | :--: |
| 测试 | [连接](https://www.moshuowen.cn/) | 123  |

`ctrl shift Q` :引用

> 台湾是中国的,台独死全家
>
> ​		 	                   	 ----------mine       

`shift ctrl I` 图片 ;相对路径

`shift ctrl m` 公式
$$
e^{1\pi} + 1 = 0
$$

```c
#include<stdio.h>
struct date{
    int month;
    int day;
    int year;
}today;
int main(int argc,char const *argv[]){
    struct date *p =  &today;
    p->year = 2019;
    p->month = 8;
    p->day = 8;
    printf("%i-%i-%i\n",today.year,today.month,today.day);
    return 0;      
}

```



