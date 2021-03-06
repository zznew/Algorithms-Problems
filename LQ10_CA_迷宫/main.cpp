#include <bits/stdc++.h>
using namespace std;

char mp[30][50];	//��ͼ
bool vis[30][50];	//��Ǹõ��Ƿ��߹�
int dir[4][2] = {{1,0},{0,-1},{0,1},{-1,0}};	//�������鰴���£����ң��ϵ�˳����
char dirc[4] = {'D','L','R','U'};
int n,m;  	//�Թ�������

struct node{
	int x;	//������
	int y;	//������
	int step;	//����
	string str;	//·��
	node(int xx, int yy, int ss, string s) {	//���캯��
		x = xx;
		y = yy;
		step = ss;
		str = s;
	}
};

queue<node> q; //��������

bool check(int x, int y) {	//�ж��Ƿ�Խ���Լ��Ƿ���ǽ�Լ��Ƿ���ʹ���
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
		if (now.x == n - 1 && now.y == m - 1) {	//�����յ���
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
