#include <iostream>
using namespace std;

// 定义地图大小
#define H 28
#define W 60

// 绘制地图
void drawMap() {
	system("cls"); // 清空控制台
	cout << "<";
	for (int i = 0; i < W; ++i) {
		cout << "-";
	}
	cout << ">" << endl;
	for (int y = 0; y < H; ++y) {
		cout << "1";
		for (int x = 0; x < W; ++x) {
			cout << " ";
		}
		cout << "1" << endl;
	}
	cout << "<";
	for (int i = 0; i < W; ++i) {
		cout << "-";
	}
	cout << ">" << endl;
}

int main() {
	drawMap();
	while (1) {
	}
	return 0;
}