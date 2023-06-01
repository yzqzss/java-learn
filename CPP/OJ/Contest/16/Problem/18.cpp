// 数组---门牌号问题
// Description
// 宾馆里有n (n<= 10000) 个房间，从1-n编了号。第一个服务员把所有的房间门都打开了，第二个服务员把所有编
// 号是2的倍数的房间"相反处理"，
// 第三个服务员把所有编号是3的倍数的房间作"相反处理"…，以后每个服务员都是如此。当第n个服
// 务员来过后，总共有多少扇门是打开的。
// （所谓"相反处理"是：原来开着的门关上，原来关上的门打开。）
// Input
// 输入一个正整数n。
// Output
// 输出一个正整数，表示有多少扇门是开着的。

#include <iostream>
using std::cin,std::cout;

int main(){
    int n;
    bool door[10001];
    // 开所有门, door[0] 不用
    for (int i=0;i<=10000;i++){
        door[i] = true;
    }
    cin>>n;

    int server = 2;
    while (server <= n){
        for (int i=server;i<=10000;i+=server){
            door[i] = !door[i];
        }

        server++;
    }

    int opened_doors = 0;
    for (int i=1;i<=n;i++){
        if (door[i] == true){
            opened_doors++;
        }
    }

    cout<<opened_doors;
}

// #include <iostream>
// using namespace std; 
// int n;
// int main(){  
//     int i,j,k,ans=0;
//     cin>>n;
// 	for(int i=1;i*i<=n;i++){ 
// 		ans++;
// 	}
// 	cout<<ans<<endl;
// }
