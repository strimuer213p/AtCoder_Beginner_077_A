/*
問題文
縦 2 マス、横 3 マスのマス目が与えられます。上から i 行目、左から j 行目のマスの色は、Cij で表されます。
このマス目を 180 度回転させたとき、元のマス目と一致するなら YES を、そうでないなら NO を出力するプログラムを作成してください。
*/

#include<iostream>
#include<vector>
#include<string>

const int vertical = 2;  //今回も　2×3　以外のパターンもできるように
const int side = 3;      //ここの変数を変えれば一応どんな行列にも対応できるようにしたい　//2×3以外で試してないけど…

int main() {
	int count = 0,a;
	bool flag;
	std::vector<std::string> v;
	std::vector<std::vector<std::string>> vv;
	
	v.resize(vertical);
	vv = std::vector<std::vector<std::string>>(vertical, std::vector<std::string>(side));

	for (int i = 0; i < vertical; i++) {
		std::cin >> v[i];
		for (int j = 0; j < side; j++) {
			vv[i][j] = v[i].substr(j, 1);
		}
	}


	for (int i = 0; i <vertical/2; i++) {
		for (int j = 0; j <side; j++) {
			count += vv[i][j] == vv[vertical - 1 - i][side - 1 - j] ? 1 : 0;
		}
	}

	flag=count == side;
	std::cout <<( flag ? "YES" : "NO") << std::endl;
	return 0;
}