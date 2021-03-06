#include <bits/stdc++.h>
using namespace std;

char mp[30][50];	//地图
bool vis[30][50];	//标记该点是否走过
int dir[4][2] = {{1,0},{0,-1},{0,1},{-1,0}};	//方向数组按照下，左，右，上的顺序走
char dirc[4] = {'D','L','R','U'};
int n,m;  	//迷宫的行列

struct node{
	int x;	//横坐标
	int y;	//纵坐标
	int step;	//步数
	string str;	//路径
	node(int xx, int yy, int ss, string s) {	//构造函数
		x = xx;
		y = yy;
		step = ss;
		str = s;
	}
};

queue<node> q; //创建队列

bool check(int x, int y) {	//判断是否越界以及是否是墙以及是否访问过了
	if (x < 0 || x >= n || y < 0 || y >= m || vis[x][y] || mp[x][y] == '1') {
		return false;
	}
	return true;
}

void bfs(int x, int y) {
	q.push(node(x, y, 0, ""));
	vis[x][y] = true;
	while (!q.empty()) {
		node now = q.front();
		if (now.x == n - 1 && now.y == m - 1) {	//到达终点了
			cout << now.str << endl;
			cout << now.step << endl;
			break;
		}
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = now.x + dir[i][0];
			int ny = now.y + dir[i][1];
			if (check(nx, ny)) {
				q.push(node(nx, ny, now.step + 1, now.str + dirc[i]));
				vis[nx][ny] = true;
			}
		}
	}
}

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", mp[i]);
	}
	bfs(0, 0);
	return 0;
}
