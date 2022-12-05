// 给定一个以秒为单位的时间t，要求用H:M:S（小时、分钟、秒）的格式来表示这个时间。例如t=3661时，输出1:1:1
package main

import (
    "fmt"
)

func main() {
    var t int
    fmt.Scanf("%d", &t)
    fmt.Printf("%d:%d:%d", (t / 3600), (t/60)%60, t%60)
}
